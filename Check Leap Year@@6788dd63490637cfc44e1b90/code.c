// Your code here...
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%400==0 && x%4==0){
        printf("Leap Year");
    }
    else if(x%100!=0){
        printf("Not a Leap Year");
    }
    
}