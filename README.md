# EsercitazionePolygon

## Description

This program can be used to calculate the area and perimeter of a few differnt polygons, the ones included as of today are:
- Rectangle
- Rhombus
- Right Triangle

## How to compile

To compile the program g++ is required and the procedure is as follows:
- Open terminal or command prompt
- Navigate to the corresponding directory where the program files are located
- To compile the program use: "g++ main.cpp polygon.cpp rightTriangle.cpp rectangle.cpp rhombus.cpp -o program"
- Press Enter to execute the command
- To run the program, use the following command:"./program"

# Operation

The user is prompted with a selection menu that displays 5 different choices:
- 1 - Rectangle
- 2 - Rhombus
- 3 - Right Triangle
- 4 - Draw
- 5 - Exit

For selection 1 to 3 the user is required to input the dimension of the sides (or diagonals) of the chosen shape (up to 100 can be added),
for selection 4 the program displays all of the created shapes in order from first to last, selection number 5 exits the program.
