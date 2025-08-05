/*
	ESCRIBA UN PROGRAMA QUE LEA LA NOTA FINAL DE CUATRO ALUMNOS Y CALCULE LA
	NOTA FINAL MEDIA DE LOS CUATRO ALUMNOS
*/
#include<iostream>
using namespace std;
int main(){
	float notaAlumno1 = 0, notaAlumno2 = 0, notaAlumno3 = 0, notaAlumno4 = 0;
	float notaFinalMedia = 0;
	cout<<"DIGITE LA NOTA FINAL DEL ALUMNO 1: ";	cin>>notaAlumno1;
	cout<<"DIGITE LA NOTA FINAL DEL ALUMNO 2: ";	cin>>notaAlumno2;
	cout<<"DIGITE LA NOTA FINAL DEL ALUMNO 3: ";	cin>>notaAlumno3;
	cout<<"DIGITE LA NOTA FINAL DEL ALUMNO 4: ";	cin>>notaAlumno4;
	cout<<"--------------------------------------------------"<<endl;
	notaFinalMedia = (notaAlumno1+notaAlumno2+notaAlumno3+notaAlumno4)/4;
	cout.precision(2);
	cout<<"LA NOTA FINAL MEDIA DE LOS ALUMNOS ES: "<<notaFinalMedia;
	return 0;
}
