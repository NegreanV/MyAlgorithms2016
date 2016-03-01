#include <iostream>

using namespace std;

int main()
{
    string time;
    cin >> time;
    char abc, adc;
    int a, b;
    bool setZeroA = false, setZeroB = false, setZeroC = false, executed = false;

    abc = time.at(0);
    adc = time.at(1);
    a = abc - '0';
    b = adc - '0';
    int h = 10 * a + b;
    if (a == 0)
    {
        setZeroA = true;
    }

    abc = time.at(3);
    adc = time.at(4);
    a = abc - '0';
    b = adc - '0';
    int m = 10 * a + b;
    if (a == 0)
    {
        setZeroB = true;
    }

    abc = time.at(6);
    adc = time.at(7);
    a = abc - '0';
    b = adc - '0';
    int s = 10 * a + b;
    if (a == 0)
    {
        setZeroC = true;
    }

    int fid = time.find("PM");

    if (fid <= 0)
    {
        if (setZeroA == false && setZeroB == false && setZeroC == false)
        {
            executed = true;
            cout << h << ":" << m << ":" << s;
        }
        if (setZeroA == true && executed == false)
        {
            cout << "0" << h << ":";
        }
        else if (executed == false)
        {
            cout << h << ":";
        }
        if (setZeroB == true && executed == false)
        {
            cout << "0" << m << ":";
        }
        else if (executed == false)
        {
            cout << m << ":";
        }
        if (setZeroC == true && executed == false)
        {
            cout << "0" << s;
        }
        else if (executed == false)
        {
            cout << s;
        }

    }
    else
    {
        if (setZeroA == false && setZeroB == false && setZeroC == false)
        {
            executed = true;
            cout << h + 12 << ":" << m << ":" << s;
        }
        if (setZeroA == true && executed == false)
        {
            cout << h + 12 << ":";
        }
        else if (executed == false)
        {
            cout << h + 12 << ":";
        }
        if (setZeroB == true && executed == false)
        {
            cout << "0" << m << ":";
        }
        else if (executed == false)
        {
            cout << m << ":";
        }
        if (setZeroC == true && executed == false)
        {
            cout << "0" << s;
        }
        else if (executed == false)
        {
            cout << s;
        }
    }
}
