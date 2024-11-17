/*In a construction project, the architect needs to calculate the product of the secant and tangent values for a given angle (in degrees) to determine specific structural properties. 



Write a program to assist the architect in obtaining this product accurately.



Formula

radians = angle * pi / 180.0 
secant value = 1.0/cos(radians) 


Note: Use M_PI constant for pi calculation and cos() and tan() inbuilt functions for calculations.

Input format :
The input consists of a double-value n, representing the angle in degrees.

Output format :
The output prints "Product: " followed by a double value representing the product of secant and tangent values of the given angle, rounded to four decimal places.

*/

#include <stdio.h>
#include <math.h>

int main() {
    double angle;
    scanf("%lf", &angle);
    double radians = angle * M_PI / 180.0; 
    double secantValue = 1.0 / cos(radians); 
    double tangentValue = tan(radians);
    double result = secantValue * tangentValue;
    printf("Product: %.4lf\n", result);
    return 0;
}
