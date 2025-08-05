/*
	ESCRIBA UNA FUNCIÓN LLAMADA MULT() QUE ACEPTE DOS NÚMEROS EN PUNTO FLOTANTE COMO PARÁMETROS, MULTIPLIQUE
	ESTOS DOS NÚMEROS Y DESPLIEGUE EL RESULTADO
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE LA FUNCIÓN
void pedirDatos();
void multiplicarNumeros(float n1, float n2);
//DEFINICIÓN DE VARIABLES GLOBALES
float numero1 = 0, numero2 = 0;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	multiplicarNumeros(numero1,numero2);
	system("pause");
	return 0;
}
void pedirDatos(){
	cout<<"DIGITE DOS NÚMEROS: ";	cin>>numero1>>numero2;
}
void multiplicarNumeros(float n1, float n2){
	cout<<"EL RESULTADO DE LA MULTIPLICACIÓN ES: "<<n1*n2<<endl<<endl;
}
