/*
	ESCRIBE UN PROGRAMA QUE CALCULE X^Y, DONDE X TANTO Y, SEAN ENTEROS POSITIVOS
	SIN UTILIZAR LA FUNCION POW
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int x = 0, y = 0, elevacion = 1;
	cout<<"DIGITE EL VALOR DE 'X' y 'Y': ";	cin>>x>>y;
	for(int i=1; i<=y; i++){
		elevacion *= x;
	}
	cout<<"--------------------------------"<<endl;
	cout<<"EL RESULTADO ES: "<<elevacion;
	getch();
	return 0;
}
