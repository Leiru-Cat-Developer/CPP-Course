/*
	HACER UNA ESTRUCTURA LLAMA ALUMNO, EN LA CUAL SE TENDRÁN LOS SIGUIENTES CAMPO:
	NOMBRE, EDAD, PROMEDIO, PEDIR LOS DATOS AL USUARIO PARA 3 ALUMNOS, COMPROBAR CUÁL
	DE LOS 3 TIENE EL MEJOR PROMEDIO Y POSTERIORMENTE IMPRIMIR LOS DATOS DEL ALUMNO.
	USAR PUNTEROS A ESTRUCTURA.
*/
#include<iostream>  	//LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  	//LIBRERÍA PARA CADENAS
#include<math.h>    	//LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  	//LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")] - NEW y DELETE
#include<conio.h>   	//LIBRERÍA PARA PAUSAS 2 [GETCH()]
#include<time.h>    	//LIBRERIA PARA NÚMEROS ALEATORIOS
#include<windows.h> 	//LIBRERÍA PARA FUNCIONES ESPECIALES
using namespace std;

//ESTRUCTURAS
struct Alumno{
	char nombre[100];
	int edad;
	float promedio;
}alm[3], *punteroAlumno = alm;

//PROTOTIPOS DE FUNCIONES
void pedirDatos();
void calcularMejorPromedio(Alumno *);

int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	pedirDatos();
	calcularMejorPromedio(punteroAlumno);
	system("pause");
	return 0;
}

//DEFINICIÓN DE FUNCIONES
void pedirDatos(){
	for(int i=0; i<3; i++){
		cout<<"DIGITE EL NOMBRE DEL ALUMNO "<<i<<": ";	cin.getline((punteroAlumno+i)->nombre,100,'\n');
		cout<<"DIGITE LA EDAD DEL ALUMNO "<<i<<": ";		cin>>(punteroAlumno+i)->edad;
		cout<<"DIGITE EL PROMEDIO DEL ALUMNO "<<i<<": ";	cin>>(punteroAlumno+i)->promedio;
		cout<<endl;
		fflush(stdin);
	}
}
void calcularMejorPromedio(Alumno *puntero){
	/*
		EL SIGUIENTE PROGRAMA SE PUEDE REALIZAR CON ITERADORES, PERO AL SER SOLAMENTE PARA 3 ALUMNOS NO TIENE
		CHISTE ESTÁR HACIENDO MUCHAS ITERACIONES PARA UN SIMPLE CONDICIONAL QUE PODEMOS REPETIR, AUNQUE
		CUALQUIERA DE LAS 2 SOLUCIONES ES CORRECTA
	*/
	int p0 = 0;	//POCISIÓN CERO
	int p1 = 1;	//POCISIÓN UNO
	int p2 = 2;	//POCISIÓN DOS
	cout<<"----- DATOS DEL MEJOR PROMEDIO -----"<<endl<<endl;
	if(((puntero+p0)->promedio >= (puntero+p1)->promedio)&&((puntero+p0)->promedio >= (puntero+p2)->promedio)){
		//IMPRIME LOS DATOS DEL PRIMER ALUMNO
		cout<<"NOMBRE: "<<(puntero+p0)->nombre<<endl;
		cout<<"EDAD: "<<(puntero+p0)->edad<<endl;
		cout<<"PROMEDIO: "<<(puntero+p0)->promedio<<endl<<endl;
	}else if(((puntero+p1)->promedio >= (puntero+p0)->promedio)&&((puntero+p1)->promedio >= (puntero+p2)->promedio)){
		//IMPRIME LOS DATOS DEL SEGUNDO ALUMNO
		cout<<"NOMBRE: "<<(puntero+p1)->nombre<<endl;
		cout<<"EDAD: "<<(puntero+p1)->edad<<endl;
		cout<<"PROMEDIO: "<<(puntero+p1)->promedio<<endl<<endl;
	}else if(((puntero+p2)->promedio >= (puntero+p0)->promedio)&&((puntero+p2)->promedio >=ssss (puntero+p1)->promedio)){
		//IMPRIME LOS DATOS DEL TERCER ALUMNO
		cout<<"NOMBRE: "<<(puntero+p2)->nombre<<endl;
		cout<<"EDAD: "<<(puntero+p2)->edad<<endl;
		cout<<"PROMEDIO: "<<(puntero+p2)->promedio<<endl<<endl;
	}
}
