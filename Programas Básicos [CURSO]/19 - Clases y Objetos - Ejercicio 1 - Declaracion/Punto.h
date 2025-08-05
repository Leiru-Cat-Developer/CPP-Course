//DECLARACION DE UNA CLASE
class Punto{
	//ATRIBUTOS
	private:
		int x,y;
	//METODOS
	public:
		//CONSTRUCTOR 1 [TIENE EL MISMO NOMBRE DE LA CLASE]
		Punto(int _x,int _y){
			x = _x;
			y = _y;
		}
		//CONSTRUCTOR 2 [TIENE EL MISMO NOMBRE DE LA CLASE]
		Punto(){
			x = y = 0;
		}
		void setX(int valorX);	//ESTABLECER VALOR X
		void setY(int valorY);	//ESTABLECER VALOR Y
		int getX();	//OBTENER VALOR X
		int getY(); //OBTENER VALOR Y
};
