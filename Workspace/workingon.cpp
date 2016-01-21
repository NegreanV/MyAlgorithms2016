#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inf ("input.in");
    ofstream outf ("output.out");

    int a, b;
    inf >> a, b;

    int tablou[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            inf >> tablou[i][j];
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if(tablou[i][j] > tablou[i][j+1] && tablou[i][j] > tablou[i][j-1] &&
            tablou[i][j] > tablou[i-1][j] && tablou[i][j] > tablou[i+1][j])
            {
            cout << ": " << tablou[i][j] << endl;
            }
        }
    }
}
