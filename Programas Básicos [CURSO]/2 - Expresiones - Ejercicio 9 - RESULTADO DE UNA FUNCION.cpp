/*
	REALICE UN PROGRAMA QUE CALCULE EL VALOR QUE TOMA LA SIGUIENTE FUNCION,
	PARA LOS VALORES DADOS DE "X" Y "Y"
		- F(X,Y) = ((SQRT(X))/((POW(Y,2))-1))
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
	float valorX = 0, valorY = 0, resultadoFuncion = 0;
	cout<<"DIGITE EL VALOR DE X: ";	cin>>valorX;
	cout<<"DIGITE EL VALOR DE Y: ";	cin>>valorY;
	cout<<"--------------------------------------------------"<<endl;
	resultadoFuncion = ((sqrt(valorX))/((pow(valorY,2))-1));
	cout<<"EL RESULTADO DE LA FUNCION ES: "<<resultadoFuncion;
	return 0;
}
