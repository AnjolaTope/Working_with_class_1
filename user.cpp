#include <iostream>
using namespace std;
#include "glass.h"
using namespace glassspace;

int main()
{

	glass c1;
	glass c2;
	glass c3;
	double i;
	double v;

	c1.setcapacity(200);
	c1.setvolume(50);
    c3.setcapacity(400);

	

  cout <<"The volume of cup one is 50 and the capcity of cup one is 200 \n";
  cout <<" "<<endl;
  cout<<"Enter the Volume and Capicty of a cup two \n";
	cout << "Please enter the capacity of c2:"<<flush;
	cin >> i;
	c2.setcapacity(i);
	cout << "The capacity of c2 is: " << c2.getcapacity() << endl;

	cout << "Please enter the volume of liquid in c2:"<<flush;
	cin >> v;
	c2.setvolume(v);
	cout << "The volume of c2 is: " << c2.getvolume()<<endl;
   cout <<" "<<endl;
	
  cout <<"Now we check if the values in cup one and two are the same \n";

	if (c1 == c2)
		cout << "The Capacity and the volume of c1 and c2 are the Same \n";
	else
		cout << "The Capacity and the volume of c1 and c2 are Different \n";
 cout <<" "<<endl;

	c3 = c1 + c2;
  
  cout << "This is a third cup. This cup is the sum of the volume and capicity in the first two cups. "<< flush;

	cout << "The new volume of c3 is: " << c3.getvolume()<< flush;

	cout << ".The new capacity of c3 is: " << c3.getcapacity();







}
