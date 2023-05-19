#include<stdio.h>
#include<conio.h>

void main(){
int a;
int b;
clrscr();
printf("enter a number:");
scanf("%d",&a);

printf("enter a number:");
scanf("%d",&b);

if(a<b){
printf("a is min");

}else{
printf("b is min");

}
getch();
}