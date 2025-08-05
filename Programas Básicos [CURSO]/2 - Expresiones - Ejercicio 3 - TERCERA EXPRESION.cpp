/*
	ESCRIBRE LA SIGUIENTE EXPRESION MATEMATICA "(A+(B/C))/(D+(E/F))" 
	COMO EXPRESION EN C++
*/
#include<iostream>
using namespace std;
int main(){
	float valorA = 0, valorB = 0, valorC = 0, valorD = 0, valorE = 0, valorF = 0;
	float resultado = 0;
	cout<<"DIGITE EL VALOR DE A: ";	cin>>valorA;
	cout<<"DIGITE EL VALOR DE B: ";	cin>>valorB;
	cout<<"DIGITE EL VALOR DE C: ";	cin>>valorC;
	cout<<"DIGITE EL VALOR DE D: ";	cin>>valorD;
	cout<<"DIGITE EL VALOR DE E: ";	cin>>valorE;
	cout<<"DIGITE EL VALOR DE F: ";	cin>>valorF;
	resultado = (valorA+(valorB/valorC))/(valorD+(valorE/valorF));
	cout.precision(2);
	cout<<"EL RESULTADO DE LA EXPRESION ES: "<<resultado;
	return 0;
}
