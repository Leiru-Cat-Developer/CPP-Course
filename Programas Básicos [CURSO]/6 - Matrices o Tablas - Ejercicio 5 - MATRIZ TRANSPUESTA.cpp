/*
	REALICE UN PROGRAMA QUE LEA UNA MATRIZ DE 3 X 3 Y CREE SU MATRIZ
	TRANSPUESTA. LA MATRIZ TRANSPUESTA ES AQUELLA EN LA QUE LA COLUMNA
	"i" ERA LA FILA "j" DE LA MATRIZ ORIGINAL
	
	1 2 3		1 4 7
	4 5 6	=	2 5 8
	7 8 9		3 6 9
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "Spanish");
	int matrizOriginal[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matrizTranspuesta[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"DIGITE POCISIÓN ["<<i<<"] ["<<j<<"]: ";	cin>>matrizOriginal[i][j];
		}
	}
	cout<<endl;
	cout<<"-------MATRIZ TRANSPUESTA-------"<<endl<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matrizTranspuesta[j][i] = matrizOriginal[i][j];
			/*
				[0][0] = [0][0]	->	0 = 1 
				[1][0] = [0][1]	->	0 = 2
				[2][0] = [0][2]	->	0 = 3
			*/
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<matrizTranspuesta[i][j]<<"   ";
		}
		cout<<endl;
	}
	cout<<endl;
	system("pause");
	return 0;
}
