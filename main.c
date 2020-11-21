#include <stdio.h>
//WAP to calculate volume of cone
//formula: vol = 3.14
int main(){
    //declare variables
    float r, h, vol;
    const float PI = 3.14;
    
    //user input values to variables
    printf("calculate volumeo of a cone :-");
    printf("\n.............................");
    printf("\nenter the radious of a cone : ");
    scanf("%f", &r);
    printf("\nenter the height of a cone : ");
    scanf("%f", &h);
    printf("...............................");
    
    //calculate volume of a cone
   
    vol = PI * r * r * h/3;
    
    //dispaly output
    printf("volume of a cone is %f", vol);
}