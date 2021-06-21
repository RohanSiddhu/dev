'''*************************************************************************************************
*                                           MINESWEEPER                                            *
*--------------------------------------------------------------------------------------------------*
* CODED BY: ROHAN SIDDHU                                                                           *
* DATE:                                                                                            *
*--------------------------------------------------------------------------------------------------*
* ABOUT:                                                                                           *
*----------                                                                                        *
* 1. This program use Python's default GUI library, i.e., Tkinter.                                 *
* 2. Grid size is 9 X 9.                                                                           *
* 3. Number of mines 10.                                                                           *
* 4. First click is always safe.                                                                   *
*************************************************************************************************'''

import tkinter

def main():
    win=tkinter.Tk()        # Create a window, i.e., win.
    win.title('Minesweeper')
    win.mainloop()

main()
