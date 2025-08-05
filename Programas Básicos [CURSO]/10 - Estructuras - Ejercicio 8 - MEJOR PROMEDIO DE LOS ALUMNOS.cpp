/*
	UTILIAR EL EJERCICIO 7 DE ESTRUCTURAS Y AHORA APLICARLO PARA DEFINIR CUAL
	ES EL ALUMNO CON EL MEJOR PROMEDIO E IMPRIMIR SUS DATOS
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};
struct Alumno{
	char nombre[100];
	char sexo[100];
	int edad;
	struct Promedio pedirPromedio;
	float promedioFinal;
}a[100];
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numeroDeAlumnos = 0, pocisionMayor = 0;
	float mayorPromedio = 0;
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
		if(a[i].promedioFinal>mayorPromedio){
			mayorPromedio = a[i].promedioFinal;
			pocisionMayor = i;
		}
		cout<<endl;
	}
	system("pause");
	system("cls");
	cout<<"DATOS DEL ALUMNO CON MAYOR PROMEDIO ["<<pocisionMayor<<"]"<<endl<<endl;
	cout<<"NOMBRE: "<<a[pocisionMayor].nombre<<endl;
	cout<<"SEXO: "<<a[pocisionMayor].sexo<<endl;
	cout<<"EDAD: "<<a[pocisionMayor].edad<<endl;
	cout<<"PROMEDIO: "<<a[pocisionMayor].promedioFinal<<endl<<endl;
	system("pause");
	return 0;
}
