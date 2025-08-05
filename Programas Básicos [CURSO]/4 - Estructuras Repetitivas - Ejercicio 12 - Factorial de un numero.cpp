/*
	ESCRIBA UN PROGRAMA QUE CALCULE EL VALOR DE: 1*2*3*...*N (FACTORIAL)
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int numero = 0, factorial = 1;
	cout<<"DIGITE EL NUMERO DEL CUAL DESEA EL FACTORIAL: ";	cin>>numero;
	for(int i=1; i<=numero; i++){
		factorial *= i;
	}
	cout<<"--------------------------------"<<endl;
	cout<<"EL FACTORIAL DE: "<<numero<<" ES: "<<factorial<<endl<<endl;
	system("pause");
	return 0;
}
