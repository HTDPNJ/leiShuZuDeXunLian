#include <iostream>
#include "myArray.h"
using namespace std;
int main202001091()
{
	Array a1(10);
	for (int i = 0;i < a1.length();i++) {
		a1.setData(i, i);
	}
	for (int i = 0;i < a1.length();i++) {
		cout<<a1.getData(i)<<endl;
	}
	Array a2 = a1;
	cout << "打印a2" << endl;
	for (int i = 0;i < a2.length();i++) {
		cout << a2.getData(i) << endl;
	}
	return 0;
}