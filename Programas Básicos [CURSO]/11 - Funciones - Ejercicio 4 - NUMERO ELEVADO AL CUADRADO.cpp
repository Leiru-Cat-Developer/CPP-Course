/*
	ESCRIBA UNA FUNCI�N LLAMADA "al_cuadrado()" QUE CALCULE EL CUADRADO DEL VALOR QUE SE LE TRANSMITE Y
	DESPLIEGUE EL RESULTADO. LA FUNCI�N DEBER� SER CAPAZ DE ELEVAR AL CUADRADO N�MEROS FLOTANTES
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//PROTOTIPO DE LA FUNCI�N
void al_cuadrado(float n);
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	float numero = 10;
	al_cuadrado(numero);
	system("pause");
	return 0;
}
void al_cuadrado(float n){
	cout<<"EL N�MERO '"<<n<<"' ELEVADO AL CUADRADO ES: "<<pow(n,2)<<endl<<endl;
}
