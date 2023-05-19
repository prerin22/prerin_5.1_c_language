#include<stdio.h>
#include<conio.h>

void main(){
int a;
clrscr();
printf("enter a number:");
scanf("%d",&a);
if(a<0){
printf("given number is negative");
}else if(a=0){
printf("given number is neutral");
}else{
printf("given number is positive");
}
getch();
}

