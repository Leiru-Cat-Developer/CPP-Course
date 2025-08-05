//CONTENEDORES ASOCIATIVOS
#include<iostream>
#include<iterator>
#include<algorithm>
#include<set>		//PARA SET Y MULTISET
using namespace std;

int main(){
	set<int> valores;	//CREANDO UN SET (CONJUNTO DE DATOS)
	
	//INSERTAMOS ELEMENTOS
	valores.insert(150);
	valores.insert(20);
	valores.insert(32);
	valores.insert(42);
	valores.insert(590);
	valores.insert(64);
	
	//MOSTRAR NUESTRO SET EN PANTALLA
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"  |  "));
	cout<<endl;
	
	valores.insert(64);		//LOS IGNORA POR QUE YA EXISTEN
	valores.insert(590);	//LOS IGNORA POR QUE YA EXISTEN
	
	//MOSTRAR NUESTRO SET EN PANTALLA
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"  |  "));
	cout<<endl;
	
	//BUSQUEDA DE UN ELEMENTO
	set<int>::iterator i = valores.find(32);
	
	if(i != valores.end()){
		cout<<"EL ELEMENTO HA SIDO ENCONTRADO"<<endl;
	}else{
		cout<<"EL ELEMENTO NO HA SIDO ENCONTRADO"<<endl;
	}
	
	//ELIMINAMOS UN ELEMENTO DEL SET (CONJUNTO)
	valores.erase(150);
	
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"  |  "));
	cout<<endl;
	
	return 0;
}
