#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<stdexcept>
using namespace std;

/*函数模板
模板函数定义的一般形式如下所示：
template <class type> ret-type func-name(parameter list)
{
   // 函数的主体
}
*/

/*类模板
正如我们定义函数模板一样，我们也可以定义类模板。泛型类声明的一般形式如下所示：

template <class type> class class-name {
	.
	.
	.
}
在这里，type 是占位符类型名称，可以在类被实例化的时候进行指定。您可以使用一个逗号分隔的列表来定义多个泛型数据类型。
下面的实例定义了类 Stack<>，并实现了泛型方法来对元素进行入栈出栈操作：*/

template <class T>
class Stack {
private:
	vector<T>elems;
public:
	void push(T const&);//入栈
	void pop();//出栈
	T top()const;//返回栈顶元素
	bool empty()const {//如果为空则返回真
		return elems.empty();
	}
};

template <class T>
void Stack<T>::push(T const& elem) {
	elems.push_back(elem);
}

template <class T>
void Stack<T>::pop() {
	if (elems.empty()) {
		throw out_of_range("Empty Stack!");
	}
	elems.pop_back();
}

template <class T>
T Stack<T>::top()const {
	if (elems.empty()) {
		throw out_of_range("Empty Stack!");
	}
	return elems.back();
}

int main() {
	try {
		Stack<int> intStack;
		Stack<string> stringStack;

		intStack.push(7);
		cout << intStack.top() << endl;

		stringStack.push("Hello");
		cout << stringStack.top() << endl;
		stringStack.pop();
		stringStack.pop();
	}
	catch (exception const& ex) {
		cerr << "Exception: " << ex.what() << endl;
		return -1;
	}
}

