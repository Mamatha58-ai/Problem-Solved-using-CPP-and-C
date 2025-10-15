#include<iostream>
using namespace std;
class Bankaccount{

   private:
   double balence;
   public:
   Bankaccount(double b) {
   	balence = b;
   }
   friend void auditaccount(Bankaccount acc); // here acc is an object means it is one user and that user information can be accessed by auditaccount;
   friend void compare_account(Bankaccount acc1 , Bankaccount acc2);
};
// it is friend function
void auditaccount(Bankaccount acc){
	cout << acc.balence;
}
void compare_account(Bankaccount a,Bankaccount b){
	cout << max(a.balence,b.balence);
}
int main(){
	Bankaccount user1(100);
	Bankaccount user2(200);
    auditaccount(user2);
	compare_account(user1,user2);
}
