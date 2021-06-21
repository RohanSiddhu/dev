# leap_year.py
# This progam checks for a leap year.

def leap_year(year,/):
    if year%100==0 and year%400==0:
        return True
    elif year%100!=0 and year%4==0:
        return True
    else:
        return False

def main():
    if leap_year(int(input("Enter any year: "))):
        print("Leap Year")
    else:
        print("Not a Leap Year")

    input("\n\tPress Enter To Exit.")

if __name__=="__main__":
    main()
