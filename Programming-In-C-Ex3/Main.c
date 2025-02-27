/*
Jeremy Paruch
w0222971
January 22 2025
Nadia Gouda
Programming in C
*/
#include <stdio.h>
/* Instructions: tasked with completing a program using the topics covered in Module 3. Follow these exact requirements to ensure your submission is complete.
  Floating-Point Values:

   Declare two float variables and assign them real numbers.

   Calculate the sum, difference, multiplication, and division of these numbers.

   Print the results, formatted to display two decimal places.

Arithmetic Operators:

   Use the modulus operator to find the remainder of a division involving two integers.

   Print the result.

Character Data Type (char):

   Declare a char variable and assign it a letter (e.g., 'A').

   Print the character and its ASCII value using %c and %d.

Input and Output with printf() and scanf():

   Prompt the user to input an integer and a float.

   Print the values entered by the user.

Increment/Decrement Operations:

   Declare an integer variable and demonstrate the use of pre- and post-increment operators.

   Print the value of the variable before and after each operation.

2. Output Formatting:

   Use printf() to display results with clear and organized formatting.

   Include descriptions for each output (e.g., "The sum is: ...").

*/
int main()
{

  // List of all the variables created for the exercise!
  // Beginin exercise

  // Declare two float variables and assign them real numbers.
  float a = 20.0;
  float b = 40.0;
  // Calculate the sum, difference, multiplication, and division of these numbers.
  float additionMath = a + b;
  float subMath = a - b;
  float multMath = a * b;
  float diviMath = a / b;
  // For Step 3
  char myLetter = 'J';

  puts("###### This is How I did Part 1: Floating Point Values #######\n");
  // Step 1
  printf("I added these numbers!  %2f and  %2f is %2f \n", a, b, additionMath);
  printf("I subtracted these numbers! %2f and  %2f is %2f \n", a, b, subMath);
  printf("I multiplied these numbers!  %2f and  %2f is %2f \n", a, b, multMath);
  printf("I divided these numbers!  %2f and  %2f is %2f \n", a, b, diviMath);

  puts("\n###### This is How I did Part 2: Arithmetic Operators#######\n ");
  // Step 2 Use the modulus operator to find the remainder of a division involving two integers.
  printf("Using Modules 6 and 5 is %d \n ", 6 % 5);

  puts("\n###### This is How I did Part 3: CHAR DataType #######\n");
  // Step 3 Declare a char variable and assign it a letter (e.g., 'A'). Print the character and its ASCII value using %c and %d.
  printf("the first letter in my name is %c its ASCII is %d \n", myLetter, myLetter);

  puts("\n###### This is How I did Part 4: Input nad Output with Printf and scanf #######\n");

  // Step 4 Prompt the user to input an integer and a float. Print the values entered by the user.
  int x;
  printf("Gimme a Number for int x: ");
  scanf("%d", &x);

  float y;
  printf("Gimme a Number for float y: ");
  scanf("%f", &y);
  printf("Thank ya kindly! I got %i for your int and %f for the float number \n ", x, y);

  puts("\n###### This is How I did Part 5: Increment and Decrement #######\n");

  // Step 5 Declare an integer variable and demonstrate the use of pre- and post-increment operators. Print the value of the variable before and after each operation.
  int aNumber = 32;

  printf("Lookie Lookie! The number originally is %d \n", aNumber);
  printf("Lookie Lookie! the number went up! The pre increment number is now %d \n", ++aNumber);
  printf("Lookie Lookie! the post increment number is \n", aNumber++);
  printf("Lookie Lookie! the final number is: %d \n", aNumber);

  puts("\n###### All done! Module 3 is Completed! #######\n");
  return 0;
}