#include<stdio.h>
int fact(int num);
int main(){
    int num,i,factrrrr=1;
    printf("Enter the value of n:");
    scanf("%d",&num);
    /*for(i=1;i<=n;i++){
        fact=fact*i;

    }
    printf("Factorial of %d is %d ",n,fact);*/
    fact(num);
    printf("%d",fact(num));

}
int fact(int num){
    if(num>1){
    return num*fact(num-1);
}
else 
return 1;
}