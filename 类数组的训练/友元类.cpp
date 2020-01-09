#include<iostream>
using namespace std;
class A1 {
public:
	friend class B1;
private:
	int a;
};
class B1 {
private:
	A1 aobject;
public:
	void dis() {
		aobject.a = 10; //在b1中访问a1的私有属性
	}
};

int main()2020010903 {
	return 0;
}