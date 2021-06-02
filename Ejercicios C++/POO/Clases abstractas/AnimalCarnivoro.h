#include "Animal.h"
#include <iostream>
using namespace std;

class AnimalCarnivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"Se alimenta de carne."<<endl;
		}
};
