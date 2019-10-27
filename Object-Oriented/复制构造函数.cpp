#include<iostream>
using namespace std;

class point{
private:
	double x, y;
public:
	point(double xx = 0,double yy = 0) {
		x = xx;
		y = yy;
	}
	//复制构造函数
	point(point &p);
	double getx() { return x; }
	double gety() { return y; }
};

point::point(point &p) {
	x = p.x;
	y = p.y;
	cout << "已成功执行复制构造函数！"<<endl;
}

void f(point &p) {
	cout << p.getx()<<" "<<p.gety() << endl;
}

point g() {
	point a(1, 2);
	return a;
}
int main() {
	point a(1, 2);
	point b(a);
	point c = a;
	cout << b.getx() << " " << b.gety() << endl;
	cout << c.getx() << " " << c.gety() << endl;
	f(b);
	point d = g();
	cout << d.getx() << " " << d.gety() << endl;
	return 0;
}