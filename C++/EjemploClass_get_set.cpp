//ejemplo de clase en c++ y tambien las propiedades get i set
#include<iostream>
#include<cstdio>
using namespace std;
class one_datum {
	int data_store;
	public:
	void set(int in_value);
	int get_value(void);
};
void one_datum::set(int in_value) {
	data_store = in_value;
}
int one_datum::get_value(void) {
	return data_store;
}
int main() {
	one_datum dog1,dog2, dog3;
	int piggy;
	dog1.set(12);
	dog2.set(17);
	dog3.set(-13);
	piggy = 123;
	cout << "The value of dog1 is " << dog1.get_value()  << endl;
	cout << "The value of dog2 is " << dog2.get_value()  << endl;
	cout << "The value of dog3 is " << dog3.get_value()  << endl;
	cout << "The value of piggy is " << piggy  << endl;
	return 0;
}
