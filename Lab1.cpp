#include <iostream>
using namespace std;

// Program to convert a Fahrenheit temperature to Celsius

int main() {
    // declaration of variables
    double cel, fah;

    // print header
    cout << "Lab 1\nTemperature Conversion\nFahrenheit to Cesius\n\n";

    // collection of user input
    cout << "Enter Fahrenheit Temperature: ";
    cin >> fah;

    // calculation of temperature
    cel = (fah - 32) * 5 / 9;


    // formatted output of results

    cout << endl << fah << " degrees Fahrenheit is equal to ";
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(2);
    cout << cel << " degrees Celsius.\n";

        return 0;
}