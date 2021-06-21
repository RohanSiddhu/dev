# This program takes input a, b, c and n and check if a**n+b**n=c**n,
# which is the Fermat's last theorem.
# Coded By: Rohan Siddhu
# Date: 28/08/2019

def check_fermat(a, b, c, n):
    if(n>2 and a**n+b**n==c**n):
        print("Holy smokes, Fermat was wrong!")
    else:
        print("No, that dosen't work.")

def main():
    a=int(input("Enter a:"))
    b=int(input("Enter b:"))
    c=int(input("Enter c:"))
    n=int(input("Enter n:"))
    check_fermat(a, b, c, n)

main()
