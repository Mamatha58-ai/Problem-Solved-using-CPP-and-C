#include<iostream>
using namespace std;
class marks{
	public:
	int mark[3];

	marks(int s1,int s2,int s3){
		mark[0] = s1;
			mark[1] = s2;
				mark[2] = s3;
	}
	int operator[](int pos){
		return mark[pos];
	}
};
int main(){
	marks m1(20,30,40);
	cout << m1[0] << endl;
}
