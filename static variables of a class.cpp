#include<iostream>
using namespace std;
class student{
	public :
	string name;
	int roll;
	string branch;
	static string college;//static variable
	
	student(string name , int roll , string branch){
		this->name = name ;
		this->roll = roll;
		this->branch = branch;
	}
	static void getinfo (){ // static member function
		cout << college << endl ;	
	}
	void change_roono(int roll){
		this->roll = roll;
	}
};
string student :: college = "AUS";// not a object variable it is class variable --> it access to all objects;
int main(){
	student s1("mamatha" , 229 , "CSE");
	s1.change_roono(485);
		student s2("devi" , 128 , "aiml");
	cout << student :: college << endl;
    student :: getinfo();
	cout << s1.roll << endl;
	cout << s2.roll << endl ;
}
