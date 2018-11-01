//Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.

#include<iostream>
using namespace std;
class rec
{	
	public:
	double l,b; // lenght & breadt of rectangle
	double area(double l, double b); //member function for area declaration
	double per(double l, double b); //member function for perimeter declaration
};
	double rec::area( double l,double b) { //member function definition
	
	return l*b;
	}
	double rec::per(double l, double b){  //member function definition
	
	return 2*(l+b);
	}
	
int main()
{ rec r1; //declaration of 1st rectangle
  rec r2;  //declaration of 2nd rectangle
  double area,per;
  area=r1.area(12.1,23.0);
  per=r1.per(12.1,13.0);
	
 cout<<"area1:"<<area<<endl;
  cout<<"perimeter1:"<<per<<endl;
  area=r2.area(1.3,3.4);
  per=r2.per(1.3,3.4);
  cout<<"area2:"<<area<<endl;
  cout<<"perimeter2:"<<per<<endl;
}
  
  
  

  
