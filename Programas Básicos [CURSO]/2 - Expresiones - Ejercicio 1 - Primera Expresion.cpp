/*
	ESCRIBRE LA SIGUIENTE EXPRESION MATEMATICA "(A/B)+1" COMO EXPRESION EN C++
*/
#include<iostream>
using namespace std;
int main(){
	float valorA = 0, valorB = 0, resultado = 0;
	cout<<"DIGITE EL VALOR DE A: ";	cin>>valorA;
	cout<<"DIGITE EL VALOR DE B: ";	cin>>valorB;
	resultado = (valorA/valorB)+1;
	cout.precision(2);//FORMA PARA REDONDEAR CUALQUIER VALOR DECIMAL
	cout<<"EL RESULTADO DE LA EXPRESION ES: "<<resultado;
	return 0;
}
