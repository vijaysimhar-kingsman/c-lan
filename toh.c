#include<stdio.h>
/*
TOWER OF HONOI

s stands for source pole
a stands for auxilary pole
d stands for destination pole

move n-1 disc from s to a using d
move a disc from s to d
move n-1 disc from a to d using s
*/
int count=0;
int toh(int n, char s , char a , char d){

	if(n>0){
		count++;
		toh(n-1,s,d,a);
		printf("%d Move the disk %d from %c to %c\n",count,n,s,d);
		toh(n-1,a,s,d);
	}
	
}
int main(){
	toh(3,'s','a','d');	
	printf("total it took %d steps ",count);
}
