//Jordan Cole
//CO SCI_802_26188FA19V
//Chap. 4: Areas of Rectangles
//A program that asks for the Length and width of two rectangles.
//then tells the user which rectangle has the greater area, or if the areas are the same.

#include <iostream>
using namespace std;
int main()
{
    //Define variables for all necessary values
    double lengthA, lengthB, widthA, widthB, areaA, areaB;

    //Intro to purpose of program
    cout << "You will be asked to define the length and width of two rectangles." << endl;    
    cout << "This program will determine which rectangle has a greater area." << endl;
    cout << "Press Enter to Begin";
    cin.ignore();

    //Retrieve length/width data for both rectangles from user
    cout << "Enter the length of Rectangle A: ";
    cin >> lengthA;
    cout << "Enter the width of Rectangle A: ";
    cin >> widthA;
    cout << "Enter the length of Rectangle B: ";
    cin >> lengthB;
    cout << "Enter the width of Rectangle B: ";
    cin >> widthB;

    //Calcuate area of rectangles
    areaA = (lengthA * widthA);
    areaB = (lengthB * widthB);

    //Display which rectangle has the greater area
    if (areaA > areaB)
    cout << "Rectangle A's area is larger." << endl;
    else if (areaB > areaA)
    cout << "Rectangle B's area is larger." << endl;
    else
    cout << "Both rectangles have the same area." << endl;

    system("pause");
    return 0;
}
