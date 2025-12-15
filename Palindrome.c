#include<stdio.h>
int main() {
  int num, originalNum, reversedNum=0,remainder;
printf("Enter a number:");
scanf("%d",&num);
originalNum=num;
while(num>0) {
remainder=num % 10;
reversedNum=(reversedNum * 10)+remainder;
num = num/10;
}
if(originalNum == reversedNum)
{
printf("it is a palindrome number");
}
else
{
printf("it is not a palindrome number");
}
return 0;
}
  
