/*
	REALIZA UN PROGRAMA QUE LEA UN ARREGLO DE ESTRUCTURAS LOS DATOS DE N EMPLEADOS
	DE LA EMPRESA Y QUE IMPRIMA LOS DATOS DEL EMPLEADO CON MAYOR Y MENOR SALARIO
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
struct Empleado{
	char nombre[50];
	int edad;
	double salario;
}empleados[100];
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numeroDeEmpleados = 0, pocisionMayor = 0, pocisionMenor = 0;
	while(numeroDeEmpleados<=0){
		cout<<"DIGITE EL NÚMERO DE EMPLEADOS QUE DESEA DIGITAR: ";	cin>>numeroDeEmpleados;
		if(numeroDeEmpleados<=0){
			cout<<endl;
			cout<<"DIGITE NÚMEROS VALIDOS . . ."<<endl<<endl;
			system("pause");
			system("cls");
		}
	}
	cout<<endl;
	double salarioMaximo = 0, salarioMinimo = 999999;
	for(int i=0; i<numeroDeEmpleados; i++){
		fflush(stdin);	//LIMPIEZA DE BUFFER
		cout<<"EMPLEADO ["<<i<<"]"<<endl<<endl;
		cout<<"DIGITE EL NOMBRE: ";	cin.getline(empleados[i].nombre,50,'\n');
		cout<<"DIGITE LA EDAD: ";	cin>>empleados[i].edad;
		cout<<"DIGITE EL SALARIO: $";	cin>>empleados[i].salario;
		cout<<endl;
		if(empleados[i].salario>salarioMaximo){
			//DETERMINANDO EL MAYOR SALARIO
			salarioMaximo = empleados[i].salario;
			pocisionMayor = i;
		}
		if(empleados[i].salario<salarioMinimo){
			//DETERMINANDO EL MENOR SALARIO
			salarioMinimo = empleados[i].salario;
			pocisionMenor = i;
		}
	}
	system("cls");
	//SALARIO MAYOR
	cout<<"EL EMPLEADO CON MAYOR SALARIO"<<endl<<endl;
	cout<<"NOMBRE: "<<empleados[pocisionMayor].nombre<<endl;
	cout<<"EDAD: "<<empleados[pocisionMayor].edad<<endl;
	cout<<"SALARIO: $"<<empleados[pocisionMayor].salario<<endl<<endl;
	//SALARIO MENOR
	cout<<"EL EMPLEADO CON MENOR SALARIO"<<endl<<endl;
	cout<<"NOMBRE: "<<empleados[pocisionMenor].nombre<<endl;
	cout<<"EDAD: "<<empleados[pocisionMenor].edad<<endl;
	cout<<"SALARIO: $"<<empleados[pocisionMenor].salario<<endl<<endl;
	system("pause");
	return 0;
}
