#include <iostream>
#include <cstdlib>
#include <math.h>

float odl_pioruna(int czas);  
float zaokraglij(float odl);

float czas, odl;

using namespace std;

int main(int argc, char** argv) {
	
	cout << "Program oblicza odleglosc uderzenia pioruna." << endl;
	cout << endl;
	cout << "\tIle sekund minelo od rozblysku do grzmotu: " ;
	cin >> czas;
	cout << endl;
	odl = odl_pioruna(czas);
	cout << "Piorun uderzyl w odleglosci " << zaokraglij(odl) << " km od Ciebie!" << endl;
	cout << endl;
	
	system("pause");
	return 0;
}

float odl_pioruna(int czas)
{
	return 340.3*czas/1000;
}

float zaokraglij(float odl)  
{
    return round(odl*100)/100;
}
 

