#include "Animal.h"
#include <iostream>
using namespace std;

class AnimalHervivoro : public Animal{
	public:
		void alimentarse(){
			cout<<"Se alimenta de plantas."<<endl;
		}
};
