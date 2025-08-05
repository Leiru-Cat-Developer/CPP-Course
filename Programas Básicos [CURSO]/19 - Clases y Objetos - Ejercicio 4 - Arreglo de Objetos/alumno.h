/*
	NECESITAMOS USAR EL CONSTRUCTOR POR DEFECTO PARA ARREGLOS DE OBJETOS,
	EL CUAL PODEMOS AGREGAR O NO, SIEMPRE Y CUANDO NO TENGAMOS OTRO CONSTRUCTOR
	QUE SI NECESITA DATOS
*/
class Alumno{
	//ATRIBUTOS
	private:
		float calificacionMatematicas;
		float calificacionProgramacion;
		float promedio;
	//METODOS
	public:
		Alumno(float _calificacionMatematicas, float _calificacionProgramacion){
			//CONSTRUCTOR 1
			calificacionMatematicas = _calificacionMatematicas;
			calificacionProgramacion = _calificacionProgramacion;
		}
		Alumno(){}				//CONSTRUCTOR POR DEFECTO
		void pedirDatos();
		void mostrarNotas();
};
