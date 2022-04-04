#include <stdio.h> 
#include <stdlib.h>

int width;          
int height;         
int area;                 

int main() {
	
    printf("Enter the width in integer: ");
    scanf("%d", &width);
    
    printf("Enter the height in integer: ");
    scanf("%d", &height);
    if(height==width){
        area = height*width;
        printf("Area of the square = %d square centimeters\n", area);
    }else{
        area = height * width;
        printf("Area of the rectangle = %d square centimeters\n", area);   
    };
	

return(0);
}