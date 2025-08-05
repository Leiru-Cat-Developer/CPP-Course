//CONTENEDORES ASOCIATIVOS MAP Y MULTIMAP
#include<iostream>
#include<iterator>
#include<map>
using namespace std;

typedef pair<int,string> par;	//ESTRUCTURA PARA LLAMARLA

int main(){
	multimap<int,string> valores;	//CREAMOS UN MAPA <CLAVE , VALOR>
	
	//INSERTAR ELEMENTOS EN EL MAP DE FORMA NORMAL
	valores.insert(pair<int,string>(5,"URIEL"));
	valores.insert(pair<int,string>(10,"ALEJANDRO"));
	valores.insert(pair<int,string>(2,"FATIMA"));
	valores.insert(pair<int,string>(25,"JOEL"));
	valores.insert(pair<int,string>(30,"ALBERTO"));
	valores.insert(pair<int,string>(55,"GUILLERMO"));
	
	//INSERTAR ELEMENTO CON NUESTRA ESTRUCTURA
	valores.insert(par(10,"ASUCENA"));
	valores.insert(par(30,"JOANA"));
	
	//MOSTRAMOS EL MAP EN PANTALLA
	map<int,string>::iterator i;
	for(i=valores.begin(); i!=valores.end(); i++){
		//RECORRIENDO CON EL BUCLE FOR
		cout<<"CLAVE: "<<i->first<<" | VALOR: "<<i->second<<endl;
	}
	cout<<endl;
	
	cout<<"AGREGANDO UN DATO DUPLICADO"<<endl<<endl;
	//AGREGAMOS UN DUPLICADO [LO IGNORA]
	valores.insert(par(2,"JUAN"));
	for(i=valores.begin(); i!=valores.end(); i++){
		//RECORRIENDO CON EL BUCLE FOR
		cout<<"CLAVE: "<<i->first<<" | VALOR: "<<i->second<<endl;
	}
	cout<<endl;
	
	//CONTEO DE LAS CLAVES
	int clave = 30;
	cout<<"CONTEO DE LA CLAVE "<<clave<<": "<<valores.count(clave)<<endl<<endl;
	cout<<"VALORES QUE TIENEN DICHA CLAVE"<<endl<<endl;
	for(i=valores.lower_bound(clave); i!=valores.upper_bound(clave); i++){
		cout<<i->second<<"  |  ";
	}
	
	return 0;
}
