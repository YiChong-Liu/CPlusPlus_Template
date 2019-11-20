#include<iostream>
using namespace std;

class Point {
private:
	double x, y;
	static int code;//静态数据成员
public:
	Point(int x = 0, int y = 0) :x(x), y(y) {
		//在构造函数中对code累加，所有对象共同维护同一个code
		code++;
	}

	Point(Point &p) {
		x = p.x;
		y = p.y;
		code++;
	}

	~Point(){ 
		code--; 
		cout << "析构函数执行了！" << endl;
	}
	double getX() { return x; }
	double getY(){ return y; }

	static void showCode() {//静态成员函数
		cout << "Object code is:" << code << endl;
	}

};

int Point::code = 0;

int main() {
	Point a(4, 5);
	cout << "Point A:(" << a.getX() << "," << a.getY() << ")" << endl;
	a.showCode();//静态数据成员
	Point::showCode();//静态函数成员

	Point b(a);
	cout << "Point B:(" << b.getX() << "," << b.getY() << ")" << endl;
	b.showCode();
	Point::showCode();
	return 0;
}