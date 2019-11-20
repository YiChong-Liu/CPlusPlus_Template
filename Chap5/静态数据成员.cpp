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

	void showCode() {
		cout << "Object code is:" << code << endl;
	}

};

int Point::code = 0;

int main() {
	Point a(4, 5);
	cout << "Point A:(" << a.getX() << "," << a.getY() << ")" << endl;
	a.showCode();
	Point b(a);
	cout << "Point B:(" << b.getX() << "," << b.getY() << ")" << endl;
	b.showCode();
	return 0;
}