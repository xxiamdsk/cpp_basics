// // Create a class TemperatureConverter with a static member function to convert Celsius to Fahrenheit.
// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class TemperatureConverter
class TemperatureConverter
{
public:
    // // static member function to convert celcius to fahrenheit
    static double celToFah(double cel)
    {
        return 9 * cel / 5 + 32;
    }
};

// // Main Function Start
int main()
{

    double cel, fah;
    TemperatureConverter t1;

    cout << "\nEnter Temperature in Celcius to Convert in Fahrenheit => ";
    cin >> cel;

    // // convert celcius to fahrenheit
    fah = TemperatureConverter::celToFah(cel);

    cout << "\n"
         << cel << " Celcius = " << fah << " Fahrenheit";

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End