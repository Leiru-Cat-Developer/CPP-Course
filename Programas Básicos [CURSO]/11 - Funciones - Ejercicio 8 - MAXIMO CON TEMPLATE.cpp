/*
	ESCRIBA UNA PLANTILLA DE FUNCI�N LLAMADA "maximo()" QUE DEVUELVA EL VALOR M�XIMO DE TRES ARGUMENTOS QUE SE
	TRANSMITAN A LA FUNCI�N CUANDO SEA LLAMADA. SUPONGA QUE LOS TRES ARGUMENTOS SER�N DEL MISMO TIPO DE DATOS.
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
//PROTOTIPOS DE FUNCIONES
template <class DATO>
DATO maximo(DATO n1, DATO n2, DATO n3);
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int valorEntero1 = 5, valorEntero2 = 5, valorEntero3 = 5;							//VALORES ENTEROS
	float valorFlotante1 = 50.50, valorFlotante2 = 82.129, valorFlotante3 = 900.9;			//VALORES FLOTANTES
	double valorDouble1 = 21323.2, valorDouble2 = 1231.4, valorDouble3 = 12421.1;			//VALORES DOUBLE
	//FUNCI�N PARA VALORES ENTEROS
	cout<<"EL MAYOR DE LOS ENTEROS ES: "<<maximo(valorEntero1,valorEntero2,valorEntero3)<<endl<<endl;
	//FUNCI�N PARA VALORES FLOTANTES
	cout<<"EL MAYOR DE LOS FLOTANTES ES: "<<maximo(valorFlotante1,valorFlotante2,valorFlotante3)<<endl<<endl;
	//FUNCI�N PARA VALORES DOUBLE
	cout<<"EL MAYOR DE LOS DOUBLE ES: "<<maximo(valorDouble1,valorDouble2,valorDouble3)<<endl<<endl;
	system("pause");
	return 0;
}
template <class DATO>
DATO maximo(DATO n1, DATO n2, DATO n3){
	if((n1>n2)&&(n1>n3)){
		return n1;			//MAYOR DATO 1
	}else if((n2>n1)&&(n2>n3)){
		return n2;			//MAYOR DATO 2
	}else if((n3>n1)&&(n3>n2)){
		return n3;			//MAYOR DATO 3
	}
}
