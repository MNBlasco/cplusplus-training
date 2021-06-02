#include "SerVivo.h"
#include <iostream>
using namespace std;

class Planta : public SerVivo{
	public:
		void alimentarse(){
			cout<<"Se alimenta a traves de la fotosintesis."<<endl;
		}
	
};
