#include "reservoir.h"
#include <iostream>
using namespace std;

Reservoir::Reservoir()
{
	name = nullptr;
	width = 0;
	length = 0;
	depth = 0;
}

Reservoir::Reservoir(const char* n, double w, double l, double d)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	width = w;
	length = l;
	depth = d;
}

Reservoir::~Reservoir()
{
	delete[] name;
}

void Reservoir::Init()
{
	const int size = 100;
	char temp[size];
	cout << "Enter the type of reservoir: " << endl;
	cin.getline(temp, size);
	name = new char[strlen(temp) + 1];
	strcpy_s(name, strlen(temp) + 1, temp);

	cout << "Enter the width of reservoir: " << endl;
	cin >> width;
	cout << "Enter the length of reservoir: " << endl;
	cin >> length;
	cout << "Enter the depth of reservoir: " << endl;
	cin >> depth;
}

void Reservoir::Print()
{
	cout << "Type: " << name << endl;
	cout << "Width: " << width << endl;
	cout << "Length: " << length << endl;
	cout << "Depth: " << depth << endl;
}

double Reservoir::Capacity() const
{
	return width * length * depth;
}

double Reservoir::Square() const
{
	return width * length;
}

bool Reservoir::Test(const char* type)
{
	int result = strcmp(this->name, type);
	if (result == 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

bool Reservoir::TestSquare(Reservoir& b)
{
	if (strcmp(name,b.name) == 0)
	{
		double thisSquare = width * length;
		double otherSquare = b.width * b.length;

		return thisSquare > otherSquare;
	}
	else
	{
		return false;
	}
}

void Reservoir::Copy(const Reservoir& b)
{
	name = new char[strlen(b.name) + 1];
	strcpy_s(name, strlen(b.name) + 1, b.name);
	width = b.width;
	length = b.length;
	depth = b.depth;
}

void Reservoir::SetName(const char* n)
{
	if (name != nullptr)
	{
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}

void Reservoir::SetWidth(double w)
{
	width = w;
}

void Reservoir::SetLength(double l)
{
	length = l;
}

void Reservoir::SetDepth(double d)
{
	depth = d;
}

const char* Reservoir::GetName()
{
	return name;
}

double Reservoir::GetWidth()
{
	return width;
}

double Reservoir::GetLenth()
{
	return length;
}

double Reservoir::GetDepth()
{
	return depth;
}


