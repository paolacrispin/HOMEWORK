# Importa los módulos necesarios.
from datetime import datetime

FORMAT = '%H:%M:%S'
WEIGHT = 75  
HEIGHT = 175  
K_1 = 0.035  # Coeficiente para contar calorías.
K_2 = 0.029  # Coefficient for counting calories
STEP_M = 0.65  # Longitud de un paso en metros.

storage_data = {}  # Diccionario para almacenar los datos recibidos.


def check_correct_data(data : dict) -> bool:
    """Comprobar si el paquete recibido es correcto."""
    if data[0] is not None and data[1] > 0 :
        return True

    else :
        return False

def check_correct_time(time : datetime) -> bool:
    """Comprobar si el parámetro tiempo es correcto."""
    if not storage_data : #verifica si está vacío
        return True

    else :
        return time > max(storage_data.keys())


def get_step_day(steps : int ) -> int :
    """Obtén el número de pasos dados durante el día actual."""
    get_total_steps : int = 0
    if len(storage_data)==1 :
        return steps

    else :
        for value in storage_data.values() :
            get_total_steps += value

        return get_total_steps
    

def get_distance(steps : int ) -> float:
    """Obtén la distancia recorrida en km."""
    return ((steps*STEP_M)/1000)

def current_time_hour(time : datetime) -> float:
    horas = time.hour
    minutos = time.minute / 60.0
    return horas + minutos

def get_calories_burned(dist : float, current_time : float) -> float:
    """Obtén las calorías quemadas."""    
    return (K_1*WEIGHT+(((dist/current_time)*(dist/current_time))/HEIGHT)*K_2*WEIGHT)*(current_time*60.0)

def get_achievement(dist : float ) -> str:
    if dist<2 :
        return "Está bien tomarse el día de descanso. No siempre se puede ganar."
  
    elif dist >=2 and dist < 3.9 :
        return "Menos que el resultado deseado, ¡pero intenta alcanzarlo mañana!"

    elif dist >=3.9 and dist < 6.5 :
        return "¡Nada mal! Hoy ha sido un día productivo."

    else :
        return"¡Gran entrenamiento! Objetivo cumplido." 

#Convierte el string time en un objeto del tipo tiempo
def convertir_tiempo(tiempo_str : str) -> datetime:
    if tiempo_str is None:
        return None
    else:
        return datetime.strptime(tiempo_str, FORMAT).time()

# Coloca la función show_message.
def show_message(time : datetime, day_steps : int, dist : float, calories : float, achievement : str) -> None:
    print(f"Tiempo: {time}.")
    print(f"Pasos dados hoy: {day_steps}.")
    print(f"La distancia fue {dist}km.")
    print(f"Has quemado {calories} cal.")
    print(f"{achievement}\n")

def accept_package(data : dict) -> dict:

    """Procesar paquete de datos."""
    if check_correct_data(data)!= True : # Si la función package check devuelve False.
        return 'Paquete inválido'

    # Desempaqueta los datos recibidos.
    pack_time : datetime = convertir_tiempo(data[0])# Convierte el string con el tiempo en un objeto del tipo tiempo.

    if check_correct_time(pack_time)!= True : # Si la función time value check devuelve False.
        return 'Valor de tiempo inválido'

    # Agrega un nuevo elemento al diccionario storage_data.
    storage_data[pack_time] = data[1]

    day_steps : int = get_step_day(data[1]) # Guarda el resultado del conteo de los pasos dados.
    dist : float = get_distance(day_steps) # Guarda el resultado del cálculo de la distancia recorrida.
    current_time : float = current_time_hour(pack_time)
    calories_burned : float = get_calories_burned(dist, current_time)# Guarda el resultado del cálculo de las calorías quemadas.
    achievement : str=  get_achievement(dist)# Guarda el mensaje motivacional seleccionado.

    # Llama la función show_message().
    show_message(pack_time, day_steps, dist, calories_burned, achievement)

    # Devuelve el diccionario storage_data.
    return storage_data


# Self-test data. Do not delete it.
package_0 = ('2:00:01', 505)
package_1 = (None, 3211)
package_2 = ('9:36:02', 15000)
package_3 = ('9:36:02', 9000)
package_4 = ('8:01:02', 7600)

accept_package(package_0)
accept_package(package_1)
accept_package(package_2)
accept_package(package_3)
accept_package(package_4)