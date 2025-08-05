/*
	CONSIDERE LA SIGUIENTE RELACION DE HERENCIA, LA CUAL INVOLUCRA
	TRES CLASES:
	
		- ALUMNO
		- DEPORTISTA
		- BECADO DEPORTE
		
	ESTA ULTIMA REPRESENTA A AQUELLOS ALUMNOS QUE SON DEPORTISTAS
	Y QUE POR ESA RAZON HAN RECIBIDO UNA BECA ESPECIAL DEL GOBIERNO
	PARA PREMIAR SUS ESFUERZOS. DECIDA QUE ATRIBUTOS Y METODOS
	INCLUIR DE TAL MANERA QUE SU PROGRAMA PUEDA:
	
		- DECLARAR DOS OBJETOS LLAMADOS "ALUMNO JUAN" Y "ALUMNO PEDRO"
		  DE TIPO ALUMNO
		
		- DECLARAR UN OBJETO LLAMADO "DEPOR LUIS" DE TIPO DEPORTISTA
		
		- DECLARAR DOS OBJETOS "BD ANA" Y "BD CARMEN" DE TIPO BECADO DEPORTE
		
		- IMPRIMIR LOS DATOS DE TODOS LOS OBJETOS DECLARADOS
		
		- ACTUALIZAR EL NOMBRE DE LA CARRERA QUE ESTAN ESTUDIANDO
		  "ALUMNO JUAN" Y "BD ANA". EL DATO DADO POR EL USUARIO SERA
		  EL NOMBRE DE LA NUEVA CARRERA
		  
		- ACTUALIZAR EL NOMBRE DEL ENTRENADO "DEPOR LUIS" Y "BD CARMEN".
		  EL DATO DADO POR EL USUARIO SERA EL NOMBRE DEL NUEVO ENTRENADOR
		  	
		- ACTUALIZAR EL MONTO DE BECA DE "BD ANA" Y "BD CARMEN". EL DATO DADO
		  POR EL USUARIO SERA EL PORCENTAJE DE INCREMENTO DE LA BECA ACTUAL
*/
#include<iostream>
#include<string.h>
#include "Alumno.h"
#include "Deportista.h"
#include "BecadoDeporte.h"
using namespace std;

int main(int argc, char** argv) {
	Alumno* alumnoJuan = new Alumno("MERCADOTECNIA");
	Alumno* alumnoPedro = new Alumno("INFORMATICA");
	Deportista* deporLuis = new Deportista("URIEL");
	BecadoDeporte* bdAna = new BecadoDeporte("ADMINISTRACION","JONATHAN",1200);
	BecadoDeporte* bdCarmen = new BecadoDeporte("CONTABILIDAD","MANUEL",2500);
	
	cout<<"///// MOSTRANDO DATOS /////"<<endl<<endl;
	
	cout<<"***** DATOS DE JUAN *****"<<endl<<endl;
	alumnoJuan->mostrarDatos();
	
	cout<<endl<<endl<<"***** DATOS DE PEDRO *****"<<endl<<endl;
	alumnoPedro->mostrarDatos();
	
	cout<<endl<<endl<<"***** DATOS DE LUIS *****"<<endl<<endl;
	deporLuis->mostrarDatos();
	
	cout<<endl<<endl<<"***** DATOS DE ANA *****"<<endl<<endl;
	bdAna->mostrarDatos();
	
	cout<<endl<<endl<<"***** DATOS DE CARMEN *****"<<endl<<endl;
	bdCarmen->mostrarDatos();
	
	cout<<endl;
	
	
	
	string nuevaCarrera;
	
	cout<<"DIGITE LA NUEVA CARRERA DE ALUMNO JUAN: ";	getline(cin,nuevaCarrera);
	alumnoJuan->setNombreCarrera(nuevaCarrera);
	
	fflush(stdin);
	
	cout<<"DIGITE LA NUEVA CARRERA DE DEPORTE ANA: ";	getline(cin,nuevaCarrera);
	bdAna->setNombreCarrera(nuevaCarrera);
	
	cout<<endl;		system("pause");	system("cls");
	
	cout<<"///// MOSTRANDO DATOS /////"<<endl<<endl;
	
	cout<<"***** NUEVA CARRERA DE JUAN *****"<<endl<<endl;
	cout<<alumnoJuan->getNombreCarrera();
	
	cout<<endl<<endl<<"***** NUEVA CARRERA DE ANA *****"<<endl<<endl;
	cout<<bdAna->getNombreCarrera();
	
	cout<<endl<<endl;
	
	
	
	string nuevoEntrenador;
	
	cout<<"DIGITE EL NOMBRE DEL NUEVO ENTRENADOR DE DEPOR LUIS: ";	getline(cin,nuevoEntrenador);
	deporLuis->setNombreEntrenador(nuevoEntrenador);
	
	fflush(stdin);
	
	cout<<"DIGITE EL NOMBRE DEL NUEVO ENTRENADOR DE CARMEN: ";	getline(cin,nuevoEntrenador);
	bdCarmen->setNombreEntrenador(nuevoEntrenador);
	
	cout<<endl;		system("pause");	system("cls");
	
	cout<<"///// MOSTRANDO DATOS /////"<<endl<<endl;
	
	cout<<"***** NUEVO ENTRENADOR DE LUIS *****"<<endl<<endl;
	cout<<deporLuis->getNombreEntrenador();
	
	cout<<endl<<endl<<"***** NUEVO ENTRENADOR DE CARMEN *****"<<endl<<endl;
	cout<<bdCarmen->getNombreEntrenador();
	
	cout<<endl<<endl;
	
	
	
	float nuevoMonto;
	
	cout<<"DIGITE EL NUEVO MONTO DE ANA: ";	cin>>nuevoMonto;
	bdAna->setMontoBeca(nuevoMonto);
	
	cout<<"DIGITE EL NUEVO MONTO DE CARMEN: ";	cin>>nuevoMonto;
	bdCarmen->setMontoBeca(nuevoMonto);
	
	cout<<endl;		system("pause");	system("cls");
	
	cout<<"///// MOSTRANDO DATOS /////"<<endl<<endl;
	
	cout<<"***** NUEVO MONTO DE ANA *****"<<endl<<endl;
	cout<<"$"<<bdAna->getMontoBeca();
	
	cout<<endl<<endl<<"***** NUEVO MONTO DE CARMEN *****"<<endl<<endl;
	cout<<"$"<<bdCarmen->getMontoBeca();
	
	delete alumnoJuan;
	delete alumnoPedro;
	delete deporLuis;
	delete bdAna;
	delete bdCarmen;
	return 0;
}
