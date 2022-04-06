#include <stdio.h>
#include <stdlib.h>

int age;          
char username[255];                          

int main() {
	
    printf("Enter your username:");
    scanf("%s", username);
    
    printf("Enter your age:");
    scanf("%d", &age);
    if(age<18){
        printf("Sorry, you are not old enough to enter the program.\n");
    }else{
        
        printf("Welcome to the program,%s\n",username);   
    };
	

return(0);
}