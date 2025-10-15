#include<iostream>
using namespace std;
class student{
	public:
	string name;
	float *cgpaptr;
	student(string name ,float cgpa )
	{
		this->name = name;
		cgpaptr= new float;
		*cgpaptr = cgpa; 
	}
	student (student &s1){
		this->name = s1.name;
		cgpaptr = new float;
		*cgpaptr = *s1.cgpaptr;
	}
	void get(){
		cout << name << *cgpaptr << endl;
	}
	
};
int main(){
	student s1("alice",9.1);
	student s2(s1);
	s1.get();
	*s2.cgpaptr = 9.3 ;
	s1.get();
	s2.get();
}
