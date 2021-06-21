# largest_of_three.py
# This program finds the largest number from the given triplet of numbers.

def largest(a, b, c):
    if a>b and a>c: return a
    elif b>a and b>c: return b
    elif c>a and c>b: return c
    else: return False

def main():
    a=int(input("Enter first number: "))
    b=int(input("Enter second number: "))
    c=int(input("Enter third number: "))

    if result:=largest(a, b, c):
        print("\nThe largest of the three is:", result)
    else:
        print("\nAll are equal.")

    input("\n\tPress Enter To Exit.")

if __name__=="__main__":
    main()
