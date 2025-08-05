/*
	ESCRIBA UN PROGRAMA QUE TOME CADA 4 HORAS LA TEMPERATURA EXTERIOR, LEYENDOLA
	DURANTE UN PERIODO DE 24 HORAS. ES DECIR, DEBE LEER 6 TEMPERATURAS. CALCULE
	LA TEMPERATURA MEDIA DEL DIA, LA TEMPERATURA MAS ALTA Y LA TEMPERATURA MAS
	BAJA
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	float temperatura = 0, temperaturaBaja = 9999, temperaturaAlta = 0, temperaturaMedia = 0;
	for(int i=0; i<6; i++){
		cout<<"DIGITE LA TEMPERATURA "<<i+1<<" : ";	cin>>temperatura;
		if(temperatura < temperaturaBaja){
			temperaturaBaja = temperatura;
		}else if(temperatura > temperaturaAlta){
			temperaturaAlta = temperatura;
		}
		temperaturaMedia += temperatura;
	}
	cout<<"--------------------------------"<<endl;
	cout<<"LA TEMPERATURA MEDIA ES: "<<(temperaturaMedia/6)<<endl;
	cout<<"LA TEMPERATURA MAS BAJA ES: "<<temperaturaBaja<<endl;
	cout<<"LA TEMPERATURA MAS ALTA ES: "<<temperaturaAlta;
	getch();
	return 0;
}
