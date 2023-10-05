// Yvonne Aime
// COP3223
// October 3, 2023
// Example of using file i/o in C language

#include <stdio.h>
#define PI 3.145926535898

int main() {
    // Location in memory where our data is temporarily stored 
    // File pointer
    FILE *ifp; 
    
    // open input file
    // Reading data from file 
    ifp = fopen("jetski.in", "r");
    
    int numcases;
    int day;
    fscanf(ifp, "%d", &numcases);
    
    // Process each case
    for(day = 1; day <= numcases, day++;) {
        int mph, time;
        double radius, area;
        
        // Read in data for this case
        fscanf(ifp, "%d%d", &mph, &time);
        
        /* This is how far you can go in miles. We divide by 60% because the time was given in min. We need to convert to hour */
        radius = mph * time/60.0;
        
        // Area of a semi-circle
        area = 0.5 * PI * radius * radius;
        
        // Print the answer, so no (&)
        printf("Day %d: %.2lf\n", day, area);
        
    }
    
    // Close file
    fclose(ifp);
    return 0;
}
