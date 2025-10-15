#include<iostream>
using namespace std;
class marks{
	int mark;
	public:
		marks(){
			mark = 0;
		}
		marks(int inc){
			mark =  inc ;
			cout << mark <<endl;
		}
		marks operator--(int){
			marks temp (*this);
			mark-=1;
			return temp;
		}
		void display(){
			cout << mark << endl ;
		}
};
int main(){
	marks m1(20);
	m1--.display();
	m1.display();
}
