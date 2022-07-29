// // Define a class Interest and define member functions to read principal , rate of interest and year. Another member functions to calculate simple interest and display it. Initialise all details using constructor.

// // Header files
#include <iostream>

// // use namespace
using namespace std;

// // define class Interest
class Interest
{

private:
    // // instance member variables
    double pa, roi, time, si;

public:
    // // constructors
    Interest()
    {
        pa = roi = time = 0;
    }

    Interest(double p)
    {
        pa = p;
        roi = 0;
        time = 0;
    }

    Interest(double p, double r)
    {
        pa = p;
        roi = r;
        time = 0;
    }

    Interest(double p, double r, double t)
    {
        pa = p;
        roi = r;
        time = t;
    }

    // // instance member function to set data
    void setData(double p, double r, double t)
    {
        pa = p;
        roi = r;
        time = t;
    }

    // // instance member function to show data
    void showData()
    {
        cout << "Principal Amount => " << pa << ", Rate of Interest => " << roi << ", Time => " << time;
    }

    // // instance member function to set principal amount
    void setPrincipal(double p)
    {
        pa = p;
    }

    // // instance member function to set rate of interest
    void setRateOfInterest(double r)
    {
        roi = r;
    }

    // // instance member function to set time
    void setTime(double t)
    {
        time = t;
    }

    // // instance member function to get principal amount
    double getPrincipal()
    {
        return pa;
    }

    // // instance member function to get rate of interest
    double getRateOfInterest()
    {
        return roi;
    }

    // // instance member function to get principal time
    double getTime()
    {
        return time;
    }

    // // instance member function to calculate simple interest
    double calculateSI()
    {
        si = pa * roi * time / 100;

        return si;
    }

    // // instance member function to get simple interest
    double getSI()
    {
        return si;
    }
};

// // Main Function Start
int main()
{
    double pa, roi, time, si;

    cout << "\nEnter Principal Amount => ";
    cin >> pa;

    cout << "\nEnter Rate of Interest => ";
    cin >> roi;

    cout << "\nEnter Time In Years => ";
    cin >> time;

    Interest i1(pa, roi, time); // create obj of Interest

    cout << "\n>>>>>>>>>>>> Interest Data <<<<<<<<<<<<<\n"
         << endl;
    i1.showData();

    // // calculate simple interest
    si = i1.calculateSI();

    cout << "\n\nSimple Interest => " << si;

    cout << endl; // Add new line
    cin.ignore();
    return 0;
}
// // Main Function End
