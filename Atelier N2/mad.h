#pragma once
class mad
{
private :
	double val;
public:
	mad();
	mad(double val);
	~mad();
	void afficher();
	double operator-(mad m);
	bool operator>(mad m);
	double operator+(mad m);
	bool operator>=(mad m);

};

