'''--------------------------------------------------------------------------------------------------
                                            PUZZLE!
                                          -----------
    _____________________________________________________________________________________________'''

# File: main.py
# Coded By: Rohan Siddhu
# Date: 27/11/2019

''' Files Included '''

import msvcrt       # Microsoft Visual C/C++ Runtime Library.(Downloaded)
import graphics     # Pre defined ASCII art function needed in the program(Custom Library).
import cursor       # This library is used to hide the console cursor.(Downloaded)


''' Class Declaration '''

class Box():
    def __init__(self, a=1, b=1, c=1, d=1):
        ''' This class is for storing the coordinates of rectangle. '''
        self.a=a
        self.b=b
        self.c=c
        self.d=d

class User():
    def __init__(self):
        self.name="\0"*16
        self.moves="00000"

class Menu():
    ''' Main menu of the game. '''
    def __init__(self, flag=0):
        self.select=0
        self.key=0
        self.flag=flag
        self.box0=Box(9, 37, 11, 42)
        self.box1=Box(11, 37, 13, 48)
        self.box2=Box(13, 37, 15, 42)
        self.box3=Box(9, 37, 11, 44)
        self.box4=Box(11, 37, 13, 46)
        self.box5=Box(13, 37, 15, 42)

    def draw(self):
        graphics.clear()

        if self.flag==0:
            graphics.gotoxy(5, 36)
            print("Main Menu", end='')
            graphics.gotoxy(6, 30)
            graphics.hline(21)

            graphics.gotoxy(10, 38)
            print("Play", end='')
            graphics.rectangle(self.box0)

            graphics.gotoxy(12, 38)
            print("High Score", end = '')
            
            graphics.gotoxy(14, 38)
            print("Exit", end='')
        else:
            graphics.gotoxy(5, 36)
            print("Game Paused!", end='')
            graphics.gotoxy(6, 30)
            graphics.hline(24)
            
            graphics.gotoxy(10, 38)
            print("Resume", end='')
            graphics.rectangle(self.box3)

            graphics.gotoxy(12, 38)
            print("New Game", end='')

            graphics.gotoxy(14, 38)
            print("Quit", end='')

    def getkey(self):
        ''' Take keyboard input '''
        self.key=msvcrt.getch()
        if self.key==b'\x00' or self.key==b'\xe0':
            self.key=msvcrt.getch()

    def update(self):
        if self.flag == 0:
            if self.key == b'P':        # DOWN key.
                if self.select == 0:     # Select Second option.
                    graphics.remove_rect(self.box0)
                    graphics.rectangle(self.box1)
                    self.select = 1
                elif self.select == 1:      # Select Third option.
                    graphics.remove_rect(self.box1)
                    graphics.rectangle(self.box2)
                    self.select = 2
            elif self.key == b'H':      # UP key.
                if self.select == 1:     # Select First option
                    graphics.remove_rect(self.box1)
                    graphics.rectangle(self.box0)
                    self.select = 0
                elif self.select == 2:      # Select Second option.
                    graphics.remove_rect(self.box2)
                    graphics.rectangle(self.box1)
                    self.select = 1
        else:
            if self.key == b'P':        # DOWN key.
                if self.select == 0:     # Select Second option.
                    graphics.remove_rect(self.box3)
                    graphics.rectangle(self.box4)
                    self.select = 1
                elif self.select == 1:      # Select Third option.
                    graphics.remove_rect(self.box4)
                    graphics.rectangle(self.box5)
                    self.select = 2
            elif self.key == b'H':      # UP key.
                if self.select == 1:     # Select First option
                    graphics.remove_rect(self.box4)
                    graphics.rectangle(self.box3)
                    self.select = 0
                elif self.select == 2:      # Select Second option.
                    graphics.remove_rect(self.box5)
                    graphics.rectangle(self.box4)
                    self.select = 1

class Play():
    ''' Play screen of the game. '''
    def __init__(self):
        self.arr=[[1, 4, 15, 7],
                 [8, 10, 2, 11],
                 [14, 3, 6, 13],
                 [12, 9, 5, 16]]
        self.moves=0

    def draw(self):
        graphics.clear()     # This function clear console window.
        graphics.gotoxy(2, 50)
        print("Moves: ", end='')
        graphics.table()
        ''' Printing the matrix. '''
        row=8
        for i in range(4):
            col=24
            for j in range(4):
                graphics.gotoxy(row, col)
                col+=10
                if self.arr[i][j]==16:
                    print("  ", end='')
                else:
                    print("%2d"%(self.arr[i][j]), end='')
            row+=6
        graphics.gotoxy(2, 56)
        print(self.moves, end='')

    def update(self):
        row=8
        for i in range(4):
            col=24
            for j in range(4):
                graphics.gotoxy(row, col)
                col+=10
                if self.arr[i][j]==16:
                    print("  ", end='')
                else:
                    print("%2d"%(self.arr[i][j]), end='')
            row+=6
        graphics.gotoxy(2, 56)
        print(self.moves, end='')


''' Function Declaration '''

def ascending(arr):
    ''' This function return 1 when the given matrix is not in ascending
        order and return 0 when the matrix is in ascending order.'''
    a=1
    for i in range(4):
        for j in range(4):
            if arr[i][j]!=a:
                return False
            a+=1
    return True

