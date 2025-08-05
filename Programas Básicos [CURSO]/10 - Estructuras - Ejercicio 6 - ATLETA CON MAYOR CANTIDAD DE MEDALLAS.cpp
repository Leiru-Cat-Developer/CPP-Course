/*
	HACER UN ARREGLO DE ESTRUCTURA LLAMADA ATLETA PARA N ATLETAS QUE CONTENGA LOS SIGUIENTES CAMPOS
		- NOMBRE, PA�S, NUMERO DE MEDALLAS
	Y DEVUELVA LOS DATOS NOMBRE Y PA�S DEL ATLETA QUE HA GANADO EL MAYOR N�MERO DE MEDALLAS
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
struct Atleta{
	char nombre[50];
	char pais[100];
	int numeroDeMedallas;
}atletas[100];
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numeroDeAtletas = 0, pocisionMayor = 0, mayor = 0;
	while(numeroDeAtletas<=0){
		cout<<"DIGITE EL N�MERO DE ATLETAS QUE VAN A PARTICIPAR: ";	cin>>numeroDeAtletas;
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
		cout<<"PA�S: ";				cin.getline(atletas[i].pais,100,'\n');
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
	cout<<"PA�S: "<<atletas[pocisionMayor].pais<<endl;
	cout<<"CANTIDAD DE MEDALLAS: "<<atletas[pocisionMayor].numeroDeMedallas<<endl<<endl;
	system("pause");
	return 0;
}
