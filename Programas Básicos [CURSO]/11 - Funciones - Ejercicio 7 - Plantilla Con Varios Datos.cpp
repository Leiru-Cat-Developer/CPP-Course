/*
	ESCRIBA UNA PLANTILLA DE FUNCI�N LLAMADA "DESPLIEGUE()" QUE DESPLIEGUE EL VALOR DEL ARGUMENTO �NICO QUE SE LE
	TRANSMITE CUANDO ES INVOCADA LA FUNCI�N
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE FUNCIONES
template <class TIPO>
void despliegue(TIPO n);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
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
