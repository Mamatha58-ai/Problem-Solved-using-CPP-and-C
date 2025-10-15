#include<iostream>
using namespace std;
class queue{
	private:
		int front , rear , que[50];
	public:
		queue() :front(-1),rear(-1) {}
	 bool isempty(){
	 	if(rear < 50) return true;
	 	else return false;
	 }
	 bool isfull(){
	 	if(front = 0 && rear == 49) return true;
	 	else return false;
	 }
	 void enque(int val){
	 	if(isempty()){
	 		front = 0;
	 		rear ++;
	 		que[rear] = val;
		 }
	 }
	 void deque(){
	 	int num = 0;
	 	if(front == rear){
	 		num = que[front];
	 		cout <<"dq eliment : " << que[front] << endl;
	 		front = rear = -1;
		 }
		 else{
		 	num = que[front];
		 		cout <<"dq eliment : " << que[front] << endl;
		 	 front ++;
		 }
	 }
	 void peep(){
	 	cout << que[front];
	 }
	 void display(){
	 	int i ;
	 	for(i = front ; i <= rear ; i++){
	 		cout << que[i] << " " ;
		 }
		 cout << endl ;
	 }
};
int main(){
	queue q;
	q.enque(70);
	q.enque(50);
	q.enque(32);
	q.display();
	q.deque();
	q.display();
	bool val = q.isfull();
	cout << " "<< val<<endl;
}






