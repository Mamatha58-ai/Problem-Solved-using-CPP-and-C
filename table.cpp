#include<iostream>
using namespace std ;
int main(){
	int n,a,b;
	cin >> n >> a >> b ;
	int i;
	for(i = a ; i<=b ; i++)
	{
		cout<<n ;
		cout<< "x" ;
		cout << i ;
		cout <<"=";
		cout <<  n*i;
	}
}
