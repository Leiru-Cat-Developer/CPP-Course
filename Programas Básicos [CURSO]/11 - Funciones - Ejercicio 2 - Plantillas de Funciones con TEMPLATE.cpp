/*
	PARA LAS PLANTILLAS DE FUNCIONES . . .  SACAR EL VALOR ABSOLUTO DE UN NÚMERO
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE LA FUNCIÓN
template <class TIPODENUMERO>				//PREFIJO DE LA PLANTILLA PARA DEFINIR UN TIPO DE DATO GENERAL
void mostrarValorAbsoluto(TIPODENUMERO n);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numeroUno = 10;
	float numeroDos = -30.65;
	double numeroTres = -900.8736;
	mostrarValorAbsoluto(numeroUno);
	mostrarValorAbsoluto(numeroDos);
	mostrarValorAbsoluto(numeroTres);
	system("pause");
	return 0;
}
template <class TIPODENUMERO>				//EL PREFIJO SE COPEA ANTES DE LA FUNCIÓN QUE USE EL PREFIJO
void mostrarValorAbsoluto(TIPODENUMERO n){
	if(n<0){
		n *= -1;
	}
	cout<<"EL VALOR ABSOLUTO DEL NÚMERO ES: "<<n<<endl<<endl;
}
