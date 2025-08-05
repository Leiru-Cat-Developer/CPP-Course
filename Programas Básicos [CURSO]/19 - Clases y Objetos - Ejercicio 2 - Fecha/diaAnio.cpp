#include<iostream>
#include "diaAnio.h"

using namespace std;

//COMPROBAMOS LA IFUALDAD EN LAS FECHAS
bool DiaAnio::igual(DiaAnio& d){
	if(dia==d.dia && mes==d.mes){
		return true;
	}else{
		return false;
	}
}

void DiaAnio::visualizar(){
	cout<<"----- MOSTRANDO LOS DATOS -----"<<endl<<endl;
	cout<<"DIA: "<<dia<<"  ///  MES: "<<mes<<endl<<endl;
}
