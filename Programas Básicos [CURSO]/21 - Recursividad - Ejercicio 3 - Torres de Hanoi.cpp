//TORRES DE HANOI

#include<iostream>
using namespace std;

//PLANTILLAS DE FUNCIONES
void hanoi(char,char,char,int);

int main(){
	int n = 0;
	cout<<"DIGITE LA CANTIDAD DE DISCOS: ";	cin>>n;	cout<<endl;
	
	//LLAMADA DE FUNCION
	hanoi('A','B','C',n);
	
	return 0;
}

//DEFINICION DE FUNCIONES
void hanoi(char varillaInicial, char varillaCentral, char varillaFinal, int n){
	if(n == 1){
		cout<<"MOVER DISCO\t"<<n<<"\tDESDE VARILLA\t"<<varillaInicial<<"\tA VARILLA\t"<<varillaFinal<<endl<<endl;
	}else{
		//CASO RECURSIVO
		hanoi(varillaInicial,varillaFinal,varillaCentral,n-1);
		cout<<"MOVER DISCO\t"<<n<<"\tDESDE VARILLA\t"<<varillaInicial<<"\tA VARILLA\t"<<varillaFinal<<endl<<endl;
		hanoi(varillaCentral,varillaInicial,varillaFinal,n-1);
	}	
}
