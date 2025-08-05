/*
	ESCRIBA UNA PLANTILLA DE FUNCIÓN LLAMADA "DESPLIEGUE()" QUE DESPLIEGUE EL VALOR DEL ARGUMENTO ÚNICO QUE SE LE
	TRANSMITE CUANDO ES INVOCADA LA FUNCIÓN
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE FUNCIONES
template <class TIPO>
void despliegue(TIPO n);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numeroUno = 5;
	float numeroDos = 25.25;
	double numeroTres = 900.29382;
	char letra = 'K';
	despliegue(numeroUno);
	despliegue(numeroDos);
	despliegue(numeroTres);
	despliegue(letra);
	system("pause");
	return 0;
}
template <class TIPO>
void despliegue(TIPO n){
	cout<<"DESPLIEGUE: "<<n<<endl<<endl;
}
