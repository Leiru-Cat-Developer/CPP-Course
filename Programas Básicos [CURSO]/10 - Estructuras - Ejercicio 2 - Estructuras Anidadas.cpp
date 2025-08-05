/*
	ESTRUCTURAS ANIDADAS
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
//CODIFICACIÓN DE ESTRUCTURAS ANIDADAS [ - ]
struct Informacion_direccion{
	char direccion[50];
	char ciudad[50];
	char provincia[50];
};
struct Empleado{
	char nombre[50];
	struct Informacion_direccion Direccion_Empleado;	//STRUCT nombreEstructura nuevoNombreVariable
	double salario;	
}empleados[5];
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	for(int i=0; i<5; i++){
		fflush(stdin);	//LIMPIANDO EL BUFFER PARA GUARDAR VARIOS DATOS
		cout<<"----- DATOS DEL EMPLEADO EN LA POCISIÓN ["<<i<<"] -----"<<endl<<endl;
		cout<<"DIGITE EL NOMBRE DEL EMPLEADO: 		";	cin.getline(empleados[i].nombre,50,'\n');
		cout<<"DIGITE LA DIRECCION DEL EMPLEADO: 	";	cin.getline(empleados[i].Direccion_Empleado.direccion,50,'\n');
		cout<<"DIGITE LA CIUDAD DEL EMPLEADO: 		";	cin.getline(empleados[i].Direccion_Empleado.ciudad,50,'\n');
		cout<<"DIGITE LA PROVINCIA DEL EMPLEADO: 	";	cin.getline(empleados[i].Direccion_Empleado.provincia,50,'\n');
		cout<<"DIGITE EL SALARIO DEL EMPLEADO: 		$";	cin>>empleados[i].salario;
		cout<<endl;
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	//MOSTRANDO LOS DATOS AL USUARIO
	for(int i=0; i<5; i++){
		cout<<"NOMBRE DEL EMPLEADO 		["<<i<<"]: "<<empleados[i].nombre<<endl;
		cout<<"DIRECCION DEL EMPLEADO 	["<<i<<"]: "<<empleados[i].Direccion_Empleado.direccion<<endl;
		cout<<"CIUDAD DEL EMPLEADO 		["<<i<<"]: "<<empleados[i].Direccion_Empleado.ciudad<<endl;
		cout<<"PROVINCIA DEL EMPLEADO 	["<<i<<"]: "<<empleados[i].Direccion_Empleado.provincia<<endl;
		cout<<"SALARIO DEL EMPLEADO 		["<<i<<"]: $"<<empleados[i].salario<<endl<<endl;
	}
	system("pause");
	return 0;
}

