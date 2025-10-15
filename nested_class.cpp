#include<iostream>
using namespace std;
class outer{
 public:
 	static int data;
    class inner{
    	public :
    		void show(){ // inner class only access static of uter class
    			cout << "it is inner class"<<endl << data;
			}
	};	
};
int outer :: data = 229 ;
int main(){
	outer :: inner obj; // use scope resolution operator
	obj.show( );
}
