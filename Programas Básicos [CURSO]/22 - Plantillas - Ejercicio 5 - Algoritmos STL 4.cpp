//ALGORITMOS STL
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

void convertirMayusculas(char &letra){
	if(letra>='a' && letra<='z'){
		letra = letra - ('a' - 'A');
	}
}

char vocales(char letra){
	return (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U') ? letra : '-';
}

int main(){
	vector<char> letras;
	
	//GENERAMOS LETRAS PARA EL VECTOR
	for(int i=0; i<10; i++){
		letras.push_back('a' + i);
	}
	
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"  |  "));
	cout<<endl;
	
	//DESORDENAMOS EL VECTOR LETRAS
	cout<<"\tDESORDENANDO . . .\n\n";
	random_shuffle(letras.begin(),letras.end());
	
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"  |  "));
	cout<<endl;
	
	//PASAMOS A MAYUSCULAS LAS LETRAS
	cout<<"\tMAYUSCULAS . . .\n\n";
	for_each(letras.begin(),letras.end(),convertirMayusculas);
	
	copy(letras.begin(),letras.end(),ostream_iterator<char> (cout,"  |  "));
	cout<<endl;
	
	//IMPRIMIMOS SOLO LAS VOCALES
	cout<<"\tVOCALES . . .\n\n";
	transform(letras.begin(),letras.end(),ostream_iterator<char> (cout,"  |  "),vocales);
	
	return 0;
}
