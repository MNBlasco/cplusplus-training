#include<iostream>
using namespace std;

class Persona{
	
	// Atributos                        // Pueden haber metodos con el mismo nombre siempre y cuando tengan diferente
	private:                            // cantidad de parametros u otros tipos de parametros (sobrecarga de metodos)
		string nombre;
		int edad;
		string dni;
	
	// Metodos
	
	public:
		Persona(string nombre,int edad){        // Constructor 1 
			this->nombre = nombre;
			this->edad = edad;                  // Utilizamos el THIS-> para distinguir los atributos de los parametros
		}                                       // cuando estos se llaman igual, sino se puede utilizar un _ delante

		Persona(string dni){                    // Constructor 2
			this->dni = dni;
		}
	
		void correr();
		void correr(int km);
};

