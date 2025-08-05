/*
	CREAR UN PROGRAMA PARA SIMULAR UN EQUIPO DE FUTBOL (FUTBOLISTA, ENTRENADOR Y DOCTOR)
	PARA LO CUAL TENDREMOS LO SIGUIENTE:
	
		- UNA CLASE PERSONA, QUE TENDRA LOS SIGUIENTES DATOS: NOMBRE, APELLIDO, EDAD
		- LA CLASE DERIVADA FUTBOLISTA TENDRA LOS SIGUIENTES DATOS: DORSAL Y POCISION
		- LA CLASE DERIVADA ENTRENADOR TENDRA DE DATO LA ESTRATEGIA QUE UTILIZA
		- LA CLASE DERIVADA MEDICO, LA TITULACION Y LOS ANIOS DE EXPERIENCIA
	
	A) VIAJE EN EQUIPO
	B) ENTRENAMIENTO
	C) PARTIDO DE FUTBOL
	D) PLANIFICAR EL ENTRENAMIENTO
	E) ENTREVISTA
	F) CURAR LESION
*/
#include<iostream>
#include<string.h>
#include "Persona.h"
#include "Futbolista.h"
#include "Entrenador.h"
#include "Medico.h"
using namespace std;

//PROTOTIPO DE FUNCIONES
void menu();
void viajarEquipo();
void entrenarEquipo();
void partidoEquipo();
void planificarEntrenamientoEquipo();
void entrevistaEquipo();
void curarEquipo();

//ARREGLO DE OBJETOS GLOBAL
Persona* equipo[4];

int main(int argc, char** argv) {
	equipo[0] = new Futbolista("GONZALO","HIGUAIN",30,9,"DELANTERO");
	equipo[1] = new Futbolista("PAULO","DYBALA",24,10,"DELANTERO");
	equipo[2] = new Entrenador("MASSIMILIANO","ALLEGRI",50,"DEFENSIVA");
	equipo[3] = new Medico("ALEX","MARRONI",59,"FISIOTERAPEUTA",20);
	
	//MENU
	menu();
	
	return 0;
}

//DEFINICION DE LAS FUNCIONES
void menu(){
	int opcion = 0;
	while(opcion != 7){
		cout<<"\t...MENU..."<<endl<<endl;
		cout<<"1. VIAJE EN EQUIPO"<<endl;
		cout<<"2. ENTRENAMIENTO"<<endl;
		cout<<"3. PARTIDO DE FUTBOL"<<endl;
		cout<<"4. PLANIFICAR EL ENTRENAMIENTO"<<endl;
		cout<<"5. ENTREVISTA"<<endl;
		cout<<"6. CURAR LESION"<<endl;
		cout<<"7. SALIR"<<endl<<endl;
		cout<<"OPCION: ";	cin>>opcion;	cout<<endl;
		
		switch(opcion){
			case 1:		//VIAJE EN EQUIPO
						viajarEquipo();
				break;
			case 2:		//ENTRENAMIENTO
						entrenarEquipo();
				break;
			case 3:		//PARTIDO DE FUTBOL
						partidoEquipo();
				break;
			case 4:		//PLANIFICAR EL ENTRENAMIENTO
						planificarEntrenamientoEquipo();
				break;
			case 5:		// ENTREVISTA
						entrevistaEquipo();
				break;
			case 6:		//CURAR LESION
						curarEquipo();
				break;
			case 7:		cout<<"SALIENDO . . ."<<endl;
				break;
			default:	cout<<"DIGITE UNA OPCION VALIDA . . ."<<endl;
				break;
		}
		cout<<endl;
		system("pause");
		system("cls");
		fflush(stdin);		//LIMPIEZA DE BUFFER
	}
}

void viajarEquipo(){
	for(int i=0; i<4; i++){
		cout<<equipo[i]->getNombrePersona()<<" "<<equipo[i]->getApellidoPersona()<<" -> ";
		equipo[i]->viajar();
	}
}

void entrenarEquipo(){
	for(int i=0; i<4; i++){
		cout<<equipo[i]->getNombrePersona()<<" "<<equipo[i]->getApellidoPersona()<<" -> ";
		equipo[i]->entrenamiento();
	}
}

void partidoEquipo(){
	for(int i=0; i<4; i++){
		cout<<equipo[i]->getNombrePersona()<<" "<<equipo[i]->getApellidoPersona()<<" -> ";
		equipo[i]->partidoFutbol();
	}
}

void planificarEntrenamientoEquipo(){
	cout<<equipo[2]->getNombrePersona()<<" "<<equipo[2]->getApellidoPersona()<<" -> ";
	//DOWNCASTING
	((Entrenador *)equipo[2])->planificarEntrenamiento();
}

void entrevistaEquipo(){
	cout<<equipo[0]->getNombrePersona()<<" "<<equipo[0]->getApellidoPersona()<<" -> ";
	//DOWNCASTING
	((Futbolista *)equipo[0])->entrevista();
	
	cout<<equipo[1]->getNombrePersona()<<" "<<equipo[1]->getApellidoPersona()<<" -> ";
	//DOWNCASTING
	((Futbolista *)equipo[1])->entrevista();
}

void curarEquipo(){
	cout<<equipo[3]->getNombrePersona()<<" "<<equipo[3]->getApellidoPersona()<<" -> ";
	//DOWNCASTING
	((Medico *)equipo[3])->curarLesion();
}
