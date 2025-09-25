#pragma once

class Reservoir
{
	char* name;
	double width;
	double length;
	double depth;
public:
	Reservoir();
	Reservoir(char* n,double w,double l,double d);
	~Reservoir();
	double Capacity() const;
	double Square() const;
	bool Type(const char* type);
	bool TestSquare(Reservoir& b);
	void Copy(const Reservoir& b);
	void SetName(char* n);
	void SetWidth(double w);
	void SetLength(double l);
	void SetDepth(double d);
	char GetName();
	double GetWidth();
	double GetLenth();
	double GetDepth();
};

