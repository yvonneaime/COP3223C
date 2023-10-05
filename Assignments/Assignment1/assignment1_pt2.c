// PART 2 - Lecture Assignment 1
// Yvonne Aime
// COP3223
// 09/04/2023


#include <stdio.h>


int main() {
	
   float length, width, height;
   printf("Please enter the length of a box (in inches).\n");
   scanf("%f", &length);
   printf("Please enter the width height of a box (in inches).\n");
   scanf("%f", &width);
   printf("Please enter the height of a box (in inches).\n");
   scanf("%f", &height);


   // Prints out user input of box dimensions (length, width, and height).
   printf("Length: %f \nWidth: %f \nHeight: %f \n\n", length, width, height );
   
   // Volume of dimensions in inches 
   float volumeinch = length * width * height;
   printf("The volume is %lf cubic inches.\n", volumeinch);
   
   float volumefeet = (length/12)*(width/12)*(height/12);
   printf("The volume is %lf cubic feet.\n", volumefeet);
    
   return 0;
}

