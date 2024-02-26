// NyobaAja.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{//begin
	//numeric nV1, nV2, nV3, nHasil
	//display 'masukan nilai pertama ='
	//accept nV1
	//display 'masukan nilai kedua ='
	//accept nV2
	//display 'masukan nilai ketiga ='
	//accept nV3
	//compute nHasil = nV1 + nV2 - nV3
	//display 'hasilnya adalah =' + nHasil

	int nV1, nV2, nV3, nHasil;
	cout << "masukan nilai pertama =";
	cin >> nV1;
	cout << "masukan nilai kedua =";
	cin >> nV2;
	cout << "masukan nilai ketiga =";
	cin >> nV3;
	nHasil = nV1 + nV2 - nV3;
	cout << "hasilnya adalah =" << nHasil << endl;
}//end
