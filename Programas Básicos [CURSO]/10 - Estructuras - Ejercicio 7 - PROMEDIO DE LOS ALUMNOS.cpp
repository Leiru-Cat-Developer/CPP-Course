/*
	HACER 2 ESTRUCTURAS UNA LLAMADA PROMEDIO QUE TENDRÁ LOS SIGUIENTES CAMPOS
	
		- NOTA1, NOTA2, NOTA3
		
	Y OTRA ESTRUCTURA LLAMADA ALUMNO QUE TENDRÁ LOS SIGUIENTES MIEMBROS:
	
		- NOMBRE, SEXO, EDAD
		
	HACER QUE LA ESTRUCTURA PROMEDIO ESTE ANIDADA EN LA ESTRUCTURA ALUMNO, LUEGO
	CALCULAR SU PROMEDIO, Y POR ÚLTIMO IMPRIMIR TODOS SUS DATOS INCLUIDOS EL
	PROMEDIO
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//INICIALIZACIÓN DE LAS ESTRUCTURAS
struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct Alumno{
	char nombre[100];
	char sexo[100];
	int edad;
	struct Promedio pedirPromedio;	//ESTRUCTURA ANIDADA
	float promedioFinal;			//VARIABLE EXTRA PARA ITERACIONES
}a[100];
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numeroDeAlumnos = 0;
	while(numeroDeAlumnos<=0){
		cout<<"DIGITE EL NÚMERO DE ALUMNOS A INGRESAR: ";	cin>>numeroDeAlumnos;
		if(numeroDeAlumnos<=0){
			cout<<endl;
			cout<<"DIGITE DATOS VALIDOS . . ."<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	//PEDIMOS LOS DATOS DE LOS ALUMNOS
	for(int i=0; i<numeroDeAlumnos; i++){
		fflush(stdin);	//LIMPIEZA DE BUFFER PARA QUE NOS PERMITA INGRESAR VARIAS CADENAS
		cout<<"DATOS DEL ALUMNO ["<<i<<"]"<<endl<<endl;
		cout<<"DIGITE EL NOMBRE DEL ALUMNO: ";						cin.getline(a[i].nombre,100,'\n');
		cout<<"DIGITE EL SEXO DEL ALUMNO [MASCULINO / FEMENINO]: ";		cin.getline(a[i].sexo,100,'\n');
		cout<<"DIGITE LA EDAD DEL ALUMNO: ";						cin>>a[i].edad;
		cout<<"DIGITE LA NOTA 1: ";								cin>>a[i].pedirPromedio.nota1;
		cout<<"DIGITE LA NOTA 2: ";								cin>>a[i].pedirPromedio.nota2;
		cout<<"DIGITE LA NOTA 3: ";								cin>>a[i].pedirPromedio.nota3;
		a[i].promedioFinal = (a[i].pedirPromedio.nota1+a[i].pedirPromedio.nota2+a[i].pedirPromedio.nota3)/3;
		cout<<endl;
	}
	system("pause");
	system("cls");
	for(int i=0; i<numeroDeAlumnos; i++){
		cout<<"DATOS DEL ALUMNO ["<<i<<"]"<<endl<<endl;
		cout<<"NOMBRE: "<<a[i].nombre<<endl;
		cout<<"SEXO: "<<a[i].sexo<<endl;
		cout<<"EDAD: "<<a[i].edad<<endl;
		cout<<"PROMEDIO: "<<a[i].promedioFinal<<endl<<endl;
	}
	system("pause");
	return 0;
}
