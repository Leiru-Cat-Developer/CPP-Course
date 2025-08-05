#include<iostream>
using namespace std;
int main(){
	int numero1 = 0, numero2 = 0, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	cout<<"DIGITE NUMEROS 1: ";	cin>>numero1;
	cout<<"DIGITE NUMEROS 2: ";	cin>>numero2;
	suma = numero1+numero2;
	resta = numero1-numero2;
	multiplicacion = numero1*numero2;
	division = numero1/numero2;
	cout<<"SUMA: "<<suma<<endl;
	cout<<"RESTA: "<<resta<<endl;
	cout<<"MULTIPLICACION: "<<multiplicacion<<endl;
	cout<<"DIVISION: "<<division;
	return 0;
}
