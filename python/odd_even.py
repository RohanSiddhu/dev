#odd_even.py
#This Program checks whether the given number is even or odd.

def odd_even(num):
    if num%2==0:
        return "Even"
    else:
        return "Odd"

def main():
    num=int(input("Enter any integer value: "))
    
    print(odd_even(num))
    input()

if __name__=="__main__":
    main()
