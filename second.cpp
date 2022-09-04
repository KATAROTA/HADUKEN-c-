#include <iostream>

using namespace std;

int funcVShar(int R) {
	cout << "Vshar =" << 4/3*3.14*(R*R*R) <<endl;
	return 0;
}
int funcTrapS (int a, int b, int h) {
	cout << "TrapS =" <<((a+b)/2)*h <<endl;
	return 0;
}



int funcMth(int a, int b, int c) {
	cout << "2+2*2= "<< a+b*c << endl;
	return 0;
}
int main() {
	//funcMth(2, 2, 2);
	cout <<"Привет!"<< endl;
	funcVShar(10);
	funcTrapS(10, 5, 3);
	return 0;	
}
