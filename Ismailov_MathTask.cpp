#include <iostream>
#include "Ismailov_MathTask.h"

using namespace std;

int main()
{
    int NumberA = 0, NumberB = 0;
    EnterDigit(NumberA, "Input height A");
    EnterDigit(NumberB, "Input height B");
    int RecangleArea = CalcRectangleArea(NumberA,NumberB);
    cout<<"Area of Rectangle is "<< RecangleArea <<endl;
}