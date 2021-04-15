#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="vijaysimhareddy";
	//printf("%c",str1[3]);
	int len=0;
	while(str1[len]!='\0'){	
		len++;
	}
	char str2[len];
	//printf("length =%d",len);
	int i=0;
	while(i<len){
		str2[i]='\0';
		printf("%c ",str2[i]);
		i++;
	}
	i=0;
	while(i<len){
		int j=0;
		while(str2[j]!='\0'){
			if(str2[j]!=str1[i]){
				j++;
			}else{
				str2[j]='*';
				break;
			}
		}if(str2[j]=='\0'){
			str2[j]=str1[i];
		}i++;
	}
	int j=0;
	printf("\n");
	while(str2[j]!='\0'){
		if(str2[j]!='*'){
			printf(" %c ",str2[j]);
			
		}j++;
		
	}printf("\n these are the unique characters from the string : %s",str1);
	
}
