#include<iostream>
using namespace std;
void binary(int n){
   int	i ;
	for(i = 8 ; i >= 0; i--){
		int mask = (1<<i) ;
		if((n&mask) > 0) cout << 1  ;
		else cout << 0;
	}
}
int main(){
	int n ;
	cin >> n;
	binary(n);
}
