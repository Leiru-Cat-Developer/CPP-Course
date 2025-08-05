/*
	REALICE UN PROGRAMA QUE LEA UNA CADENA DE CARACTERES DE LA ENTRADA EST�NDAR Y MUESTRE
	EN LA SALIDA EST�NDAR CU�NTAS CU�NTAS OCURRENCIAS DE CADA VOCAL EXISTEN EN LA CADENA
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	//INICIALIZACIONES
	int vocalesA = 0, vocalesE = 0, vocalesI = 0, vocalesO = 0, vocalesU = 0;
	char cadenaDeCaracteres[200];
	cout<<"DIGITE UNA FRASE: ";	cin.getline(cadenaDeCaracteres,200,'\n');	//LEE FRASE
	strupr(cadenaDeCaracteres);	//CONVIERTE A MAYUSCULAS Y GUARDA EN SI MISMA LA FRASE
	/*
		HACERMOS UN CICLO PARA COMPARAR CADA UNO DE LOS CARACTERES
		CON LAS VOCALES, USAMOS "STRLEN" COMO LIMITE PARA QUE SE REPITA
		EL CICLO, Y TOMAMOS LA LONGITUR DE LA CADENA CONVERTIDA EN 
		MAYUSCULAS PARA AS� AHORRARNOS C�DIGO
	*/
	for(int i=0; i<strlen(cadenaDeCaracteres); i++){
		switch(cadenaDeCaracteres[i]){
			case 'A':	vocalesA++;	break;
			case 'E':	vocalesE++;	break;
			case 'I':	vocalesI++;	break;
			case 'O':	vocalesO++;	break;
			case 'U':	vocalesU++;	break;
		}
	}
	cout<<endl;
	cout<<"CANTIDAD DE A: "<<vocalesA<<endl;
	cout<<"CANTIDAD DE E: "<<vocalesE<<endl;
	cout<<"CANTIDAD DE I: "<<vocalesI<<endl;
	cout<<"CANTIDAD DE O: "<<vocalesO<<endl;
	cout<<"CANTIDAD DE U: "<<vocalesU<<endl;
	cout<<endl;
	system("pause");
	return 0;
}
