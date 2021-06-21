''' This is a helping library in project for graphics. '''

# File: graphics.py
# Coded By: Rohan Siddhu

''' Files Included '''

import colorama; colorama.init()    # To use ANSI escape sequence.
import os

''' Function declaration '''

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

def rectangle(r):
    ''' This function draw a rectangle between the coordinates (a, b) and (c,d) '''
    gotoxy(r.a, r.b)
    print(chr(43), end = '')
    for i in range(r.d - r.b - 1):
        print(chr(45), end = '')
    print(chr(43), end = '')

    for i in range(1, r.c - r.a):
        gotoxy(r.a + i, r.b)
        print(chr(124), end = '')

    for i in range(1, r.c - r.a):
        gotoxy(r.a + i, r.d)
        print(chr(124), end = '')

    gotoxy(r.c, r.b)
    print(chr(43), end = '')
    for i in range(r.d - r.b - 1):
        print(chr(45), end = '')
    print(chr(43), end = '')

def remove_rect(r):
    gotoxy(r.a, r.b)
    for i in range(r.d - r.b + 1):
        print(' ', end = '')

    for i in range(1, r.c - r.a):
        gotoxy(r.a + i, r.b)
        print(' ', end = '')

    for i in range(1, r.c - r.a):
        gotoxy(r.a + i, r.d)
        print(' ', end = '')

    gotoxy(r.c, r.b)
    for i in range(r.d - r.b + 1):
        print(' ', end = '')

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
