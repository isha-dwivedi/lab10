
/*Write a definition of a class Rectangle using the Point class. A rectangle is specified by two
corner points (bottom left and top right). The sides of the rectangle are parallel to the coordinate
axes*/
#include<iostream>
using namespace std;

class point{
	//private member declaration
	int x;
	int y;
	
	public:
    point(){x = 0; y =0;}//primary constructor with no arguments
	point(int x1, int y1){x = x1; y = y1;}//constructor with arguments
	
	point(int f) {x = f; y =f;}
	// member getter and setter functions;
	int getx(){	return x;}
	int gety(){	return y;}
	void setx(int x){this->x = x; };
	void sety(int y){this->y = y;};
	void move(int dx, int dy){this->x+= dx; this->y += dy;} //member function to move the distance of dimensions of rectangle
	void disp(){ cout << "(" << x << ", " << y << ")"<<endl; }//member function to display coordinates
};
//class rectangle declaration
class Rectangle{
	point p1, p2, p3, p4; //point objects treated as variables
	public:
	Rectangle(point p1, point p3)//constructor that takes two points as arguments
	{   int a,b;
	    cout<<"enter the breadth and length ofthe rectangle"<<endl;
	    cin>>a>>b;
	    /*creating a rectangle with the first point as 
	    the bottom left corner and the second as the top right corner*/
	    p1.setx(0);//bottom left corner
	    p1.sety(0);
	    p3.setx(a);//top right corner
	    p3.sety(b);
		this->p1 = p1;
		this->p3 = p3;
		p2.move(a,0); 
	    p4.move(0,b);
	    p1.disp();
	    p2.disp();
	    p3.disp();
	    p4.disp();
		
	}
	// constructor that creates a rectangle with the corners (0,0), (1,0), (0,1), (1,1). 
	Rectangle(){
	p1.setx(0);
	p1.sety(0);
	p3.setx(1);
	p3.sety(1);
	p2.move(1,0); 
	p4.move(0,1);
 
	p1.disp();
	p2.disp();
	p3.disp();
	p4.disp();
	}
	
};

int main(){
	
point p1, p2, p3, p4;

	Rectangle r1(p2,p3);
    Rectangle r2;
	
	 
}
