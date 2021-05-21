#this program is about
/* 
i/p : [1,2,3,4,5]
o/p : 0

i/p : [1,2,3,4,5,6,7]
o/p : 4
explanation : alternate elemts from the beginning of 
			  the array should eleminate untill you get   
			  single element #return that elemet
			  in case tou dindnt find any  alterante in the array
			  return 0
			  ex case: [4,6] there is no alternate element for 4 so return 0
			  ex case: [1,2,3,4,5,6,7] in this array you pick [2,4,6] then again you pass this
			  		   array then you pick 4 # last_item left in the whole array 
			  		   
*/
#include<stdio.h>
int alternate(int arr[],int n){
    if(n==2){
        return 0;
    }else if(n==1){
        return arr[n-1];
    }else{
        int i=0;int lenn =n/2;
        int a[lenn];
        int j=0;
        for(i=0;i<n;i++){
            if(i%2 !=0){
                a[j]=arr[i];
                j++;
            }
            
        }alternate(a,lenn);
    }
}

int main(){
    int n,i;
    printf("enter size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("enter element:");
        scanf("%d",&arr[i]);
    }
    int k;
    k=alternate(arr,n);
    printf("%d",k);
}
