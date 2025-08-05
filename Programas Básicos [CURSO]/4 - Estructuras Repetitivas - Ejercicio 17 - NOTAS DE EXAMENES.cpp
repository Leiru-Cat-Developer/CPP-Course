/*
	EN UNA CLASE DE 5 ALUMNOS SE HAN REALIZADO TRES EXÁMENES Y SE REQUIERE DETERMINAR
	EL NÚMERO DE:
		A) ALUMNOS QUE APROBARON TODOS LOS EXÁMENES
		B) ALUMNOS QUE REPROBARON AL MENOS UN EXAMEN
		C) ALUMNOS QUE APROBARON ÚNICAMENTE EL ÚLTIMO EXAMEN
	REALICE UN PROGRAMA QUE PERMITA LA LECTURA DE LOS DATOS Y EL CÁLCULO DE LAS
	ESTADÍSTICAS.
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	float examen1 = 0, examen2 = 0, examen3 = 0;
	int aprobaronTodosLosExamenes = 0;
	int aprobaronAlMenosUno = 0;
	int aprobaronUnicamenteElUltimo = 0;
	for(int i=1; i<=5; i++){
		cout<<"DIGITE LA NOTA DEL PRIMER EXAMEN DEL ALUMNO ["<<i<<"]: ";		cin>>examen1;
		cout<<"DIGITE LA NOTA DEL SEGUNDO EXAMEN DEL ALUMNO ["<<i<<"]: ";	cin>>examen2;
		cout<<"DIGITE LA NOTA DEL TERCER EXAMEN DEL ALUMNO ["<<i<<"]: ";		cin>>examen3;
		cout<<endl;
		if((examen1>=6)&&(examen2>=6)&&(examen3>=6)){
			//APROBARON LOS 3 EXAMENES
			aprobaronTodosLosExamenes++;
		}else if((examen1>=6)||(examen2>=6)||(examen3>=6)){
			//REPROBARON AL MENOS UN EXAMEN
			aprobaronAlMenosUno++;
		}else if((examen1<6)&&(examen2<6)&&(examen3>=6)){
			//REPROBARON ÚNICAMENTE EL ÚLTIMO EXAMEN
			aprobaronUnicamenteElUltimo++;
		}
	}
	cout<<endl;
	cout<<"--------------------------------"<<endl<<endl;
	cout<<"ALUMNOS QUE APROBARON TODOS LOS EXAMENES: "<<aprobaronTodosLosExamenes<<endl;
	cout<<"ALUMNOS QUE APROBARON AL MENOS UN EXAMEN: "<<aprobaronTodosLosExamenes<<endl;
	cout<<"ALUMNOS QUE APROBARON UNICAMENTE EL ULTIMO EXAMEN: "<<aprobaronTodosLosExamenes<<endl<<endl;
	system("pause");
	return 0;
}
