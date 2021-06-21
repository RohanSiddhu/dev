#This program calculates the factorial of the entered by the user.
#Coded by: Rohan Siddhu
#Date: 29/07/2018

def main():
    fact=1
    num=int(input("Enter the number: "))

    for i in range(num):
        fact=fact*(i+1)

    print("Factorial of", num, "is:",fact)
    input()

main()
