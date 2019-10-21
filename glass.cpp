#include<iostream>
#include "glass.h"
#include < assert.h >
using namespace std;
using namespace glassspace;

glass ::glass(double c , double v )
{
	    capacity = c,
		volume = v;
}
void  glass::setcapacity(double c)
{
	capacity = c;
}
double  glass::getcapacity() {
	return capacity;
}
void  glass:: setvolume(double v)
{
	assert( v  <= capacity);
	volume = v;
}
double  glass::getvolume() {
	return volume;
}
void glass :: add(double a)
{
	 assert (volume < capacity);
	volume += a;
}
void glass :: release(double b)
{
	assert(b < volume);
	volume = volume - b;
}
void glassspace::glass :: operator += (glass d)
{
	assert(volume + d.getvolume() < capacity);
	volume += d.getvolume();
}
bool  glassspace  :: operator == ( glass e,   glass f )
{
	return  (e.getcapacity() == f.getcapacity())
		&& (e.getvolume() == f.getvolume());
}
glass glassspace::operator + (glass g, glass h)
{
	glass sum;
	sum.setcapacity(g.getcapacity() + h.getcapacity());
	sum.setvolume(g.getvolume() + h.getvolume());
	return sum;
}



	

