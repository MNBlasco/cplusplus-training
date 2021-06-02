// Declaracion de una clase en c++

class Punto{
	// Atributos (miembro de clase)
	private: // Modificador de acceso que no permite que otras clases accedan
		int x,y;
	                               
	// Metodos (miembro de clase)
	public:
		
		Punto(int _x,int _y){ // Metodo constructor 1, inicializa los atributos de la clase
			x = _x;
			y = _y;
		}
		
		Punto(){ // Metodo constructor 2
			x = y = 0; 
		}
		
		// Seters y getters (mirar punto.cpp donde estan implementados estos metodos publicos)
		
		void setX(int valorX);
		void setY(int valorY);
		int getX();
		int getY();
};
