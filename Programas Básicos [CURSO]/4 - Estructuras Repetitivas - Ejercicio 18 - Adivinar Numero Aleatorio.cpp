/*
	REALICE U PROGRAMA QUE SOLICITE AL USUARIO QUE PIENSE UN NÚMERO ENTERO
	ENTRE EL 1 Y EL 100. EL PROGRAMA DEBE GENERAR UN NÚMERO ALEATORIO EN ESE
	MISMO RANGO [1-100], E INDICARLE AL USUARIO SI EL NÚMERO QUE DIGITO ES MENOR
	O MAYOR AL NÚMERO ALEATORIO GENERADO, ASÍ HASTA QUE ADIVINE. Y POR ÚLTIMO
	MOSTRARLE EL NÚMERO DE INTENTOS QUE LE LLEVO.
	
	VARIABLE = LIMITE_INFERIOR + RAND() % (LIMITE_SUPERIOR + 1 - LIMITE_INFERIOR);
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>	//LIBRERÍA PARA GENERAR EL NÚMERO ALEATORIO
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int numero = 0, dato = 0, intentos = 1;
	srand(time(NULL));	//GENERAR NÚMERO ALEATORIO
	dato = 1 + rand() % (100);
	do{
		cout<<"DIGITE UN NÚMERO INTENTO ["<<intentos<<"]: ";	cin>>numero;
		if(numero>dato){
			cout<<endl<<endl;
			cout<<"DIGITE UN NÚMERO MENOR . . .";
			cout<<endl<<endl<<endl;
			system("pause");
			system("cls");
		}
		if(numero<dato){
			cout<<endl<<endl;
			cout<<"DIGITE UN NÚMERO MAYOR . . .";
			cout<<endl<<endl<<endl;
			system("pause");
			system("cls");
		}
		intentos++;
	}while(numero!=dato);
	system("cls");
	cout<<"FELICIDADES ADIVINASTE EN "<<intentos<<" INTENTOS . . ."<<endl<<endl;
	system("pause");
	return 0;
}
