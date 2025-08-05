/*
	ESCRIBA UN PROGRAMA EN C++ QUE DEVUELVA LA PARTE FRACCIONARIA DE CUALQUIER N�MERO INTRODUCIDO POR EL USUARIO.
	POR EJEMPLO, SI SE INTRODUCE EL N�MERO 256.879, DEBER�A DESPLEGARSE EL N�MERO 0.879
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void pedirDatos();
float devolverParteFraccionaria(float n);
//VARIABLES GLOBALES
float numero = 0;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	cout<<"EL N�MERO SIN PARTE DECIMAL ES: "<<devolverParteFraccionaria(numero)<<endl<<endl;
	system("pause");
	return 0;
}
//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL N�MERO: ";	cin>>numero;
}
float devolverParteFraccionaria(float n){
	int parteEntera = n;	//AL ALMACENAR UN N�MERO FLOTANTE EN UN ENTERO, SOLO SE ALMACENA LA PARTE ENTERA
	return n-parteEntera;
}
