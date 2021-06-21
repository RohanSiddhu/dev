# linear_search.py
# This program use linear search algorithm to search element in an array.

def lsearch(arr, item):
    i=0
    while i<len(arr) and arr[i]!=item:
        i+=1
    if i<len(arr):
        return i
    else:
        return False

def main():
    n=int(input("Enter desired list size: "))
    print("Enter elements of the list: ")
    arr=[0]*n

    for i in range(n):
        arr[i]=int(input("Element"+str(i)+": "))

    item=int(input("Enter the element to be searched searched: "))

    if index:=lsearch(arr, item):
        print("\nElement found at index: ", index, ", Position: ", (index+1))
    else:
        print("\nSorry!! Given element could not be found.\n")

    input("\n\tPress Enter To Exit.")

if __name__=="__main__":
    main()
