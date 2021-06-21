#This program prits an ASCII art.
#Coded By: Rohan Siddhu
#Date:

def main():
# Line 1
    for i in range(0, 10):
        print(end=' ')
    for i in range(0, 20):
        print(end='_')
    for i in range(0, 30):
        print(end=' ')
    for i in range(0, 20):
        print(end='_')
    print()

# Line 2
    for i in range(0, 9):
        print(end=' ')
    print(end='/')
    for i in range(0, 20):
        print(end=' ')
    print(end='\\')
    for i in range(0, 28):
        print(end=' ')
    print(end='/ /')
    for i in range(0, 16):
        print(end=' ')
    print('\\ \\')

# Line 3
    for i in range(0, 8):
        print(end=' ')
    print(end='/ /')
    for i in range(0, 13):
        print(end=' ')
    print(end='\\ \\    \\')
    for i in range(0, 26):
        print(end=' ')
    print(end='|')
    for i in range(0, 5):
        print(end=' ')
    print(end='-')
    for i in range(0, 5):
        print(end=' ')
    print(end='-')
    for i in range(0, 10):
        print(end=' ')
    print('\\')

# Line 4
    for i in range(0, 8):
        print(end=' ')
    print(end='|')
    for i in range(0, 22):
        print(end=' ')
    print(end='|')
    for i in range(0, 26):
        print(end=' ')
    print(end='|  /')
    for i in range(0, 9):
        print(end=' ')
    print('-      \\  |')

# Line 5
    for i in range(0, 7):
        print(end=' ')
    print(end='/')
    for i in range(0, 22):
        print(end=' ')
    print(end='/')
    for i in range(0, 27):
        print(end=' ')
    print(end='\\')
    for i in range(0, 22):
        print(end=' ')
    print('\\')

# Line 6
    for i in range(0, 6):
        print(end=' ')
    print(end='|')
    for i in range(0, 6):
        print(end=' ')
    print(end='___\\  \\|  |  /  /')
    for i in range(0, 29):
        print(end=' ')
    print(end="\\")
    for i in range(0,  15):
        print(end='_')
    print("    \\  \\")

# Line 7
    for i in range(0, 6):
        print(end=' ')
    print(end='|')
    for i in range(0, 6):
        print(end=' ')
    print(end='/')
    for i in range(0, 15):
        print(end=' ')
    print(end='|')
    for i in range(0, 29):
        print(end=' ')
    print(end='|')
    for i in range(0, 15):
        print(end=' ')
    print(end='\\')
    for i in range(0, 6):
        print(end=' ')
    print('|')

    input()

main()
