//BitString.cpp
#include "BitString.h"


BitString BitString::operator++()
{
	a++;
	return *this;
}

BitString BitString::operator--()
{
	a--;
	return *this;
}

BitString BitString::operator++(int)
{
	BitString obj(*this);
	b++;
	return *this;
}

BitString BitString::operator--(int)
{
	BitString obj(*this);
	b--;
	return *this;
}


BitString operator ^ (BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a & obj2.a;
	res.b = obj1.b & obj2.b;
	return res;
}