#include<stdio.h>
int main(){
	int pens,amount_have,recycle_cost,refill_cost;
	scanf("%d %d %d %d",&pens,&amount_have,&recycle_cost,&refill_cost);
   int low=1	;
   int high=pens;
   int ans =0;
   while(low<=high){
   
	int mid=(low+high)/2;
	int recycle=pens-mid;
	int recycle_amount=recycle_cost*recycle;
	int total=amount_have+recycle_amount;
	int refill_amount=mid*refill_cost;
	if(refill_amount<=total){
		ans =(mid>ans)? mid:ans;
		low =mid+1;
	}
	else{
		high=mid-1;
	}	
}
printf("%d",ans);
}

