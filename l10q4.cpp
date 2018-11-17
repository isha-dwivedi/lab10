include<iostream>
using namespace std;

class Point{
	int x;
	int y;
	public:

	Point(){x = 0; y =0;}
	Point(int x1, int y1){x = x1; y = y1;}
	
	Point(int f) {x = f; y =f;}
	// member getter and setter functions;
	int getx(){	return x;}
	int gety(){	return y;}
	void setx_y(int x, int y){this->x = x; this->y = y;};
	//void sety(int y){this->y = y;};
	void move(int dx, int dy){this->x+= dx; this=>y += dy;}
	void disp(){ cout << "(" << x << ", " << y << ")"<<endl; }
};
class Rectangle{
	Point p1, p2, p3, p4; // p2.Point();
	public:
	Rectangle(point p1, point p3)
	{ 
		this->p1 = p1;
		this->p3 = p3;
		
		
	}
	// (0,0), (1,0), (0,1), (1,1). 
	Rectangle(){
	p1.setx_y(0,0);
	p3.setx_y(1,1);
	p2.move(1,0); 
	p4.move(0,1);
 
	p1.disp();
	p2.disp();
	p3.disp();
	p4.disp();
	}
	
};

int main(){
	
	//Point p1;
	Point p2(2,3);
	Point p3(1);
	//p3.disp();

	Rectangle r1(p2,p3);
 Rectangle r2;
	
	 // r1.Rectangle();
	//Rectangle r2(0,0);
}



