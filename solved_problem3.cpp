#include<iostream>
using namespace std;

class Bank_Account{
	int  balence ;
	public:
		Bank_Account(int amount){
			balence = amount ;
		}
  	void credit(int amount){
		balence += amount ;
	}
	void debit(int wamount){
		try{
			if(balence < wamount)
			throw "Insufficient balence to with draw \n";
			 else {
			 throw "--successfull transaction--";
			 balence -=wamount;
		}
		}
		    catch(const char *a) {
	cout << a << "present amount : " << balence;
}
	}	
			
};
int main(){
	Bank_Account b1(100);
	b1.credit(100);
    b1.debit(201) ;

}
