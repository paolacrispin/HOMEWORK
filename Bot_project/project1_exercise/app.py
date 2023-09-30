import random
import math
import datetime as dt
from database import *

# TODO:
#       @input: La respuesta del usuario
#       @output: Esta funcion debe responder a las entradas "todo bien", "super", "bien"
#                con un string de la lista HOW_ARE_YOU
#
#                Si la respuesta del usuaria es "mal", "no muy bien"
#                la funcion retorna "Hey aqui estoy para ayudarte"
#
#                Si la respuesta es gracias
#                la funcion retorna "Hey para eso estamos!"
def how_am_i(user_input : str) -> str:

    if user_input.lower() == "todo bien" or user_input.lower() == "super" or user_input.lower() == "bien":
        return random.choice(HOW_ARE_YOU)

    if user_input.lower() == "mal" or user_input.lower() == "no muy bien":
        return "Hey aqui estoy para ayudarte"
    
    if user_input.lower() == "gracias":
        return "Hey para eso estamos!"


# TODO: Procesamos la respuesta del usuario
def process_query(user_input, bot_name):
    # TODO: Si la respuesta esta en ingles. el bot respondera hey no hablo ingles!
    #       por tanto la funcion retorna una string "hey no hablo ingles!"
        if user_input in ENGLISH_GREETINGS:
            return "hey no hablo ingles"

    # TODO: Si la entrada se encuentra en nuestra lista QUESTIONS
    #       se procede a procesarla
    #       Si no se encuentra en nuestra lista de QUESTIONS el bot respondera "No entiendo"
        if user_input in QUESTIONS:

        # TODO: Si la entrada es igual a la pregunta "cuantos amigos tengo"
        #       Asegurese de modificar la string de entrada en todas minusculas
        #       ya que el usuario puede responder con la primera letra en mayuscula: Usar lower()
        #       la funcion retorna f"format_friends_count(count)"
            if user_input.lower() == "cuantos amigos tengo?":
                count : int = random.randint(0, 10)
                return format_friends_count(count)

        # TODO: Si la pregunta es "donde viven mis amigos?"
        #       la funcion retorna: Viven en: Ciudad1 Ciudad 2 etc
            if user_input == "donde viven mis amigos?":
                    string_cities = ""
                    cities = FRIENDS.values()
                    string_cities : str = "  ".join(cities)
                    return f"Viven en: {string_cities}"

        # TODO: Si la preguntas es que hora es
        #       la funcion retorna la hora actual en SCZ
        #       usar la funcion de ayuda what_time(city)
            if "que hora es?" == user_input.lower():
                city : str= random.choice(list(UTC_OFFSETS.keys()))
                return what_time(city)

        # TODO: si el usuario esta saludando "Hola", "buenas", etc
        #       esta funcion debe retornar una de las posibles respuestas de ANSWER_GREETINGS
        #       se espera el siguiente formato: NO SE PUEDE PONER BUENAS PORQUE NO ESTA EN EL ARCHIVO .TXT
        #                                       Bob: Hola!
            if user_input == "hola":
                return random.choice(ANSWERS_GREETINGS)

        # TODO: Si el usuario pregunta al bot como estas?
        #       este debera seleccionar alguna respuesta de ANSWER_HRU
            if user_input == "como estas?":
                return random.choice(ANSWER_HRU)

        # TODO: CASO CONTRARIO SE LLAMA HOW_AM_I
            else:
                return how_am_i(user_input=user_input)

        else:
            return f"No entiendo"


def format_friends_count(count : int) -> str:
    if count == 1:
        return f"Tienes {count} amigo!"
    if count > 1:
        return f"Tienes {count} amigos!"

    return f"Oh algo paso :("


def what_time(city):
    offset = UTC_OFFSETS[city]
    city_time = dt.datetime.utcnow() + dt.timedelta(hours=offset)
    f_time = city_time.strftime("%H:%M")
    return f_time

def save_reporte(answer):
    conversacion.append(answer)
    with open(archivo, "w") as file:
        for mensaje in conversacion:
            file.write(mensaje + "\n")


# No modificar esta funcion
def runner():
    bot_name = "Bob"

    # recibimos input del usuario
    # note como modificamos la string con el metodo capitalize() para que se visualice mejor
    user_name = input("Enter your name: ").capitalize()
    
    # Mensaje de bienvenido
    print(f"Hello there {user_name}, I am your personal assistant {bot_name}")
    save_reporte(f"Hello there {user_name}, I am your personal assistant {bot_name}")
    # Loop infinito para recibir input del usuario multples veces
    while True:

        # Recibimos la pregunta/solicitud del usuario
        user_input = input(f"{user_name}: ").lower()
        save_reporte(user_input)
        # Si se despide el usuario termianmos el programa
        if user_input == "quit" or user_input == "chau" or user_input == "bye":
            print(f"Bye bye! {user_name.capitalize()}")
            save_reporte(f"Bye bye! {user_name.capitalize()}")
            break

        # Procesamos el mensaje
        answer = process_query(user_input=user_input, bot_name=bot_name)

        # Escribimos un reporte el cual se guardara en la directive ./reports
        print(answer)
        save_reporte(answer)
