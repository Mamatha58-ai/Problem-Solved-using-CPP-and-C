//1. Declaring Objects
//Problem: Create a class Student with roll number and name. Declare two objects and display their values using a member function.


#include<iostream>
using namespace std;
class student{
	private:
	string name;
	int roll;
	public:
		student(string name,int roll){
		this->name = name;
		this->roll = roll;
	}
	void display(){
		cout << name << " " << roll<<endl;
	}
};
int main(){
	student s1("mamatha",229);
	student s2("rani",436);
	s1.display();
	s2.display();
}
