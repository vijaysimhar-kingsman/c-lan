/* this program prints mirror images less than 1200 */
/*mirror images are [12,21] since they are river and thery squares are aslo reverse [144,441] so we print [12,21]*/
#include <stdio.h>

int square(int num)
{
    return (num * num);
}int reverse(n){
    int k,  rev = 0, remainder;
    k=n;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n /= 10;
    }return rev;
}void mirror(n){
    
    
    int sqr = square(n);
    //printf("%d\n",sqr);
    
    int rev = reverse(n);
   //printf("%d\n",rev);
    
    int rev_sqr=square(rev);
    //printf("%d",rev_sqr);
   if((sqr == reverse(rev_sqr)) && n < rev &&rev <1200 ){
       printf("[%d,%d] ,",n,rev);
   }
}
int main() {
    int i;
    for(i=12;i<1200;i++){
        mirror(i);
    }
    return 0;
}
