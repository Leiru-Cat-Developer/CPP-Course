/*
	HACER UN ARREGLO DE ESTRUCTURA LLAMADA ATLETA PARA N ATLETAS QUE CONTENGA LOS SIGUIENTES CAMPOS
		- NOMBRE, PAÍS, NUMERO DE MEDALLAS
	Y DEVUELVA LOS DATOS NOMBRE Y PAÍS DEL ATLETA QUE HA GANADO EL MAYOR NÚMERO DE MEDALLAS
*/
#include<iostream>  //LIBRERÍA ESTÁNDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRERÍA PARA CADENAS
#include<math.h>    //LIBRERÍA DE MATEMÁTICAS
#include<stdlib.h>  //LIBRERÍA PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRERÍA PARA PAUSAS 2 [GETCH()]
using namespace std;
struct Atleta{
	char nombre[50];
	char pais[100];
	int numeroDeMedallas;
}atletas[100];
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACIÓN DE LENGUAJE A ESPAÑOL [´,Ñ,? ... ETC]
	int numeroDeAtletas = 0, pocisionMayor = 0, mayor = 0;
	while(numeroDeAtletas<=0){
		cout<<"DIGITE EL NÚMERO DE ATLETAS QUE VAN A PARTICIPAR: ";	cin>>numeroDeAtletas;
		if(numeroDeAtletas<=0){
			cout<<endl;
			cout<<"DIGITE VALORES VALIDOS . . ."<<endl<<endl,
			system("pause");
			system("cls");
		}
	}
	cout<<endl;
	for(int i=0; i<numeroDeAtletas; i++){
		fflush(stdin);
		cout<<"ATLETA ["<<i<<"]"<<endl<<endl;
		cout<<"NOMBRE: ";				cin.getline(atletas[i].nombre,50,'\n');
		cout<<"PAÍS: ";				cin.getline(atletas[i].pais,100,'\n');
		cout<<"CANTIDAD DE MEDALLAS: ";	cin>>atletas[i].numeroDeMedallas;
		cout<<endl;
		if(atletas[i].numeroDeMedallas>mayor){
			//DETERMINANDO EL ATLETA CON MAYOR CANTIDAD DE MEDALLAS
			mayor = atletas[i].numeroDeMedallas;
			pocisionMayor = i;
		}
	}
	system("cls");
	cout<<"EL ATLETA CON MAYOR CANTIDAD DE MEDALLAS"<<endl<<endl;
	cout<<"NOMBRE: "<<atletas[pocisionMayor].nombre<<endl;
	cout<<"PAÍS: "<<atletas[pocisionMayor].pais<<endl;
	cout<<"CANTIDAD DE MEDALLAS: "<<atletas[pocisionMayor].numeroDeMedallas<<endl<<endl;
	system("pause");
	return 0;
}
