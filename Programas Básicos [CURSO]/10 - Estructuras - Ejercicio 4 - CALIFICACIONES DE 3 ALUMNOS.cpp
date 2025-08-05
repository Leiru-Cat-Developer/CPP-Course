/*
	HACER UNA ESTRUCTURA LLAMADA ALUMO, EN LA CUAL SE TENDRÁN LOS SIGUIENTES CAMPOS
		-  NOMBRE, EDAD, PROMEDIO
	PEDIR LOS DATOS AL USUARIO PARA 3 ALUMNOS, COMPROBAR CUÁL DE LOS 3 TIENE EL
	MEJOR PROMEDIO Y POSTERIORMENTE IMPRIMIR LOS DATOS DEL ALUMNO
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
struct Alumno{
	char nombre[50];
	int edad;
	float promedio;
}alumnoUno,alumnoDos,alumnoTres;
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	cout<<"DATOS DEL ALUMNO UNO"<<endl<<endl;
	cout<<"DIGITE EL NOMBRE DEL ALUMNO: ";		cin.getline(alumnoUno.nombre,50,'\n');
	cout<<"DIGITE LA EDAD DEL ALUMNO: ";		cin>>alumnoUno.edad;
	cout<<"DIGITE EL PROMEDIO DEL ALUMNO: ";	cin>>alumnoUno.promedio;
	cout<<endl;	fflush(stdin);		//LIMPIEZA DE BUFFER
	cout<<"DATOS DEL ALUMNO DOS"<<endl<<endl;
	cout<<"DIGITE EL NOMBRE DEL ALUMNO: ";		cin.getline(alumnoDos.nombre,50,'\n');
	cout<<"DIGITE LA EDAD DEL ALUMNO: ";		cin>>alumnoDos.edad;
	cout<<"DIGITE EL PROMEDIO DEL ALUMNO: ";	cin>>alumnoDos.promedio;
	cout<<endl;	fflush(stdin);		//LIMPIEZA DE BUFFER
	cout<<"DATOS DEL ALUMNO TRES"<<endl<<endl;
	cout<<"DIGITE EL NOMBRE DEL ALUMNO: ";		cin.getline(alumnoTres.nombre,50,'\n');
	cout<<"DIGITE LA EDAD DEL ALUMNO: ";		cin>>alumnoTres.edad;
	cout<<"DIGITE EL PROMEDIO DEL ALUMNO: ";	cin>>alumnoTres.promedio;
	cout<<endl<<endl;
	if((alumnoUno.promedio>alumnoDos.promedio)&&(alumnoUno.promedio>alumnoTres.promedio)){
		cout<<"MEJOR PROMEDIO DEL ALUMNO UNO . . ."<<endl;
		cout<<"NOMBRE: "<<alumnoUno.nombre<<endl;
		cout<<"EDAD: "<<alumnoUno.edad<<endl;
		cout<<"PROMEDIO: "<<alumnoUno.promedio<<endl<<endl;
	}else if((alumnoDos.promedio>alumnoUno.promedio)&&(alumnoDos.promedio>alumnoTres.promedio)){
		cout<<"MEJOR PROMEDIO DEL ALUMNO DOS . . ."<<endl;
		cout<<"NOMBRE: "<<alumnoDos.nombre<<endl;
		cout<<"EDAD: "<<alumnoDos.edad<<endl;
		cout<<"PROMEDIO: "<<alumnoDos.promedio<<endl<<endl;
	}else{
		cout<<"MEJOR PROMEDIO DEL ALUMNO TRES . . ."<<endl;
		cout<<"NOMBRE: "<<alumnoTres.nombre<<endl;
		cout<<"EDAD: "<<alumnoTres.edad<<endl;
		cout<<"PROMEDIO: "<<alumnoTres.promedio<<endl<<endl;
	}
	system("pause");
	return 0;
}
