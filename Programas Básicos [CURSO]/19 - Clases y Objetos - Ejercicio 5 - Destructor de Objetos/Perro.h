//AUTORREFERENCIA DEL OBJETO (this) + DESTRUCTORES

class Perro{
	//ATRIBUTOS
	private:
		string nombre, raza;
	//METODOS
	public:
		Perro(string nombre, string raza){
			//CONSTRUCTOR
			this->nombre = nombre;
			this->raza = raza;
		}
		~Perro(){
			//DESTRUCTOR
		}
		void mostrarDatos();
		void jugar();
};
