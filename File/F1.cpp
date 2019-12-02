#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<ctime>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::ifstream;
using std::ofstream;

int main() {
	string fileName1 = "E:\\C++test\\hello.cpp";
	string fileName2 = "E:\\C++test\\copy.cpp";
	ifstream ifs(fileName1);
	if (!ifs) {
		cout << "Unable to open the file!" << endl;
		return 0;
	}

	ofstream ofs(fileName2);
	string line = "";
	while (getline(ifs, line)) {
		cout << line << endl;
		ofs << line << endl;
		line = "";
	}
	ifs.close();
	return 0;
}
