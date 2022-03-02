#include "mad.h"
#include<iostream>
using namespace std;
mad::mad()
{
}
mad::mad(double val)
{
	this->val = val;
}

mad::~mad()
{
	cout << "le destructeur de mad " << endl;
}

void mad::afficher()
{
	cout << this->val << endl ;
}

double mad::operator-(mad m)
{
	this->val = this->val - m.val;
	return this->val;
}

bool mad::operator>(mad m)
{
	if (this->val > m.val)
	{
		return true;
	}
	else

		return false;
}

double mad::operator+(mad m)
{
	this->val = this->val + m.val;
	return this->val;
	
}

bool mad::operator>=(mad m)
{
	if (m.val >= val)
		return true;
	else
		return false;
}
