#include <iostream>
#include <fstream>

using namespace std;

int tablou[n][n];

void trage(int i , int j, int d)
{
    if (d == 1)
    {

    }
}

int main()
{
    ifstream inf ("input.in");
    ofstream outf ("output.out");
    
    int n, m, i, j, d;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            inf >> tablou[i][j];
        }
    }

    for (int k = 0; k < m; k++)
    {
        inf >> i >> j >> d;
        trage(i, j, d);
    }
}
