#include<iostream>
using namespace std;

int main(){
	char a ='c';
	void *cptr = &a;
	cout << &a << endl;
	cout << *((char*)cptr )<< endl;
}
