import math
def solving_problem(int n):
    if (n==0):
        print(" ")

    if (n==1):
        print(f"0")
        print(f"1") 

    else:
        solving_problem(n-1)
    
def runner():
    n : int = 3
    solving_problem(n)