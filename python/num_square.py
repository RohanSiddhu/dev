# This is a Test Program.
# Coded by: Rohan Siddhu

def square(num=0):
    print(" Square of", num, "is: ", num**2, sep=' ', end='\n')
    input("Press Enter to exit.")

if(__name__=='__main__'):
    square(int(input('Enter any integer: ')))
