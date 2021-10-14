#include<stdio.h>
int main()
{   while(1){
    int serial,num1,year,marks;
    char ch,ch1;
    printf("Enter any serial number:\n\n 1.Even or Odd? \n 2.Leap year or not?\n 3.Small or Capital letter?\n 4.Vowel or Consonant?\n 5.Pass or Fail?\n\n\n");
    scanf("%d", &serial);
    if(serial==1)
    {
        printf("Enter any integer number:");
        scanf("%d", &num1);
        if(num1%2!=0)
        {
            printf("%d is a odd number\n\n\n", num1);
        }
        else
        {
            printf("%d is a even number\n\n\n", num1);
        }
    }
    if(serial==2)
    {
        printf("Enter any year:");
        scanf("%d", &year);
        if(year%400==0 || (year%4==0 && year%100!=0))
        {
            printf("%d is LEAP YEAR\n\n\n", year);
        }
        else
        {
            printf("%d is not LEAP YEAR\n\n\n", year);
        }

    }
   if(serial==3)
    {
      printf("Enter any character:");
      scanf("%c", &ch);
      if(ch>='a' && ch<='z')
      {
          printf("%c is small letter\n\n\n",ch);
      }
      if(ch>='A' && ch<='Z')
      {
          printf("%c is capital letter\n\n\n",ch);
      }
    }
    if(serial==4)
    {
        printf("Enter any character:");
        scanf("%c", &ch1);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("%c is VOWEL\n\n\n", ch1);
        }
        else
        {
            printf("%c is CONSONANT\n\n\n", ch1);
        }
    }
    if(serial==5)
    {
        printf("Enter your marks:");
        scanf("%d", &marks);
        if(marks>=33)
        {
            printf("You've passed!\n\n\n");
        }
        else
        {
            printf("You've failed\n\n\n");
        }
    }
}
    return 0;
}
