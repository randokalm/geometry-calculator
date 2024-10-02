#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(void)
{
    int userOption;

    cout << "Geometry Calculator" << endl << endl;
    cout << "1. Calculate the area of a Circle" << endl;
    cout << "2. Calculate the area of a Rectangle" << endl;
    cout << "3. Calculate the area of a Triangle" << endl;
    cout << "4. Quit" << endl << endl;
    cout << "Enter your choice (1-4): ";
    cin >> userOption;

    switch (userOption)
    {
    case 1:
    {
        float radius, circleArea;
        const float pi = 3.14159;
        cout << "\nEnter the circle's radius: ";
        cin >> radius;
        
        if (radius < 0)
        {
            cout << "\nThe radius can not be less than zero.\n";
            return 0;
        }
        
        circleArea = pi * pow(radius, 2);
        cout << "\nThe area is " << circleArea << endl;
    }
    break;

    case 2:
    {
        float length, width, rectangleArea;
        cout << "\nEnter the rectangle's length: ";
        cin >> length;
        cout << "Enter the rectangle's width: ";
        cin >> width;
        
        if (length < 0 || width < 0)
        {
            cout << "\nOnly enter positive values for length and width.\n";
            return 0;
        }
        
        rectangleArea = length * width;
        cout << "\nThe area is " << rectangleArea << endl;
    }
    break;

    case 3:
    {
        float base, height, triangleArea;
        cout << "Enter the length of the base: ";
        cin >> base;
        cout << "Enter the triangle's height: ";
        cin >> height;
        
        if (base < 0 || height < 0)
        {
            cout << "\nOnly enter positive values for base and height.\n";
            return 0;
        }
        
        triangleArea = 0.5 * base * height;
        cout << "\nThe area is " << triangleArea << endl;
    }
    break;

    case 4:
        cout << "Program ending." << endl;
        break;

    default:
        cout << "The valid choices are 1 through 4. Run the\nprogram again and select one of those.\n";
        break;
    }

    return 0;
}