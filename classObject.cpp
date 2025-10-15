#include<iostream>
 using namespace std;
 class student{
 	private :
 		int rollno;
 		double marks;
 	public :
 		string name;
 		string branch; 
     student(string b , string n , int r , double m ){
     	name = b ;
     	branch = n ;
     	rollno = r;
     	branch = m;
     	cout << "hi i am a constructor";
	 }
	 void setmarks(int val){
	  rollno = val;
	 }
	 void getmarks(){
	   cout << rollno;
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
 	//student s1;
 	student s1("cse","mamtha",229,85.0);
 	s1.displayDetails();
	student s2("cse","mamtha",229,85.0);
	s2.displayDetails();
//    s1.setmarks(229);
//    s1.name = "mamatha";
//    s1.branch = "cse";
// 	s1.setmarks(99);
// 	s1.getmarks();
// 	cout <<s1.branch << s1.name ;
 }
