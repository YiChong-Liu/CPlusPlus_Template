#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main() {
	string s1 = "12456789";
	//insert在特定位置插入整个字符串
	s1.insert(2, "3");
	cout << s1 << endl;
	//insert在特定位置插入另一字符串的片段
	string s2 = "abcxyz", s3 = "opq";
	s2.insert(s2.begin() + 3, s3.begin(), s3.end());
	cout << s2 << endl;
	//erase删除单个元素
	s2.erase(s2.begin() + 3);
	cout << s2 << endl;
	//str.erase(first,last)
	s3=s2 = "123456789";
	s2.erase(s2.begin()+1,s2.end());
	cout << s2<<endl;
	//str.erase(pos,length)
	s3.erase(2, 3);
	cout << s3 << endl;
	//str.clear():清空
	//substr()
	string sentence = "Thank you!Hello world!";
	cout << sentence.substr(0,5) << endl;
	cout << sentence.substr(6, 6) << endl;
	cout << sentence.substr(20, 10) << endl;
	//string::npos
	if (string::npos == -1) {
		cout << "-1 is true." << endl;
	}
	if (string::npos == 4294967295) {
		cout << "4294967295 is also true" << endl;
	}
	//str.find(str2):返回其在str中第一次出现的位置
	sentence = "Thank you for your smile!";
	string str1 = "Thank", str2 = "me";
	if (sentence.find(str1) != string::npos)
		cout << sentence.find(str1) << endl;
	if (sentence.find(str2) != string::npos) {
		cout << sentence.find(str2) << endl;
	}
	else
		cout << "I know there is no position for me!" << endl;
	//replace
	string sentence2 = "Maybe you will turn around.";
	str1 = "will not", str2 = "Surely";
	cout << sentence2.replace(10, 4, str1) << endl;
	cout << sentence2.replace(0, 5, str2) << endl;

	return 0;
}