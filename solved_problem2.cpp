#include<iostream>
using namespace std;
int main(){
	long long n,m,a;
	cin >> n >> m >> a;
	long long along_horizontal = (n+a-1)/a;
	long long along_verticalal = (m+a-1)/a;
	cout << along_horizontal * along_verticalal;
	return 0;
}
