#include <stdio.h>

//data type
//create a variable dataType anyName; | dataType anyName = #valor que quiera; //solo se declara una vez

int myint =  24; //text format: %i, %d
float myfloat = 22.7; // text format %f
char mychar = 'c'; //caracter simple (una sola letra) %c
int myarray[7]= {5,27,43,12,8,7,0}; //%i
             //  0  1  2  3 4 5 6
float myfloatarray[255] = {1.33, 2.55, 666.1}; //%f
char word[7] = {'E', 's', 't', 'e', 'b', 'a', 'n'};
char country[6] = {"Mexico"}; //%s
char* aName = "Gerardo";//%s string pointer


int main(){

//Modified ints
    
    printf("hola clase, myint = %d\n", myint);
    myint = 25;
    printf("hola clase, myint = %d\n", myint);
    int yearsOld = 24;
    printf("%f\n", myfloatarray[3]);
    printf("%c\n", mychar);
    mychar = 'i';
    printf("%s\n", country);
    printf("%c\n", mychar);
    country[0] = 'I';
    country[1]= 't';
    country[2]= 'a';
    country[3]= 'l';
    country[4]= 'y';
    country[5]= '.';
    printf("%s\n", country);
    char* aName = "Gerardo";
    printf("%s\n", aName);
    printf("%i\n", myarray[2]);
    printf("%c\n", word[2]);
    printf("%f\n", myfloat);
    return 0;
}