//CONTENEDORES ASOCIATIVOS
#include<iostream>
#include<iterator>
#include<algorithm>
#include<set>		//PARA SET Y MULTISET
using namespace std;

int main(){
	multiset<int> valores;
	
	valores.insert(10);
	valores.insert(2);
	valores.insert(4);
	valores.insert(1);
	valores.insert(150);
	valores.insert(89);
	valores.insert(1);
	valores.insert(1);
	valores.insert(1);
	
	//MOSTRAMOS EN PANTALLA
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"  |  "));
	cout<<endl;
	
	valores.insert(150);
	valores.insert(89);
	
	//MOSTRAMOS EN PANTALLA
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"  |  "));
	cout<<endl;
	
	//BUSCAR UN ELEMENTO EN EL MULTISET
	multiset<int>::iterator i = valores.find(89);
	
	if(i != valores.end()){
		cout<<"EL ELEMENTO HA SIDO ENCONTRADO"<<endl;
	}else{
		cout<<"EL ELEMENTO NO HA SIDO ENCONTRADO"<<endl;
	}
	
	//CONTAR CUANTAS VECES APARECE UN NUMERO
	cout<<"EL NUMERO 89 APARECE "<<valores.count(89)<<" VECES"<<endl;
	
	//ELIMINAMOS UN ELEMENTO (ELIMINA TODAS LAS COINCIDENCIAS)
	valores.erase(1);
	
	copy(valores.begin(),valores.end(),ostream_iterator<int> (cout,"  |  "));
	cout<<endl;
	
	return 0;
}
