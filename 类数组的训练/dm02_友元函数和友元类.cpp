#include<iostream>
//ÓÑÔªº¯Êý
using namespace std;
class A {
public:
	friend void modifyA(A *pA);
	A() {

	}
	A(int a, int b) {
		this->a = a;
		this->b = b;
	}
	int getA() {
		return a;
	}
private:
	int a;
	int b;
protected:
};
void modifyA(A *pA) {
	pA->a = 100;
}
int main202001092() {
	A a;
	cout << a.getA()<<endl;
	modifyA(&a);
	cout << a.getA();
	return 0;
}