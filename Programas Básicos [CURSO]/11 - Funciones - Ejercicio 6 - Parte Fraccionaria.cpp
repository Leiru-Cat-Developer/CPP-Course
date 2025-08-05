/*
	ESCRIBA UN PROGRAMA EN C++ QUE DEVUELVA LA PARTE FRACCIONARIA DE CUALQUIER NÚMERO INTRODUCIDO POR EL USUARIO.
	POR EJEMPLO, SI SE INTRODUCE EL NÚMERO 256.879, DEBERÍA DESPLEGARSE EL NÚMERO 0.879
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPOS DE FUNCIONES
void pedirDatos();
float devolverParteFraccionaria(float n);
//VARIABLES GLOBALES
float numero = 0;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	cout<<"EL NÚMERO SIN PARTE DECIMAL ES: "<<devolverParteFraccionaria(numero)<<endl<<endl;
	system("pause");
	return 0;
}
//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL NÚMERO: ";	cin>>numero;
}
float devolverParteFraccionaria(float n){
	int parteEntera = n;	//AL ALMACENAR UN NÚMERO FLOTANTE EN UN ENTERO, SOLO SE ALMACENA LA PARTE ENTERA
	return n-parteEntera;
}
