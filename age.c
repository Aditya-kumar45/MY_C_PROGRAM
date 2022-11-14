//PROGRAM TO CHECK ELIGIBILITY FOR VOTE
#include<stdio.h>
#include<conio.h>
void main()
{
        int age;
        printf("Enter the age of a person: ");
        scanf("%d",&age);
        if(age>=18)
        printf("Eligible for vote");
        else
        printf("Not eigible for vote");
}