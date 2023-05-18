#include <iostream>

#include "rectangle.h"
#include "rhombus.h"
#include "rightTriangle.h"

using namespace std;

const int MAX_ITEMS = 100;

int main() {
    Polygon* shapes[MAX_ITEMS];
    int count = 0;

    int choice = 0;
    do {
        cout << "\nMENU:" << endl;
        cout << "1 - Rectangle" << endl;
        cout << "2 - Rhombus" << endl;
        cout << "3 - Right Triangle" << endl;
        cout << "4 - Draw" << endl;
        cout << "5 - Exit" << endl;
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Rectangle
                float width, length;
                cout << "\nEnter width of the rectangle: ";
                cin >> width;
                cout << "Enter length of the rectangle: ";
                cin >> length;
                shapes[count] = new Rectangle(width, length);
                count++;
                break;
            }
            case 2: {
                // Rhombus
                float diagH, diagV;
                cout << "\nEnter horizontal diagonal of the rhombus: ";
                cin >> diagH;
                cout << "Enter horizontal diagonal of the rhombus: ";
                cin >> diagH;
                shapes[count] = new Rhombus(diagH, diagV);
                count++;
                break;
            }
            case 3: {
                // Right Triangle
                float base, altitude;
                cout << "\nEnter base of the right triangle: ";
                cin >> base;
                cout << "Enter base of the right altitude: ";
                cin >> altitude;
                shapes[count] = new RightTriangle(base, altitude);
                count++;
                break;
            }
            case 4: {
                cout << "\nFIGURES" << endl;
                for (int i = 0; i < count; i++) {
                    cout << "\nFigure " << i + 1 << ":" << endl;
                    cout << "Area: " << shapes[i]->GetArea() << endl;
                    cout << "Perimeter: " << shapes[i]->GetPerimeter() << endl;
                }
                break;
            }
            case 5: {
                // Exit
                for (int i = 0; i < count; i++) {
                    delete shapes[i];
                }
                cout << "\nExiting the program.\n" << endl;
                return 0;
            }
            default:
                cout << "\nInvalid choice. Please try again.\n" << endl;
        }
    } while (true);

    return 0;
}