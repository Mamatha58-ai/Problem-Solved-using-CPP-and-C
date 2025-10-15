#include<iostream>
using namespace std;
// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool un_uniquedigi(long int n){
    set < int > see ;
    while(n != 0 ){
        int digi = n % 10;
        if(see.count(digi)) return false;
         see.insert(digi);
         n = n /10;
    }
    return true;
}
int main() {
    
  long int n;
    cin >> n;
   while(1){
   	  n ++;
   	if(un_uniquedigi(n)){
   	    cout << n;
   	    break;
   	}
   }
	
    return 0;
}
