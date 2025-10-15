#include<iostream>
using namespace std;
class parent{
	public:
		string parentname;
		int parentage ;
	parent(string n,int age) 
	{
		parentname = n;
		parentage = age;
	}

};
class child : public parent{
	public :
		string birthmonth ;
	child(string n , int age , string bm) : parent(n,age){
		birthmonth = bm ;
	}
};
int main(){
	child mamatha("jaya",40 , "february");
	cout << mamatha.parentname;
}
