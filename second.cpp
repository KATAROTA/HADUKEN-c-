#include <iostream>

using namespace std;
//оно не работает
int funcVShar(int R) {
	cout << 4/3*3.14*(R*R*R) <<endl;
	return 0;
}



int funcMth(int a, int b, int c) {
	cout << "2+2*2= "<< a+b*c << endl;
	return 0;
}
int main() {
	funcMth(2, 2, 2);
	cout <<"Привет!"<< endl;
	funcVShar(10);
	return 0;	
}
