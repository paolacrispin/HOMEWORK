import random
import datetime as dt

FILE_PATH = "./data/"
ANSWERS_GREETINGS = []
ANSWER_HRU = []
QUESTIONS = []
FRIENDS = {}
ENGLISH_GREETINGS = []
HOW_ARE_YOU = []
conversacion = []

UTC_OFFSETS = {
    "Santa Cruz": -4,
    "Sucre": -4,
    "Moscu": 3,
    "Madrid": 7,
    "Florida": 5,
    "Laussane": 2,
    "Paris": 3,
    "San Peterburgo": 3,
}


def populate_items(file_name):
    with open(FILE_PATH + file_name) as file:
        file_items = file.readlines()
        items = [q.replace("\n", "") for q in file_items]
    return items


def populate_friends(file_name):
    with open(FILE_PATH + file_name) as file:
        friends = {}
        for line in file:
            key, value = line.split(", ")
            friends[key] = value
    return friends


questions_file = "questions.txt"
answer_greetings = "greetings.txt"
hru_answers = "hru_answers.txt"
friends = "friends.txt"
como_estas = "como_estas.txt"
english_greetings = "english_greetings.txt"
archivo = "./reports/reporte_conversacion.txt"

ANSWERS_GREETINGS = populate_items(answer_greetings)
ANSWER_HRU = populate_items(hru_answers)
QUESTIONS = populate_items(questions_file)
ENGLISH_GREETINGS = populate_items(english_greetings)
HOW_ARE_YOU = populate_items(como_estas)
FRIENDS = populate_friends(friends)
