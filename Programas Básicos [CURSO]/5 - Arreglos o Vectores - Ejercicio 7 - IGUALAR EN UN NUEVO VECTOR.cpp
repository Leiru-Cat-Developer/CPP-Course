/*
	REALIZA UN PROGRAMA QUE DEFINA DOS VECTORES DE CARACTERES Y DESPUÉS ALAMACENE
	EL CONTENIDO DE AMBOS VECTORES, SITUANDO EN PRIMER LUGAR LOS ELEMENTOS DEL
	PRIMER VECTOR SEGUIDO POR LOS ELEMENTOS DEL SEGUNDO VECTOR. MUESTRE EL
	CONTENIDO DEL NUEVO VECTOR EN LA SALIDA ESTÁNDAR
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	char vector1[] = {'a','e','i'};
	char vector2[] = {'o','u'};
	char vector3[5];
	int variable = 3;
	for(int i=0; i<3; i++){
		vector3[i] = vector1[i];
	}
	for(int i=0; i<2; i++){
		vector3[variable] = vector2[i];
		variable++;
	}
	for(int i=0; i<5; i++){
		cout<<"POCISION ["<<i<<"]: "<<vector3[i]<<endl<<endl;
	}
	system("pause");
	return 0;
}
