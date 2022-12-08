#include<iostream>
using namespace std;
class Mammal{
	public:
		Mammal()
		{
			cout<<"Mammal\n";
		}
};
class MarineAnimal{
	public:
		MarineAnimal()
		{
			cout<<"MarineAnimal\n";
		}
};
class BlueWhale: public Mammal, public MarineAnimal{
	public:
		BlueWhale()
		{
			cout<<"I belong to both the classes\n";
		}
};

int main()
{
	Mammal obj1;
	MarineAnimal obj2;
	BlueWhale obj3;
}
