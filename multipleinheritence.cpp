#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
	student(string n, int roll){
		name = n;
		this->roll = roll;
	}
	void showstudent(){
		cout << "student name : "<< name<< " roll no :" << roll ;
	}
};
class teacher{
	public:
		string subject;
		teacher(string sub){
			subject = sub;
		}
		void showteacher(){
			cout <<" teaches subject:" << subject << endl ;
		}
};
class teachassistant : public student , public teacher{
	public:
	string research;
	teachassistant(string n, int roll,string sub ,string res) : student(n,roll), teacher(sub) {
		research = res;
	}
	void showta(){
		cout << "teaching assistant (student)"<< "\n";
		showstudent();
		showteacher();
		cout <<" researcharea :" << research <<"\n" ;
	}
};
int main(){
	teachassistant ta ("raj",101,"cpp","games");
	ta.showta();
	return 0;
}

