/*
	LA CALIFICACION FINAL DE UN ESTUDIANTE ES EL PROMEDIO DE TRES NOTAS
		- LA NOTA DE PRACTICAS 30%
		- LA NOTA TEORICA 60%
		- LA NOTA DE PARTICIPACION QUE CUENTA CON 10%
	ESCRIBA UN PROGRAMA QUE LEA LAS TRES NOTAS DEL ALUMNO Y ESCRIBA SU
	NOTA FINAL
*/
#include<iostream>
using namespace std;
int main(){
	float notaPracticas = 0, notaTeorica = 0, notaParticipacion = 0, promedio = 0;
	cout<<"DIGITE LA NOTA DE PRACTICAS DEL ALUMNO: ";		cin>>notaPracticas;
	cout<<"DIGITE LA NOTA DE TEORIA DEL ALUMNO: ";		cin>>notaTeorica;
	cout<<"DIGITE LA NOTA DE PARTICIPACION DEL ALUMNO: ";	cin>>notaParticipacion;
	cout<<"--------------------------------------------------"<<endl;
	notaPracticas*=0.30;
	notaTeorica*=0.60;
	notaParticipacion*=0.10;
	promedio = notaPracticas+notaTeorica+notaParticipacion;
	cout<<"LA CALIFICACION FINAL DEL ALUMNO ES: "<<promedio;
	return 0;
}
