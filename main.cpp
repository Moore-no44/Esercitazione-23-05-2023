#include <iostream>
#include "righttriangle.h"

using namespace std;

int main() {
    // Prompt the user to input the base and altitude
    float base, altitude;
    cout << "Enter the base of the right triangle: ";
    cin >> base;
    cout << "Enter the altitude of the right triangle: ";
    cin >> altitude;

    // Create a RightTriangle object using the user-provided values
    RightTriangle triangle(base, altitude);
    triangle.Draw();
    triangle.Dump();

    // Calculate and display the hypotenuse of the RightTriangle
    float hypotenuse = triangle.GetHypotenuse();
    cout << "Hypotenuse: " << hypotenuse << endl;

    // Test the operator overloading
    RightTriangle triangle2(5.0, 12.0);
    RightTriangle triangle3 = triangle2;
    cout << "Triangle 2: " << endl;
    cout << triangle2 << endl;
    cout << "Triangle 3: " << endl;
    cout << triangle3 << endl;

    if (triangle == triangle2) {
        cout << "Triangle and Triangle2 are equal." << endl;
    } else {
        cout << "Triangle and Triangle2 are not equal." << endl;
    }

    return 0;
}