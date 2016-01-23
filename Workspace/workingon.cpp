#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inf ("input.in");
    ofstream outf ("output.out");

    int linie, coloana;

    inf >> linie >> coloana;

    int tablou[linie][coloana], steleStr = 0;

     for (int i = 0; i < linie; i++)
    {
        for (int j = 0; j < coloana; j++)
        {
            inf >> tablou[i][j];
        }
    }
// rezolvarea a
    for (int i = 0; i < linie; i++)
    {
        for (int j = 0; j < coloana; j++)
        {
            if(i == 0 && j == 0)
            {
                if(tablou[i][j] > tablou[i+1][j] && tablou[i][j] > tablou[i][j+1] &&
                   tablou[i][j] > tablou[i+1][j+1])
                {
                    cout << "Steaua: " << tablou[i][j] << endl;
                    steleStr++;
                    cout << "Pozitie i: " << i << " && " << "Pozitie j: " << j << endl;
                }
            }
            else if(i == 0 && j == coloana-1)
            {
                if(tablou[i][j] > tablou[i-1][j] && tablou[i][j] > tablou[i][j-1] &&
                   tablou[i][j] > tablou[i-1][j-1])
                   {
                       cout << "Steaua: " << tablou[i][j] << endl;
                       steleStr++;
                       cout << "Pozitie i: " << i << " && " << "Pozitie j: " << j << endl;
                   }
            }
            else if(i == linie-1 && j == 0)
            {
                if(tablou[i][j] > tablou[i-1][j] && tablou[i][j] > tablou[i][j+1] &&
                   tablou[i][j] > tablou[i-1][j+1])
                   {
                       cout << "Steaua: " << tablou[i][j] << endl;
                       steleStr++;
                       cout << "Pozitie i: " << i << " && " << "Pozitie j: " << j << endl;
                   }
            }
            else if(i == linie-1 && j == coloana-1)
            {
                if(tablou[i][j] > tablou[i-1][j] && tablou[i][j] > tablou[i][j-1] &&
                   tablou[i][j] > tablou[i-1][j-1])
                   {
                       cout << "Steaua: " << tablou[i][j] << endl;
                       steleStr++;
                       cout << "Pozitie i: " << i << " && " << "Pozitie j: " << j << endl;
                   }
            }
            else
            {
                if(tablou[i][j] > tablou[i][j+1] && tablou[i][j] > tablou[i][j-1] &&
                   tablou[i][j] > tablou[i-1][j] && tablou[i][j] > tablou[i+1][j] &&
                   tablou[i][j] > tablou[i-1][j-1] && tablou[i][j] > tablou[i-1][j+1] &&
                   tablou[i][j] > tablou[i+1][j+1] && tablou[i][j] > tablou[i+1][j-1])
                {
                    cout << "Steaua: " << tablou[i][j] << endl;
                    steleStr++;
                    cout << "Pozitie i: " << i << " && " << "Pozitie j: " << j << endl;

                }
            }
        }
    }
    cout << "Stele stralucitoare: " << steleStr;
}
