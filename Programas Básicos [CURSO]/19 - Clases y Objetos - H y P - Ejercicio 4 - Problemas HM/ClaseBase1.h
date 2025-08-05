#include<iostream>
using namespace std;

class ClaseBase1{
	protected:
		int x;
	public:
		ClaseBase1(int x){
			this->x = x;
		}
		
		~ClaseBase1(){
			//DESTRUCTOR
		}
		
		int getX(){
			return x;
		}
};
