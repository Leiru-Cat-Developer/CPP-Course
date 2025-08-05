//ALGORITMOS STL
#include<iostream>
#include<fstream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<numeric>		//PARA UTILIZAR FUNCION ACCUMULATE
using namespace std;

template <class T>
bool determinarPositivo(T valor){
	return (valor>=0);
}

int main(){
	vector<float> numeros;
	
	//ABRIMOS EL ARCHIVO EN MODO LECTURA
	ifstream archivo("stlPrueba.txt",ios::in);
	
	//COPIAMOS TODOS LOS ELEMENTOS DEL ARCHIVO HACIA EL VECTOR
	copy(istream_iterator<float>(archivo),istream_iterator<float>(),back_inserter(numeros));
	
	//CALCULAMOS EL MAXIMO Y MINIMO DE LOS ELEMENTOS DEL VECTOR
	cout<<"MAXIMO: "<<*max_element(numeros.begin(),numeros.end())<<endl<<endl;
	cout<<"MINIMO: "<<*min_element(numeros.begin(),numeros.end());
	
	//CALCULAMOS EL VALOR PROMEDIO
	cout<<endl<<endl<<"VALOR PROMEDIO: "<<accumulate(numeros.begin(),numeros.end(),0.0)/numeros.size();
	
	//CALCULAR EL CONTEO DE LOS NUMEROS POSITIVOS
	cout<<endl<<endl<<"CANTIDAD DE NUMEROS POSITIVOS: "<<count_if(numeros.begin(),numeros.end(),determinarPositivo<float>);
	
	archivo.close();
	return 0;
}
