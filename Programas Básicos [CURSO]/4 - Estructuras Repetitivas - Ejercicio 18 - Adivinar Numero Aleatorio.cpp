/*
	REALICE U PROGRAMA QUE SOLICITE AL USUARIO QUE PIENSE UN N�MERO ENTERO
	ENTRE EL 1 Y EL 100. EL PROGRAMA DEBE GENERAR UN N�MERO ALEATORIO EN ESE
	MISMO RANGO [1-100], E INDICARLE AL USUARIO SI EL N�MERO QUE DIGITO ES MENOR
	O MAYOR AL N�MERO ALEATORIO GENERADO, AS� HASTA QUE ADIVINE. Y POR �LTIMO
	MOSTRARLE EL N�MERO DE INTENTOS QUE LE LLEVO.
	
	VARIABLE = LIMITE_INFERIOR + RAND() % (LIMITE_SUPERIOR + 1 - LIMITE_INFERIOR);
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>	//LIBRER�A PARA GENERAR EL N�MERO ALEATORIO
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int numero = 0, dato = 0, intentos = 1;
	srand(time(NULL));	//GENERAR N�MERO ALEATORIO
	dato = 1 + rand() % (100);
	do{
		cout<<"DIGITE UN N�MERO INTENTO ["<<intentos<<"]: ";	cin>>numero;
		if(numero>dato){
			cout<<endl<<endl;
			cout<<"DIGITE UN N�MERO MENOR . . .";
			cout<<endl<<endl<<endl;
			system("pause");
			system("cls");
		}
		if(numero<dato){
			cout<<endl<<endl;
			cout<<"DIGITE UN N�MERO MAYOR . . .";
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
