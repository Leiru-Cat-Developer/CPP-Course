/*
	ESCRIBA UN PROGRAMA QUE LEA DE LA ENTRADA ESTANDAR UN CARACTER E INDIQUE
	EN LA SALIDA ESTANDAR SI EL CARACTER ES UNA VOCAL MINUSCULA O NO
*/
#include<iostream>
using namespace std;
int main(){
	char vocal;
	cout<<"DIGITE UNA VOCAL: ";	cin>>vocal;
	cout<<"--------------------------------"<<endl;
	switch(vocal){
		case 'a':		cout<<"LA VOCAL ES a, Y ES MINUSCULA";
			break;
		case 'e':		cout<<"LA VOCAL ES e, Y ES MINUSCULA";
			break;
		case 'i':		cout<<"LA VOCAL ES i, Y ES MINUSCULA";
			break;
		case 'o':		cout<<"LA VOCAL ES o, Y ES MINUSCULA";
			break;
		case 'u':		cout<<"LA VOCAL ES u, Y ES MINUSCULA";
			break;
		default:		cout<<"NO ES UNA VOCAL MINUSCULA";
			break;
	}
	return 0;
}
