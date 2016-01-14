//OJI 2015 problema "Echi"

#include <iostream>

using namespace std;

int main()
{
	int nr;
	cin >> nr;
	
	int saved = nr, pozitiePara = 0, pozitieImpara = 0;
	int max = 10;
	
	while(nr != 0)
	{
		max *= 10;
		nr /= 10;
	}
	
	max /= 10;
	
	while(saved != 0)
	{
		pozitiePara += saved % 10;
		saved /= 10;
		
		pozitieImpara += saved % 10;
		saved /= 10;
	}
	
	if (pozitiePara == pozitieImpara)
	{
		cout << "Este echilibrat";
	}
	else
	{
		cout << "Nu este echilibrat";
	}
	
}
