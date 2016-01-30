//nationala cls a 7-a 2001

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inf ("input.in");
    ofstream outf ("output.out");

    int n, p, q;

    inf >> n >> p >> q;

    int viespi[n-2];

    viespi[0] = 4 * q - p;

    viespi[1] = 4 * viespi[0] - q;
    if(n-2 != 2)
    {
        for (int i = 2; i < n-2; i++)
        {
            viespi[i] = 4 * viespi[i-2] - viespi[i-1];
        }
    }

    cout << viespi[1];
}
