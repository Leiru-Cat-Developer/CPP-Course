#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<char> letras;
	
	letras.push_front('Y');	//AGREGAMOS UN ELEMENTO POR EL PRINCIPIO
	letras.push_front('R');
	letras.push_front('R');
	letras.push_front('U');
	letras.push_front('F');
	
	letras.push_back('G');	//AGREGAMOS UN ELEMENTO POR EL FINAL
	letras.push_back('B');
	letras.push_back('Y');
	
	//MOSTRAMOS LOS ELEMENTOS DEL DEQUE
	for(int i=0; i<letras.size(); i++){
		cout<<letras[i]<<" | ";
	}
	
	cout<<endl<<endl;
	
	letras.pop_front();	//ELIMINA UN ELEMENTO DEL PRINCIPIO
	letras.pop_back();	//ELIMINA UN ELEMENTO DEL FINAL
	
	for(int i=0; i<letras.size(); i++){
		cout<<letras[i]<<" | ";
	}
	
	cout<<endl<<endl;
	
	return 0;
}
