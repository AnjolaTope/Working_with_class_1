#pragma once
#ifndef GLASS
#define GLASS
namespace glassspace
{
	class glass
	{
	public:
		glass(double c = 100, double v = 0);
		void setcapacity(double c);	
		void setvolume(double v);
		double getcapacity();
		double getvolume();
		void add(double a);
		void release(double b);
		void operator += (glass d);
	private:
		double capacity;
		double volume;
	};
	 bool operator == (  glass e,  glass f);
	 glass operator + (glass g , glass h);



	
}
#endif

