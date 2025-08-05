/*
	PEDIR AL USUARIO QUE DIGITE 2 CADENAS DE CARACTERES, E INDICAR SI AMBAS
	CADENAS SON IGUALES, EN CASO DE NO SERLO, INDICAR CUAL ES MAYOR
	ALFABETICAMENTE
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int longitudCadenaUno = 0, longitudCadenaDos = 0;
	/*
		EN ESTÁ PARTE DEL PROGRAMA REALIZAMOS UN CICLO QUE PIDA LAS LONGITUDES DE
		LAS CADENAS. HASTA QUE TENGA VALORES VALIDOS, ES QUE SE PUEDE SEGUIR CON
		EL PROGRAMA.
	*/
	while((longitudCadenaUno<=0)&&(longitudCadenaDos<=0)){
		cout<<"DIGITE DOS LONGITUDES PARA SUS FRASES: ";	cin>>longitudCadenaUno>>longitudCadenaDos;	//PEDIMOS LAS LONGITUDES EN UNA MISMA LÍNEA
		if((longitudCadenaUno<=0)&&(longitudCadenaDos<=0)){
			cout<<endl;
			cout<<"DIGITE VALORES VALIDOS . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	fflush(stdin);	//LIMPIAMOS EL BUFFER PARA PODER ALMACENAR LAS CADENAS DE CARÁCTERES
	char fraseUno[longitudCadenaUno];
	char fraseDos[longitudCadenaDos];
	cout<<endl;
	cout<<"DIGITE LA FRASE DE LA CADENA UNO: ";	cin.getline(fraseUno,longitudCadenaUno,'\n');
	cout<<"DIGITE LA FRASE DE LA CADENA DOS: ";	cin.getline(fraseDos,longitudCadenaDos,'\n');
	if(strcmp(fraseUno,fraseDos)==0){	//SI LA COMPARACIÓN ES 0, SIGNIFICA QUE SON IGUALES
		cout<<endl;
		cout<<"LAS FRASES SON IGUALES"<<endl<<endl;
	}else if(strcmp(fraseUno,fraseDos)!=0){	//SI LA COMPARACIÓN NO ES 0, SON DIFERENTES
		cout<<endl;
		if(strcmp(fraseUno,fraseDos)>0){
			//SI UNA LETRA ESTÁ DESPUÉS DE OTRA [FRASE UNO]
			cout<<"'"<<fraseUno<<"'"<<" ESTA DESPUÉS ALFABETICAMENTE . . ."<<endl<<endl;
		}else{
			//SI UNA LETRA ESTÁ DESPUÉS DE OTRA [FRASE DOS]
			cout<<"'"<<fraseDos<<"'"<<" ESTA DESPUÉS ALFABETICAMENTE . . ."<<endl<<endl;
		}
	}
	system("pause");
	return 0;
}
