/*
	HACER UN PROGRAMA QUE REALIZE LA SERIE DE FIBONACCI -> 1 1 2 3 5 8 13 . . . N
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int n = 0, x = 0, y = 1, z = 1;
	cout<<"DIGITE EL NUMERO DE ELEMENTOS DE LA SERIE DE FIBONACCI: ";	cin>>n;
	cout<<endl<<"1"<<endl;	//NUMERO FIJO
	for(int i=1; i<n; i++){
		z = x + y;		//1 = 0 + 1		1 = 1 + 1			2 = 1 + 2
		cout<<z<<endl;		//1				2				3
		x = y;			//0 = 1			1 = 1			1 = 2
		y = z;			//1 = 1			1 = 2			2 = 3
	}
	cout<<endl;
	system("pause");
	return 0;
}
