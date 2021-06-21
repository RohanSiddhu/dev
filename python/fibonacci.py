# fibonacci.py
# This Program prints first 23 members of fibonacci series.

def fibonacci(length=23,/):
    a=1; b=0

    print(a, end=' ')
    while length:
        a,b=a+b,a
        print(a, end=' ')
        length-=1

if __name__=="__main__":
    fibonacci()
