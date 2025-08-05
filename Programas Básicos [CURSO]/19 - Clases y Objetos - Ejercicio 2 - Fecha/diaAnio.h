//IMPLEMENTACION DE LA CLASE DIA - ANIO
class DiaAnio{
	//ATRIBUTOS
	private:
		int dia;
		int mes;
	//METODOS
	public:
		DiaAnio(int _dia, int _mes){
			dia = _dia;
			mes = _mes;
		}
		bool igual(DiaAnio& d);
		void visualizar();
};
