#include<stdio.h>
int main(){
	int num=1;
	int count=0;
	int l=1;
	int k,i;
	printf("\nenter how many primes you want to print: ");
	scanf("%d",&k);
	while(l!=k+1){
		for(i=1;i<=num;i++){
			if(num%i==0){
				count++;
			}
		}if(count==2){
			printf("%d ----> %d\n",l,num);
			num++;
			l++;
			count=0;
		}else{
			num++;
			count=0;
		}
		
	}
}