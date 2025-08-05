/*
	REALICE UN PROGRAMA QUE CALCULE Y MUESTRE EN LA SALIDA ESTANDAR LA SUMA DE LOS
	CUADRADOS DE LOS PRIMEROS 10 NUMEROS ENTEROS MAYORES QUE CERO
*/
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
	int sumaDeCuadrados = 0;
	for(int i=1; i<=10; i++){
		sumaDeCuadrados += pow(i,2);
	}
	cout<<"LA SUMA DE LOS CUADRADOS [1-10] ES: "<<sumaDeCuadrados;
	getch();
	return 0;
}
