/*******************************************
*   Name: Jeremy Paruch                    *
*   Student Number: w0222971               *
*   Date: January 14, 2024                 *
*   Instructor: Nadia Gouda                *
*   Class: PROG 2007 Programming In C      *
********************************************
*****************************************************************************************************************
* Sources:                                                                                                      *
* https://labex.io/tutorials/c-circle-area-and-circumference-in-c-123197                                        *
* https://www.w3schools.com/c/c_constants.php                                                                   *
* https://www.w3schools.com/c/c_variables_change.php                                                            *
* https://www.geeksforgeeks.org/g-fact-41-setting-decimal-precision-in-c/                                       *
* https://www.w3schools.com/c/c_type_conversion.php                                                             *
* https://www.netacad.com/ C Essentials 1, Module 2.0.2 FLoating-point numbers in real life and in "C" language *
*****************************************************************************************************************
********************************
* Colleagues collaborated with:*
* David Comeau                 *
* Judah Csanyi                 *
* Josh Leslie                  *
********************************/

#include <stdio.h>
#include <math.h> // For Step 3

// Step 1: Floating Point Numbers



int main()
{ 
    float Radius = 4;
    const double Pi = 3.14159;

    float circumference = 2 * Pi * Radius;

    /* Testing to see this would work before progessing through the assignment
    printf("%f\n",circumference);
    */

    // Step 2: Demonstrate Type Conversion

    /* Explicitly convert the floating point circumference to an  interger and store it in a new variable
    Print both the original floating-point value and the integer-converted value
    */
    int convertCircumference = (int) circumference;

    /* int convert=circumference; This was misinterepted as to what the assignment was asking for.
    
    Testing to see this would work before progessing through the assignment

    printf("The Integer-converted Circumference is: %d\n", convert); *Note* Intiially any radius less than 1, causes to be 0 will increase radius past 0.1
    */

    // Step 3

    //*old code*double planck = 6.6260*pow(10.0,-34.0);This was old code that I found some documentation on thanks to judah and david for the assistance on that.

    // Netacads way of using Plancks constant, it does look nicer doesnt it?
     const double planck = 6.62607E-34;
    printf("%e\n", planck);

    // Step 4 using print f to format and the display the results!

    //  %.2f This drops down up to 2 decimal places!
    printf("radius is of the circle is: %.2f\n", Radius);

    printf("The Circumference of the circle is: %.3f\n", circumference); 

    printf(" If we convert the float into an interger, the Integer-converted Circumference is: %d\n", convertCircumference);

    printf(" Here is what Planks constant is in scientific notation: %e\n", planck);

    return 0;
}