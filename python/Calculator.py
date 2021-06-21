#This is a Calculator program.
#Coded by: Rohan Siddhu
#Date: 29/07/2018

def main():
    for i in range(100):
        operator=input("Choose the operaion you want to pearform; +, -, /,* : ")
        num1=eval(input("Enter first number: "))
        num2=eval(input("Enter second number: "))
        
        if operator=='+':
            print("Sum of the two numbers is:", num1+num2)
        if operator=='-':
            print("Difference of two number is:", num1-num2)
        if operator=='/':
            print("Quotient of the divisin is:", num1/num2)
        if operator=='*':
            print("Product of two numbers is:", num1*num2)
main()
