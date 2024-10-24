// File: Geometry Calculator
// Name of Prorammer: Ebram Azer 
// Requirment:Geometry Calculator
//1. Calculate the Area of a Circle
//2. Calculate the Area of a Rectangle
//3. Calculate the Area of a Triangle
//4. Quit
//Enter your choice(1–4) :
//If the user enters 1, the program should ask for the radius of the circle then display its area.Use the following formula :
//area = ?r2
//Use 3.14159 for ? and the radius of the circle for r.If the user enters 2, 
//the program should ask for the length and width of the rectangle,
//then display the rectangle’s area.Use the following formula :
//area = length * width
//If the user enters 3, the program should ask for the length of the triangle’s base and its height,
//then display its area.Use the following formula :
//area = base * height * .5
//If the user enters 4, the program should end.


#include <iostream>
using namespace std;

int main() {
    int choice;
    const double PI = 3.14159;

    // Display menu
    cout << "Geometry Calculator\n";
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1–4): ";
    cin >> choice;

    // Input validation for choice
    if (choice < 1 || choice > 4) {
        cout << "Invalid choice. Please run the program again and enter a number between 1 and 4.\n";
        return 1;
    }

    // Execute based on user choice
    switch (choice) {
    case 1: {
        // Calculate the area of a circle
        double radius, area;
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        if (radius < 0) {
            cout << "Invalid input. The radius cannot be negative.\n";
        }
        else {
            area = PI * radius * radius;
            cout << "The area of the circle is " << area << endl;
        }
        break;
    }
    case 2: {
        // Calculate the area of a rectangle
        double length, width, area;
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;

        if (length < 0 || width < 0) {
            cout << "Invalid input. Length and width cannot be negative.\n";
        }
        else {
            area = length * width;
            cout << "The area of the rectangle is " << area << endl;
        }
        break;
    }
    case 3: {
        // Calculate the area of a triangle
        double base, height, area;
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;

        if (base < 0 || height < 0) {
            cout << "Invalid input. Base and height cannot be negative.\n";
        }
        else {
            area = 0.5 * base * height;
            cout << "The area of the triangle is " << area << endl;
        }
        break;
    }
    case 4:
        // Exit the program
        cout << "Program ended.\n";
        break;
    }

    return 0;
}