def gameover(move=0):
    ''' This function is called when game is over. '''
    move = str(move)
    while len(move)<5:
        move = '0' + move

    graphics.clear()
    graphics.gotoxy(12, 36)
    print("Congretulations!", end='')

    try:
        f=open(r'record.txt', 'r+')
        for i in range(0, 210, 21):
            name=f.read(16)
            user.moves=f.read(5)
            if name == 'No Name\0\0\0\0\0\0\0\0\0':
                f.seek(i)
                f.write(user.name)
                f.write(move)
                break
            elif int(user.moves) > int(move):
                f.seek(i)
                temp1=f.read(21)
                f.seek(i)
                f.write(user.name)
                f.write(move)
                for j in range(i+21, 210, 21):
                    f.seek(j)
                    temp2=f.read(21)
                    f.seek(j)
                    f.write(temp1)
                    temp1=temp2
                break
    except FileNotFoundError:
        f=open(r"record.txt", mode="w+")

        f.write(user.name)
        f.write(move)
        for i in range(9):
            f.write("No Name\0\0\0\0\0\0\0\0\0")
            f.write("00000")
    finally:
        f.seek(16)
        user.moves=f.read(5)
        f.close()
    graphics.gotoxy(14, 38)
    print("Best:", user.moves, end = '')
    graphics.gotoxy(15, 38)
    print("Your Moves:", move, end = '')
    input()

def on_esc():
    ''' Pause The Game '''
    menu=Menu(1)
    menu.draw()

    while(True):
        menu.getkey()
        menu.update()
        if menu.key == b'\r' and menu.select == 0:
            del menu
            return 0
        elif menu.key == b'\r' and menu.select == 1:
            del menu
            return 1
        elif menu.key == b'\r' and menu.select == 2:
            del menu
            return 2

def on_highscore():
    global user
    
    graphics.clear()
    graphics.gotoxy(5, 36)
    print("Leaderboard", end = '')
    graphics.gotoxy(6, 32)
    graphics.hline(19)
    try:
        fp=open(r"record.txt", mode="r")
    except FileNotFoundError:
        fp=open(r"record.txt", mode="w+")

        for i in range(10):
            fp.write("No Name\0\0\0\0\0\0\0\0\0")
            fp.write("00000")
    finally:
        fp.seek(0)
        graphics.gotoxy(8, 1)
        for i in range(1, 11):
            user.name=fp.read(16)
            user.moves=fp.read(5)
            print("%26d. %s"%(i, user.name))
            graphics.gotoxy(i + 7, 48)
            print(user.moves)
    fp.close()

    while(True):
        key=msvcrt.getch()
        if key == b'\x00' or key == b'\xe0':
            key = msvcrt.getch()

        if key == b'\x1b':
            return 0

def name():
    global user
    
    graphics.clear()
    graphics.gotoxy(8, 34)
    print("PLEASE ENTER YOUR NAME", end = '')
    graphics.rectangle(Box(9, 36, 11, 54))
    cursor.show()
    graphics.gotoxy(10, 37)
    user.name = input()
    cursor.hide()
    if len(user.name)>16:
        user.name = user.name[:16]
    while len(user.name)<16:
        user.name+='\0'

def on_play():
    name()
    
    a, b=3, 3
    play=Play()
    play.draw()

    while(True):
        key=msvcrt.getch()
        if key==b'\xe0' or key==b'\x00':
            key=msvcrt.getch()

        if key == b'\x1b':    # Control is passed to on_esc when ESC is pressed. 
            val = on_esc()
            if val == 1:
                play.__init__()
                a, b = 3, 3
            elif val == 2:
                del play
                return 0
            play.draw()
        elif key==b'H' and a<3:      # Up arrow key.
            play.arr[a][b], play.arr[a+1][b]=play.arr[a+1][b], play.arr[a][b]
            a+=1
            play.moves+=1
        elif key==b'P' and a>0:        # Down arrow key.
            play.arr[a][b], play.arr[a-1][b]=play.arr[a-1][b], play.arr[a][b]
            a-=1
            play.moves+=1
        elif key==b'K' and b<3:        # Left arrow key.
            play.arr[a][b], play.arr[a][b+1]=play.arr[a][b+1], play.arr[a][b]
            b+=1
            play.moves+=1
        elif key==b'M' and b>0:        # Right arrow key.
            play.arr[a][b], play.arr[a][b-1]=play.arr[a][b-1], play.arr[a][b]
            b-=1
            play.moves+=1
        play.update()

        if ascending(play.arr):
            gameover(play.moves)
            return 0


''' Global '''
user=User()


''' main function start '''
def main():
    ''' This is the main function of the program. '''
    graphics.clear()
    cursor.hide()

    menu=Menu(0)     # Object of Menu Class.
    menu.draw()

    while(True):
        menu.getkey()
        menu.update()
        if menu.key == b'\r' and menu.select == 0:
            on_play()
            menu.draw()
        elif menu.key == b'\r' and menu.select == 1:
            on_highscore()
            menu.__init__()
            menu.draw()
        elif menu.key == b'\r' and menu.select == 2:
            del menu
            graphics.clear()
            cursor.show()
            exit(1)

if __name__=="__main__":
    main()
