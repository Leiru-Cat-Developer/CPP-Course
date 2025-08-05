/*
	ESCRIBRE LA SIGUIENTE EXPRESION MATEMATICA "(A+B)/(C+D)" COMO EXPRESION EN C++
*/
#include<iostream>
using namespace std;
int main(){
	float valorA = 0, valorB = 0, valorC = 0, valorD = 0, resultado = 0;
	cout<<"DIGITE EL VALOR DE A: ";	cin>>valorA;
	cout<<"DIGITE EL VALOR DE B: ";	cin>>valorB;
	cout<<"DIGITE EL VALOR DE C: ";	cin>>valorC;
	cout<<"DIGITE EL VALOR DE D: ";	cin>>valorD;
	resultado = (valorA+valorB)/(valorC+valorD);
	cout.precision(2);
	cout<<"EL RESULTADO DE LA EXPRESION ES: "<<resultado;
	return 0;
}
