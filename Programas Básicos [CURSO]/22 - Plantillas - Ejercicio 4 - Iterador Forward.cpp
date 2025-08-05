#include<iostream>
#include<fstream>	//PARA ARCHIVOS
#include<iterator>	//PARA STREAM_ITERATORS
#include<vector>
using namespace std;

int main(){
	ifstream archivo;
	
	archivo.open("forwardPrueba.txt",ios::in);
	
	if(archivo.fail()){
		cout<<"NO SE PUDO ABRIR EL ARCHIVO";
		exit(1);
	}
	
	istream_iterator<char> p(archivo);	//ITERADOR PARA CHAR
	vector<char> frase;
	
	//MIENTRAS NO SEA EL FINAL DEL ARCHIVO ALMACENAMOS EL CARACTER POR EL QUE VAMOS
	while(!archivo.eof()){
		frase.push_back(*p);
		p++;
	}
	
	//MOSTRAMOS EL VECTOR FRASE
	for(int i=0; i<frase.size(); i++){
		cout<<frase[i];
	}
	cout<<endl;
	
	archivo.close();
	
	return 0;
}
