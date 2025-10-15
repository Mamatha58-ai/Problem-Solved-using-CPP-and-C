#include<iostream>
using namespace std;
class stack{
	private :
		int top , arr[50];
	public:
	stack() : top(-1) {}
	
	bool isempty(){
		if(top < 50 ) return true;
		else return false;
	}
	bool isfull(){
		if(top == 49)  return true;
	}
	void push(int val){
		if(isempty()) 
		 arr[++top] = val;
	}
	void pop(){
		int num = arr[top];
		cout << num << endl ;
		top --;
	}
	void peek(){
		int num = arr[top];
		cout << arr[top] << endl;
	}
	void display(){
		int i;
		for(i = 0; i <= top ; i++){
			cout << arr[i] << " ";
		}
	}
		
};
int main(){
	stack s;
      s.push(10);
      s.push(20);
      s.push(40);
      s.push(50);
      s.pop();
      bool val = s.isempty();
      cout << val << " ";
      s.display();
}
