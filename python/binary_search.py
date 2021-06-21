# This program implements binary search algorithm.
# File Name: binary_search.py
# Coded By: Rohan Siddhu
# Date: 05/12/2019
# Tested on Windows 10 Pro version 1903 using Python 3.8.0

import random

def binary_search(li, val):
    beg=0; end=len(li)-1; mid=(beg+end)//2

    while beg<=end:
        if li[mid]==val:
            return mid
        elif li[mid]<val:
            beg=mid+1
            mid=(beg+end)//2
        elif li[mid]>val:
            end=mid-1
            mid=(beg+end)//2

    return -1

def main():
    li=list()
    for i in range(20):
        li.append(round(random.random()*100))
    li.sort()

    for i in li:
        print(i, end='  ')
    val=int(input("\nEnter the value: "))
    pos=binary_search(li, val)

    if pos!=-1:
        print("Elemant %d,"%(val), "found at position:", pos)
    else:
        print("Element", val, "is not found!")

    input("\n\tPress ENTER to exit.")

if __name__=="__main__":
    main()
