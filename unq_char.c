#include<stdio.h>
#include<string.h>
int main(){
	char str1[]="vijaysimhareddy";
//finding the length of the string
	int len=0;
	while(str1[len]!='\0'){	
		len++;
	}
	
	char str2[len];
	
	int i=0;
//assigning all cahracters of the second array to  null characters to increse the speeb # in loops
	while(i<len){
		str2[i]='\0';
		printf("%c ",str2[i]);
		i++;
	}
	i=0;
//looping our data
	while(i<len){
		int j=0;
		while(str2[j]!='\0'){
			if(str2[j]!=str1[i]){
				j++;
			}else{
				str2[j]='*';//if data matches we are making that data to *
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
			// we are not printing the astric values our second array will look like v*j**smhre*
			printf(" %c ",str2[j]);
			
		}j++;
		//and our output will be for this data is : v j s m h r e //
	}printf("\n these are the unique characters from the string : %s",str1);
	
}//vijayasimharockz@gmail.com
