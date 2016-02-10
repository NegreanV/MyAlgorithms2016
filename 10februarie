//OJI 2010 cls a 7-a, problema 2

#include <iostream>
#include <fstream>

using namespace std;

int f1, f2, f3, s = 0;

void rostogolire_dreapta(int &f1, int &f2, int &f3)
{
    s = 7 - f3;
    f3 = f2;
    f2 = s;
}

void rostogolire_jos(int &f1, int &f2, int &f3)
{
    s = 7 - f1;
    f1 = f2;
    f2 = s;

}

void rostogolire_stanga(int &f1, int &f2, int &f3)
{
    s = 7 - f2;
    f2 = f3;
    f3 = s;

}

void rostogolire_sus(int &f1, int &f2, int &f3)
{
    s = 7 - f2;
    f2 = f1;
    f1 = s;
}

int main()
{
    ifstream inf ("input.in");
    ofstream outf ("output.out");

    int n, k;
    inf >> n >> k;

    int save = n - 1;
    inf >> f1 >> f2 >> f3;

    while(k != 0)
    {
        while(save != 0)
        {
            rostogolire_dreapta(f1, f2, f3);
            save--;
            k--;

            if(k == 0)
            {
                cout << f1 << " " << f2 << " " << f3;
                return 0;
            }
        }

        save = n - 1;

        while(save != 0)
        {
            rostogolire_jos(f1, f2, f3);
            save--;
            k--;

            if(k == 0)
            {
                cout << f1 << " " << f2 << " " << f3;
                return 0;
            }
        }

        save = n - 1;

        while(save != 0)
        {
            rostogolire_stanga(f1, f2, f3);
            save--;
            k--;

            if(k == 0)
            {
                cout << f1 << " " << f2 << " " << f3;
                return 0;
            }
        }

        save = n - 1;

        while(save != 0)
        {
            rostogolire_sus(f1, f2, f3);
            save--;
            k--;

            if(k == 0)
            {
                cout << f1 << " " << f2 << " " << f3;
                return 0;
            }
        }
    }
}
