//CONTENEDORES ASOCIATIVOS MAP Y MULTIMAP
#include<iostream>
#include<iterator>
#include<map>
using namespace std;

typedef pair<int,string> par;	//ESTRUCTURA PARA LLAMARLA

int main(){
	map<int,string> valores;	//CREAMOS UN MAPA <CLAVE , VALOR>
	
	//INSERTAR ELEMENTOS EN EL MAP DE FORMA NORMAL
	valores.insert(pair<int,string>(5,"URIEL"));
	valores.insert(pair<int,string>(10,"ALEJANDRO"));
	valores.insert(pair<int,string>(2,"FATIMA"));
	valores.insert(pair<int,string>(25,"JOEL"));
	valores.insert(pair<int,string>(30,"ALBERTO"));
	valores.insert(pair<int,string>(55,"GUILLERMO"));
	
	//INSERTAR ELEMENTO CON NUESTRA ESTRUCTURA
	valores.insert(par(1,"ASUCENA"));
	valores.insert(par(4,"JOANA"));
	
	//MOSTRAMOS EL MAP EN PANTALLA
	map<int,string>::iterator i;
	for(i=valores.begin(); i!=valores.end(); i++){
		//RECORRIENDO CON EL BUCLE FOR
		cout<<"CLAVE: "<<i->first<<" | VALOR: "<<i->second<<endl;
	}
	cout<<endl;
	
	cout<<"AGREGANDO UN DATO DUPLICADO"<<endl<<endl;
	//AGREGAMOS UN DUPLICADO [LO IGNORA]
	valores.insert(par(4,"JUAN"));
	for(i=valores.begin(); i!=valores.end(); i++){
		//RECORRIENDO CON EL BUCLE FOR
		cout<<"CLAVE: "<<i->first<<" | VALOR: "<<i->second<<endl;
	}
	cout<<endl;
	
	cout<<"MODIFICANDO UN DATO EXISTENTE"<<endl<<endl;
	//MODIFICAR VALOR DE UNA CLAVE EXISTENTE
	valores[4] = "JUAN";
	valores[2] = "MARIA";
	for(i=valores.begin(); i!=valores.end(); i++){
		//RECORRIENDO CON EL BUCLE FOR
		cout<<"CLAVE: "<<i->first<<" | VALOR: "<<i->second<<endl;
	}
	cout<<endl;

	cout<<"BUSCANDO UN DATO"<<endl<<endl;
	//BUSCAR UN ELEMENTO EN EL MAP
	i = valores.find(2);
	if(i != valores.end()){
		cout<<"VALOR ENCONTRADO "<<i->second<<endl<<endl;
	}else{
		cout<<"EL VALOR NO SE ENCONTRO"<<endl<<endl;
	}
	
	cout<<"ELIMINANDO UN DATO"<<endl<<endl;
	//ELIMINANDO UN DATO
	valores.erase(1);
	for(i=valores.begin(); i!=valores.end(); i++){
		//RECORRIENDO CON EL BUCLE FOR
		cout<<"CLAVE: "<<i->first<<" | VALOR: "<<i->second<<endl;
	}
	cout<<endl;
	
	return 0;
}
