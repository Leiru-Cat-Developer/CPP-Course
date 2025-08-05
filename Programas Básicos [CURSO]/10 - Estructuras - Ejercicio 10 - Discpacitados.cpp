/*
	DEFINA UNA ESTRUCTURA QUE SIRVA PARA RESPRESENTAR A UNA PERSONA. LA ESTRUCTURA DE CONTENER DOS CAMPOS

		- NOMBRE Y UN VALOR DE TIPO L�GICO QUE INTIDA SI TIENE ALGUNA DISCAPACIDAD
	
	REALICE UN PROGRAMA QUE DADO UN VECTOR DE PERSONAS RELLENE DOS NUEVOS VECTORES:
	
		- UNO QUE CONTENGA LAS PERSONAS QUE NO TIENEN NINGUNA DISCAPACIDAD
		- OTRO QUE CONTENGA A LAS PERSONAS QUE TENGAN ALGUNA DISCAPACIDAD
*/
#include<iostream>  //LIBRER�A EST�NDAR [LECTURA - SALIDA]
#include<string.h>  //LIBRER�A PARA CADENAS
#include<math.h>    //LIBRER�A DE MATEM�TICAS
#include<stdlib.h>  //LIBRER�A PARA PAUSAS 1 [SYSTEM("PAUSE")]
#include<conio.h>   //LIBRER�A PARA PAUSAS 2 [GETCH()]
using namespace std;
//INICIALIZACI�N DE LAS ESTRUCTURAS
struct Persona{
	char nombre[100];
	bool discapacitado;
}prs[100],personasSinDiscapacidad[100],personasConDiscapacidad[100];
int main(){
	setlocale(LC_CTYPE, "Spanish");	//CONFIGURACI�N DE LENGUAJE A ESPA�OL [�,�,? ... ETC]
	int numeroDePersonas = 0, j = 0, k = 0;
	char opcion;
	while(numeroDePersonas<=0){
		cout<<"DIGITE EL N�MERO DE PERSONAS QUE DESEA INSERTAR: ";	cin>>numeroDePersonas;
		if(numeroDePersonas<=0){
			cout<<endl;
			cout<<"DIGITE VALORES VALIDOS . . ."<<endl<<endl;
			system("pause");
		}
		system("cls");
	}
	//PIDIENDO LOS DATOS DE LAS PERSONS
	for(int i=0; i<numeroDePersonas; i++){
		fflush(stdin);
		cout<<"DIGITE EL NOMBRE DE LA PERSONA ["<<i+1<<"]: ";	cin.getline(prs[i].nombre,100,'\n');
		cout<<"�LA PERSONA ES DISCAPACITADA? [1/0]: ";		cin>>prs[i].discapacitado;
		//COMPROBANDO LOS ARREGLOS DE PERSONAS
		if(prs[i].discapacitado == 1){
			//SI TIENE ALGUNA DISCAPACIDAD
			strcpy(personasConDiscapacidad[j].nombre,prs[i].nombre);
			j++;
		}
		if(prs[i].discapacitado == 0){
			//NO TIENE ALGUNA DISCAPACIDAD
			strcpy(personasSinDiscapacidad[k].nombre,prs[i].nombre);
			k++;
		}
		cout<<endl;
	}
	system("cls");
	cout<<"PERSONAS CON DISCAPACIDAD"<<endl<<endl;
	for(int i=0; i<j; i++){
		cout<<"NOMBRE: "<<personasConDiscapacidad[i].nombre<<endl;
	}
	cout<<endl;
	cout<<"PERSONAS SIN DISCAPACIDAD"<<endl<<endl;
	for(int i=0; i<k; i++){
		cout<<"NOMBRE: "<<personasSinDiscapacidad[i].nombre<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
