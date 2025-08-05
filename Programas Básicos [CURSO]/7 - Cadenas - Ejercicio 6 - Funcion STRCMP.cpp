/*
	COMPARAR CADENAS - FUNCI�N strcmp()
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int longitudCadenaUno = 0, longitudCadenaDos = 0;
	/*
		EN EST� PARTE DEL PROGRAMA REALIZAMOS UN CICLO QUE PIDA LAS LONGITUDES DE
		LAS CADENAS. HASTA QUE TENGA VALORES VALIDOS, ES QUE SE PUEDE SEGUIR CON
		EL PROGRAMA.
	*/
	while((longitudCadenaUno<=0)&&(longitudCadenaDos<=0)){
		cout<<"DIGITE DOS LONGITUDES PARA SUS FRASES: ";	cin>>longitudCadenaUno>>longitudCadenaDos;	//PEDIMOS LAS LONGITUDES EN UNA MISMA L�NEA
		if((longitudCadenaUno<=0)&&(longitudCadenaDos<=0)){
			cout<<endl;
			cout<<"DIGITE VALORES VALIDOS . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	fflush(stdin);	//LIMPIAMOS EL BUFFER PARA PODER ALMACENAR LAS CADENAS DE CAR�CTERES
	char fraseUno[longitudCadenaUno];
	char fraseDos[longitudCadenaDos];
	cout<<endl;
	cout<<"DIGITE LA FRASE DE LA CADENA UNO: ";	cin.getline(fraseUno,longitudCadenaUno,'\n');
	cout<<"DIGITE LA FRASE DE LA CADENA DOS: ";	cin.getline(fraseDos,longitudCadenaDos,'\n');
	if(strcmp(fraseUno,fraseDos)==0){	//SI LA COMPARACI�N ES 0, SIGNIFICA QUE SON IGUALES
		cout<<endl;
		cout<<"LAS FRASES SON IGUALES"<<endl<<endl;
	}else if(strcmp(fraseUno,fraseDos)!=0){	//SI LA COMPARACI�N NO ES 0, SON DIFERENTES
		cout<<endl;
		cout<<"LAS FRASES SON DIFERENTES"<<endl<<endl;
	}
	system("pause");
	return 0;
}
