# factorial_recursion.py
# This program calculate factorial recursively.

def fact(num):
    if num==1:
        return 1
    return num * fact(num-1)

def main():
    num=int(input("Enter number(max. 1023): "))
    print("Factorial of", num, "is:", fact(num))

    input("\n\tPress Enter To Exit.")

if __name__=="__main__":
    main()
