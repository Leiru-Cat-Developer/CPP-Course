/*
	REALICE UNA FUNCI�N QUE TOME COMO PAR�METROS UN VECTOR Y SU TAMA�O Y DIGA SI EL VECTOR EST�
	ORDENADO CRECIENTEMENTE.
	SUGERENCIA: "COMPRUEBE QUE TODAS LAS POCISIONES DEL VECTOR, SALVO PARA LA 0, EL ELEMENTO DEL
			   DEL VECTOR ES MAYOR O IGUAL QUE EL ELEMENTO QUE LE PRECEDE EN EL VECTOR"
			   
	ESTE PROGRAMA FALLA POR ALGUNA RAZON 
*/
#include<iostream>  	//LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRER�A PARA CADENAS
#include<math.h>    	//LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  	//LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   	//LIBRER�A PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA N�MEROS ALEATORIOS
#include<windows.h> 	//LIBRER�A PARA FUNCIONES ESPECIALES
using namespace std;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void verificarOrdenamiento(int arreglo[], int);

//VARIABLES GLOBALES
int vector[100], longitud = 0;

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	pedirDatos();
	cout<<endl;
	verificarOrdenamiento(vector,longitud);
	cout<<endl<<endl;
	system("pause");
	return 0;
}

//DEFINICI�N DE FUNCIONES
void pedirDatos(){
	cout<<"DIGITE EL TAMA�O DEL VECTOR: ";	cin>>longitud;
	cout<<endl;
	for(int i=0; i<longitud; i++){
		cout<<"DIGITE EL N�MERO ["<<i<<"]: ";	cin>>vector[i];
	}
}
void verificarOrdenamiento(int arreglo[], int x){
	bool bandera = false;
	int i = 0;
	for(int j=0; j<x; j++){
		cout<<arreglo[j]<<"   ";
	}
	cout<<endl<<endl;
	while((bandera == false)&&(i < x-1)){
		if(arreglo[i]>arreglo[i+1]){
			bandera == true;							//CUANDO EL ARREGLO NO EST� ORDENADO
		}
		i++;
	}
	if(bandera){
		cout<<"EL ARREGLO NO EST� ORDENADO  . . .";
	}else if(bandera == false){
		cout<<"EL ARREGLO EST� ORDENADO CRECIENTEMENTE . . .";
	}
} 
