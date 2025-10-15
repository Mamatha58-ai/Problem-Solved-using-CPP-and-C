#include<iostream>
using namespace std;
class BankAccount{
	private :
		double balance;
		long account_number;
	public :
		string holdername;
		// constructor
	BankAccount(double b , long a , string h ){
	   balance = b;
	  account_number = a;
	   holdername = h;
	}
	// setter
	void deposit(double amou){
		balance +=amou;
	}
	// getter
	void  withdraw(double amou){
		balance -= amou; 
	} 
	void checkba(){
	//	return balance;
		cout << balance ;
	}
	
};
int main(){
	// create object and access values 
	BankAccount acc1(900 ,485 , "vikranth");
	acc1.deposit(100);
	acc1.withdraw(100);
	acc1.checkba();
}
