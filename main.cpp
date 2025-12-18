// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//PSEUDOCODE
/* declare 5 double variables
read user input for height in feet, remaining height in inches, and weight in lbs
if height < 2 or  height > 8
cout invalid
return 0
else if inches >11.9 or inches < 0
cout invalid
return 0
else if weight < 50 or weight > 500
cout invalid
return 0
else
{
if BMI<= 18.5
cout BMI and category underweight
else if BMI >18.5 and BMI <=24.9
cout BMI and category normal weight
else if BMI >25 and BMI <= 29.9
cout BMI and category overweight
else
cout BMI and category obese
}
*/

#include <iostream>
using namespace std;


int main()
{
    double HF, HI, HI_2, W, BMI;
    cout << "Hello, please enter your height in feet (whole number), remaining height in inches, and weight in lbs: \n";
    cin >> HF >> HI >> W;
    HI_2 = HF * 12;
    if (HF < 2 || HF > 8)
    {
        cout << "Invalid in put for height, bye.";
        return 0;
    }
    else if (HI < 0 || HI > 11.9)
    {
        cout << "Invalid input for height, bye.";
        return 0;
    }
    else if (W < 50 || W > 500)
    {
        cout << "Invalid input for weight, bye.";
        return 0;
    }
    else //calculate BMI and check BMI value
    {
        BMI = (W * 703) / ((HI + HI_2) * (HI + HI_2));
        if (BMI <= 18.5)
            cout << "Your BMI is " << BMI << " and you are Underweight.";
        else if (BMI > 18.5 && BMI <= 24.9)
            cout << "Your BMI is " << BMI << " and you are Normal Weight.";
        else if (BMI > 25 && BMI <= 29.9)
            cout << "Your BMI is " << BMI << " and you are Overweight.";
        else
            cout << "Your BMI is " << BMI << " and you are Obese.";
    }

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu



#include <iostream>
#include <cmath>
using namespace std;

void validate(double HF, double HI, double W) {
    if (HF < 2 || HF > 8)
    {
        cout << "Invalid in put for height, bye.";

    }
    else if (HI < 0 || HI > 11.9)
    {
        cout << "Invalid input for height, bye.";

    else if (W < 50 || W > 500)
    {
        cout << "Invalid input for weight, bye.";
    }


    int main()
    {
        double HF, HI, HI_2, W, BMI;
        cout << "Hello, please enter your height in feet (whole number), remaining height in inches, and weight in lbs: \n";
        cin >> HF >> HI >> W;
        HI_2 = HF * 12;
        if (HF < 2 || HF > 8)
        {
            cout << "Invalid in put for height, bye.";
            return 0;
        }
        else if (HI < 0 || HI > 11.9)
        {
            cout << "Invalid input for height, bye.";
            return 0;
        }
        else if (W < 50 || W > 500)
        {
            cout << "Invalid input for weight, bye.";
            return 0;
        }
        else //calculate BMI and check BMI value
        {
            BMI = (W * 703) / ((HI + HI_2) * (HI + HI_2));
            if (BMI <= 18.5)
                cout << "Your BMI is " << BMI << " and you are Underweight.";
            else if (BMI > 18.5 && BMI <= 24.9)
                cout << "Your BMI is " << BMI << " and you are Normal Weight.";
            else if (BMI > 25 && BMI <= 29.9)
                cout << "Your BMI is " << BMI << " and you are Overweight.";
            else
                cout << "Your BMI is " << BMI << " and you are Obese.";
        }

    }
