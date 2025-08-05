/*	
	DADO UN NUMERO NATURAL N, OBTENER LA SUMA DE LOS DIGITOS DE QUE CONSTA
	HACER SOLUCION RECURSIVA E ITERATIVA
*/
#include<iostream>
using namespace std;

//PROTOTIPOS DE FUNCIONES
int sumaRecursiva(int);
int sumaIterativa(int);

int main(){
	int numero = 0;
	cout<<"DIGITE UN NUMERO: ";	cin>>numero;	cout<<endl;
	
	cout<<"\t .:SOLUCION RECURSIVA:."<<endl<<endl;
	cout<<sumaRecursiva(numero)<<endl<<endl;
	
	cout<<"\t .:SOLUCION ITERATIVA:."<<endl<<endl;
	cout<<sumaIterativa(numero)<<endl<<endl;
	return 0;
}

//DEFINICION DE FUNCIONES
int sumaRecursiva(int n){
	if(n <= 9){		//CASO BASE
		return n;
	}else{			//CASO RECURSIVO
		return sumaRecursiva(n/10) + n%10;
	}
}

int sumaIterativa(int n){
	int suma = 0;
	while(n > 9){
		suma += n%10;
		n /= 10;
	}
	return (suma+n);
}
