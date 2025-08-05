#include<iostream>
using namespace std;

class ClaseBase2{
	protected:
		int x;
	public:
		ClaseBase2(int x){
			this->x = x;
		}
		
		~ClaseBase2(){
			//DESTRUCTOR
		}
		
		int getX(){
			return x;
		}
};
