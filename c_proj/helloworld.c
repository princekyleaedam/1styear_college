#include<stdio.h>

int main(){
     //int a=10,b=4,ans;
     int a;
     printf("Enter a:");
     scanf("%d", &a);
     printf("You entered:%d\n",a);
     int b;
     printf("Enter b:");
     scanf("%d", &b);
     printf("You entered:%d\n",b);

     if (a%2==1){
     a=0;
     }
     if (b%2==1){
     b=0;
     }

     int ans;
     ans = a+b;
     printf("a+b is%d\n",ans);

     ans = a-b;
     printf("a-b is%d\n",ans);

     ans = a*b;
     printf("a*b is%d\n",ans);

     ans = a/b;
     printf("a/b is%d\n",ans);

     ans = a%b;
     printf("a%%b is%d\n",ans);


 return 0;
}
