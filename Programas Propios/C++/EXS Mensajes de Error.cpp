#include <windows.h>
#include<iostream>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<time.h>
using namespace std;

int Numero_Aleatorio = 0;

void Menu_Principal();
void Mensajes_Errores();
void Terminar_Programa();
void gotoxy(int,int);

int main(){
	setlocale(LC_CTYPE, "Spanish");
	Menu_Principal();
	return 0;
}

void Menu_Principal(){
	int Opcion_Principal = 0;
	
	while((Opcion_Principal <= 0)||(Opcion_Principal > 3)){
		gotoxy(30,2);	cout<<"MENU PRUEBA";
		gotoxy(25,4);	cout<<"1. Opcion Uno";
		gotoxy(25,5);	cout<<"2. Opcion Dos";
		gotoxy(25,6);	cout<<"3. Salir";
		gotoxy(20,8);	cout<<"Digite su opción: ";	cin>>Opcion_Principal;
		
		if((Opcion_Principal <= 0)||(Opcion_Principal > 3)){
			Mensajes_Errores();
			system("cls");
		}
		
	}
	
	switch(Opcion_Principal){
		
		case 1:	gotoxy(20,10);	cout<<"Bien hecho, adiós . . .";
				gotoxy(10,12);	system("pause");
			break;
			
		case 2:	gotoxy(20,10);	cout<<"Bien hecho, adiós . . .";
				gotoxy(10,12);	system("pause");
			break;
			
		case 3:	Terminar_Programa();
			break;
			
	}
	
}

void Mensajes_Errores(){
	srand(time(NULL));
	Numero_Aleatorio = 1 + rand()%6;
	
	switch(Numero_Aleatorio){
		
		case 1:	gotoxy(15,10);	cout<<"DEJAME ADIVINAR . . . ADMINITRACION ¿CIERTO?";
				gotoxy(20,12);	system("pause");
			break;
			
		case 2:	gotoxy(15,10);	cout<<"¿COMO ES QUE NO TE PIERDES DE CAMINO A CASA? . . . ASH";
				gotoxy(20,12);	system("pause");
			break;
			
		case 3:	gotoxy(15,10);	cout<<"¿COMO TE DIGO? . . . INTENTALO DE NUEVO";
				gotoxy(20,12);	system("pause");
			break;
			
		case 4:	gotoxy(15,10);	cout<<"¿ES BROMA, CIERTO? . . . ESPERO QUE SI";
				gotoxy(20,12);	system("pause");
			break;
			
		case 5:	gotoxy(15,10);	cout<<"CREO QUE ME ESTAS HACIENDO PERDER EL TIEMPO A PROPOSITO . . .";
				gotoxy(20,12);	system("pause");
			break;
			
		case 6:	gotoxy(15,10);	cout<<"BUENO CREO QUE NO TE HAS DADO CUENTA QUE ESA OPCION NO EXISTE . . .";
				gotoxy(20,12);	system("pause");
			break;
			
	}
	
}

void Terminar_Programa(){
	system("cls");
	
	gotoxy(30,2);	cout<<"BUENO . . . GRACIAS POR DESECHARME :) . . .";
	gotoxy(25,4);	system("pause");
}

void gotoxy(int x,int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
