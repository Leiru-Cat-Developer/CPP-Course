/*
	PARA LAS PLANTILLAS DE FUNCIONES . . .  SACAR EL VALOR ABSOLUTO DE UN N�MERO
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE LA FUNCI�N
template <class TIPODENUMERO>				//PREFIJO DE LA PLANTILLA PARA DEFINIR UN TIPO DE DATO GENERAL
void mostrarValorAbsoluto(TIPODENUMERO n);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numeroUno = 10;
	float numeroDos = -30.65;
	double numeroTres = -900.8736;
	mostrarValorAbsoluto(numeroUno);
	mostrarValorAbsoluto(numeroDos);
	mostrarValorAbsoluto(numeroTres);
	system("pause");
	return 0;
}
template <class TIPODENUMERO>				//EL PREFIJO SE COPEA ANTES DE LA FUNCI�N QUE USE EL PREFIJO
void mostrarValorAbsoluto(TIPODENUMERO n){
	if(n<0){
		n *= -1;
	}
	cout<<"EL VALOR ABSOLUTO DEL N�MERO ES: "<<n<<endl<<endl;
}
