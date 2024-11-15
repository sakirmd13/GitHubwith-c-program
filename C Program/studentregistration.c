#include<stdio.h>

void student_registration();

char firstname;
char lastname;
char address;
int mobile_number;

int main()
{
    
    student_registration();

    return 0;
}


void student_registration()
{
    printf("Enter your first name : ");
    scanf("%s",&firstname);
    
    printf("Enter your last name : ");
    scanf("%s",&lastname);

    printf("Enter your Address : ");
    scanf("%s",&address);

    printf("Enter your mobile number : ");
    scanf("%s",&mobile_number);
}