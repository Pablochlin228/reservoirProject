#include <iostream>
#include "reservoir.h"
using namespace std;

int main()
{
	Reservoir obj;
	obj.Init();
	obj.Print();
	cout << "Capacity: " << obj.Capacity() << endl;;
	cout << "Square: " << obj.Square() << endl;
	Reservoir obj2("sea",12,16,23);
	/*obj2.Copy(obj);*/
	obj2.Print();
	cout << obj.Test("river") << endl;
	cout << obj.TestSquare(obj2) << endl;

}