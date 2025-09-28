#pragma once

class Reservoir
{
	char* name = nullptr;
	double width;
	double length;
	double depth;
public:
	Reservoir();
	Reservoir(const char* n,double w,double l,double d);
	~Reservoir();
	void Init();
	void Print();
	double Capacity() const;
	double Square() const;
	bool Test(const char* type);
	bool TestSquare(Reservoir& b);
	void Copy(const Reservoir& b);
	void SetName(const char* n);
	void SetWidth(double w);
	void SetLength(double l);
	void SetDepth(double d);
	const char* GetName();
	double GetWidth();
	double GetLenth();
	double GetDepth();
};

