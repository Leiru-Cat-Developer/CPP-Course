/*
	ESCRIBA UN PROGRAMA QUE CALCULE LAS SOLUCIONES DE UNA ECUACION DE
	SEGUNDO GRADO DE LA FORMA "AX^2 + BX + C = 0" TENIENDO EN CUENTA
	LA FORMULA GENERAL "X = (-B+-(SQRT((POW(B,2))-(4*(A*C)))))s/(2*A)"
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float valorA = 0, valorB = 0, valorC = 0, resultadoPositivo = 0;
	float resultadoNegativo = 0;
	cout<<"DIGITE EL VALOR DE A: ";	cin>>valorA;
	cout<<"DIGITE EL VALOR DE B: ";	cin>>valorB;
	cout<<"DIGITE EL VALOR DE C: ";	cin>>valorC;
	cout<<"--------------------------------------------------"<<endl;
	resultadoPositivo = (-valorB+(sqrt((pow(valorB,2))-(4*(valorA*valorC)))))/(2*valorA);
	resultadoNegativo = (-valorB-(sqrt((pow(valorB,2))-(4*(valorA*valorC)))))/(2*valorA);
	cout<<"EL RESULTADO + ES: "<<resultadoPositivo<<endl;
	cout<<"EL RESULTADO - ES: "<<resultadoNegativo;
	return 0;
}
