#include<iostream>
 using namespace std;
 class student{
 	private :
 		int rollno;
 		float marks;
 	public :
 		string name;
 		string branch; 
 		// constructor
     student(string b , string n , int r , float m ){
     	name = n ;
     	branch = b ;
     	rollno = r;
      marks = m;
     	
	 }
	 // setters
	 void setmarks(int val){
	  marks = val;
	 }
	 
	 void displayDetails() {
        cout << "Student Details:\n";
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Branch: " << branch << endl;
        cout << "Marks: " << marks << endl;
    }
 };
 int main(){
 	student s1("cse","mamtha",229,85.0);
 	s1.displayDetails();
	s1.setmarks(96.0);
	s1.displayDetails();

 }
