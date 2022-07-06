#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int j;
    double m;
    char input_string[100];
    
    // Read and save an integer, double, and String to your variables.
    scanf("%d\n", &j );
    scanf("%lf\n", &m );
    scanf("%[^\n]", input_string );
    
    // Print the sum of both integer variables on a new line.
    printf("%d\n",i+j);
    
    // Print the sum of the double variables on a new line.
    printf("%0.1lf\n", d+m );
    
    // Concatenate and print the String variables on a new line
    printf("%s%s",s, input_string );
    
    // The 's' variable above should be printed first.
    
    return 0;
}