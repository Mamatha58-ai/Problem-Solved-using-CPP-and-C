#include<iostream>
#include<vector>
using namespace std;
class segmenttree{
	private :
	 vector<int>segtree;
	public:
	 segmenttree(int n){
	 	segtree.resize(4*n);
	 }	
	 // for adding data
	 void buildsegtree(int index,int start,int end,vector<int>&A){
	 	if(start == end){
	 		segtree[index] = A[index];
		 }
		 int mid = (start+end)/2 ;
		 // to move left
		 buildsegtree(2*index+1,start,mid,A);
		 // to move right
		 buildsegtree(2*index+2 , mid+1,end ,A);
		 segtree[index] = segtree[2*index+1] + segtree[2*index+2];
	 }
	 // 
	 int rangesum(int ql,int qr , int start , int end , int index){
	 	// no over lapping
	 	if(qr < start  || end < ql ){
	 		return 0;
		 }
		 // fully overlap;
		 else if( ql <= start && qr >= end){
		 	return segtree[index];
		 }
		 // partially overlap
		
		 	 int mid = (start + end) / 2;
		 	 int left = rangesum(ql,qr,start,mid,2*index +1);
		 	 int right = rangesum(ql,qr,mid+1,end,2*index+2);
		 	 return left + right;
		 
	 	
	 }
	 
};

int main(){
	int i,n;
	cin >>n;
	vector<int>arr(n);
	for(i = 0 ; i < n ; i++)
	  cin >> arr[i];
	 
	int l , r ;
	cin >> l >> r ;
	 segmenttree segtree(n);
	segtree.buildsegtree(0,0,n-1,arr);
 int sum = segtree.rangesum(l,r,0,n-1,0);
 cout << sum;
}






