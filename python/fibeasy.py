#Easy Fibonacci
#Coded By: Rohan Siddhu
#Date: 12/09/2019

def main():
    a=0; b=1
    d=[0,1]
    n=int(input("Enter number: "))
    #print(a, b, end=' ')

    for i in range(2, n):
        #print(a+b, end=' ')
        d.append((a+b)%10)
        a,b=d[i-1],d[i]

    l=len(d)
    e=d

    while(l>1):
        for i in range(0, l, 2):
            
        l=len(d)

    print(d)
    input()

main()
