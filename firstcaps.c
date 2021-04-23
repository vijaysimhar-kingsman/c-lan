/*First uppercase letter in a string (Iterative and Recursive)*/
#include<stdio.h>
//i refers to index as well as s to string
char upper(int i,char s[]){
	if(65<=(int)s[i] && (int)s[i]<=90){
		printf("%c",s[i]);
	}else{
		i++;
		upper(i,s);
	}
}
int main(){
	char str[20];
	printf("\nenter string :");
	scanf("%s",str);
	upper(0,str);
}
