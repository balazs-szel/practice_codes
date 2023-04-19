//
//  003.c
//  practice
//
//  Created by Szél Balázs on 2023. 04. 19..
//

#include "003.h"
int main() {
    char ch;
    float area;
    float pi=3.14,r,s,a,b;
    
    printf("Select body to calculate area of circle (c)/square(s)/rectangle(t): \n");
    scanf("%c", &ch);
    
    if (ch == 'c'){
        printf("Enter the radius of the circle: ");
        scanf("%f",&r);
        
        area = r*r*pi;
        
        printf("The area of the circle: %f", area);
    }
    if (ch == 's'){
        printf("Enter the size of square: ");
        scanf("%f",&s);
        
        area = s*s;
        
        printf("The area of the square: %f", area);
    }
    
    if (ch == 't'){
        printf("Enter the size of rectangle's 'a' side: ");
        scanf("%f",&a);
        printf("Enter the size of rectangle's 'b' side: ");
        scanf("%f",&b);
        
        area = a*b;
        
        printf("The area of the rectangle: %f", area);
    }
    
    
    
    
    return 0;
}
