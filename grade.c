#include<stdio.h>
#include<conio.h>
int main()
{
int score;
printf("Enter the students score:");
scanf("%d",&score);
if(score>=85 && score <=100)
{
printf("Grade A");
}
else if(score>=70 && score<=84)
{
printf("Grade B");
}
else if(score >=55 && score<=69)
{
printf("Grade C");
}
else if(score>=40 && score<=54)
{
printf("Grade D");
}
else
{
printf("Grade F");
}
}
