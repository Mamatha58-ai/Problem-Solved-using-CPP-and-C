#include<iostream>
using namespace std;
class b;
class A{
	private :
	int data;
	public :
	A(int val){
		data = val;
	}
	friend  class b;
};
class b{
	public :
	     void show(A a){
	     	cout << "accessing private member of  A  " << a.data << endl;
		 }	
};
int main(){
	int n;
	cin >> n; 
	A obj1(n);
	b obj2;
	obj2.show(obj1);
}
