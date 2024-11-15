#include <stdio.h>

void getUserDetails(char *firstName, char *lastName, char *address, char *mobileNumber) {
    printf("Enter your first name: ");
    scanf("%s", firstName);
    
    printf("Enter your last name: ");
    scanf("%s", lastName);
    
    printf("Enter your address: ");
    getchar(); 
    fgets(address, 100, stdin);
    
    printf("Enter your mobile number: ");
    scanf("%s", mobileNumber);
}



int main() {
    char firstName[50];
    char lastName[50];
    char address[100];
    char mobileNumber[15];
    
    getUserDetails(firstName, lastName, address, mobileNumber);
   
    
    return 0;
}
