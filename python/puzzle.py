'''--------------------------------------------------------------------------------------------------
                                            PUZZLE!
                                          -----------
    _____________________________________________________________________________________________'''

# File: main.py
# Coded By: Rohan Siddhu
# Date: 27/11/2019

''' Files Included '''

import msvcrt       # Microsoft Visual C/C++ Runtime Library
import colorama; colorama.init()     # To use ANSI escape sequence.
import os


''' Function's Declaration '''

clear=lambda: os.system("cls")      # Clear Console Window.

def gotoxy(row, col):
    ''' Move cursor to coordinates x,y '''
    print("\033[%d;%dH"%(row, col), end='')      # Using ANSI escape sequence to position cursor.

def hline(length):
    ''' This function draws horizontal line of given length. '''
    for i in range(length):
        print(chr(45), end='')

def vline(length, row, col):
    ''' This function draws vertical line of given length. '''
    for i in range(length):
        gotoxy(row+i, col)
        print(chr(124), end='')

def rectangle(a, b, c, d):
    ''' This function draw a rectangle between the coordinates (a, b) and (c,d) '''
    gotoxy(a, b)
    print(chr(43), end='')
    for i in range(d-b-1):
        print(chr(45), end='')
    print(chr(43), end='')

    for i in range(1, c-a):
        gotoxy(a+i, b)
        print(chr(124), end='')

    for i in range(1, c-a):
        gotoxy(a+i, d)
        print(chr(124), end='')

    gotoxy(c, b)
    print(chr(43), end='')
    for i in range(d-b-1):
        print(chr(45), end='')
    print(chr(43), end='')

def table():
    ''' Draw a table of 4X4 on console window. '''
    for i in range(19, 60, 10):
        vline(24, 5, i)

    gotoxy(5, 19)       # hline 1
    for i in range(4):
        print(chr(43), end='')
        hline(9)
    print(chr(43))

    gotoxy(11, 19)      # hline 2
    for i in range(4):
        print(chr(43), end='')
        hline(9)
    print(chr(43), end='')

    gotoxy(17, 19)      # hline 3
    for i in range(4):
        print(chr(43), end='')
        hline(9)
    print(chr(43), end='')

    gotoxy(23, 19)      # hline 4
    for i in range(4):
        print(chr(43), end='')
        hline(9)
    print(chr(43), end='')

    gotoxy(29, 19)      # hline 5
    for i in range(4):
        print(chr(43), end='')
        hline(9)
    print(chr(43), end='')

def ascending(arr):
    ''' This function return 1 when the given matrix is not in ascending
        order and return 0 when the matrix is in ascending order.'''
    a=1
    for i in range(4):
        for j in range(4):
            if arr[i][j]!=a:
                return 1
            a+=1
    return 0

def gameover():
    ''' This function is called when game is over. '''
    clear()
    gotoxy(12, 35)
    print("Congretulations! You Win!", end='')
    input()

def menu():
    ''' Main menu of the game. '''
    select=0
    clear()

    gotoxy(11, 38)
    print("Play", end='')
    rectangle(10, 37, 12, 42)

    gotoxy(14, 38)
    print("Exit", end='')

    while(True):
        key=msvcrt.getch()
        if key==b'\x00' or key==b'\xe0':
            key=msvcrt.getch()

        if key==b'P' and select==0:     # Select Exit option.
            clear()
            gotoxy(11, 38)
            print("Play", end='')
            gotoxy(14, 38)
            print("Exit", end='')
            rectangle(13, 37, 15, 42)
            select+=1

        if key==b'\r' and select==1:    #Terminate the execution.
            exit(0)

        if key==b'H' and select==1:     # Select Play option
            clear()
            gotoxy(11, 38)
            print("Play", end='')
            gotoxy(14, 38)
            print("Exit", end='')
            rectangle(10, 37, 12, 42)
            select-=1

        if key==b'\r' and select==0:
            return 0

def play():
    ''' This function control the play screen. '''
    clear()     # This function clear console window.
    move=0; a,b=3,3
    arr=[[1, 4, 15, 7],
         [8, 10, 2, 11],
         [14, 3, 6, 13],
         [12, 9, 5, 16]]    # This is the matrix to be solved.

    table()
    
    while(True):
        ''' Printing matrix. '''
        row=8
        for i in range(4):
            col=24
            for j in range(4):
                gotoxy(row, col)
                col+=10
                if arr[i][j]==16:
                    print("  ", end='')
                else:
                    print("%2d"%(arr[i][j]), end='')
            row+=6
        gotoxy(2, 50)
        print("Moves: ", end='')
        gotoxy(2, 58)
        print(move, end='')

        if ascending(arr)==0:
            break  # Terminate the loop when matrix is arranged.

        key=msvcrt.getch()
        if key==b'\xe0' or key==b'\x00':
            key=msvcrt.getch()

        if key==b'\x1b':    # Control is passed to menu when ESC is pressed. 
            menu()
            clear()
            table()
        elif key==b'H' and a<3:      # Up arrow key.
            arr[a][b],arr[a+1][b]=arr[a+1][b],arr[a][b]
            a+=1; move+=1
        elif key==b'P' and a>0:        # Down arrow key.
            arr[a][b],arr[a-1][b]=arr[a-1][b],arr[a][b]
            a-=1; move+=1
        elif key==b'K' and b<3:        # Left arrow key.
            arr[a][b],arr[a][b+1]=arr[a][b+1],arr[a][b]
            b+=1; move+=1
        elif key==b'M' and b>0:        # Right arrow key.
            arr[a][b],arr[a][b-1]=arr[a][b-1],arr[a][b]
            b-=1; move+=1
    gameover()

def main():
    ''' This is the main function of the program. '''
    clear()

    while(True):
        menu()
        clear()
        play()

if __name__=="__main__":
    main()
