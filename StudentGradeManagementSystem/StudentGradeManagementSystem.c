/**********************
Name:Jeremy Paruch
Student Number:W0222971
Date:February 21, 2025
Class: Programming in C
Instructor: Nadia Gouda
**************************

Note: A Big thank you to Nadia, Josh, Judah, & Jamie (my mentor) for the support and suggestions
as well as W3schools and Netacad for the documentations
I couldnt have gotten this far with out your encouragement and support.
Thank you for being patient with me and answering any/all of my  questions no matter how they sounded.

:D

Also Idea for fixing infinite loop problems courtesey of stack overflow
https://stackoverflow.com/questions/1716013/why-is-scanf-causing-infinite-loop-in-this-code
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
  char garbage[100];
  char studentsName[100];
  int studentGrade1;
  int studentGrade2;
  int studentGrade3;
  int totalGrades;
  float theClassAverage;
  float studentAverage;
  char yesToContinue;
  int totalStudents = 0;
  bool didStudentPass = true;
  int classTotal=0;
  bool noGrade;

  // A silly message to show that the program has successfully launched! :D
  printf("***********Sucessfully Booted Student Grade Management Program V1.1! :D **********\n\n");
  printf("\t Jervis: HI! Im Jervis, your grade calculating assistant!\n\n");
  do
  {
    // Here I want the user to put in some information for the program, we start off by asking what the name of the student is
    printf("Jervis: Whats the name of the student you want to enter?\n\n");
    scanf(" %[^\n]", &studentsName);
    // The name is accepted and is now logged into the system
    printf("\nJervis: Okie dokie, we're adding %s in to the system! \n\n", studentsName);
    // our counter goes up for each successful addition of a student
    totalStudents++;
    // a nice little reminder to the user of how many students have been entered so far
    printf("Jervis: Just a reminder, you've entered  %d  of your students so far! \n\n", totalStudents);

    // NOW we need some grades to check against, this will ask the user to start plugging some grades in, starting with subject 1
    // also noGrade is used until a grade is entered
    noGrade=true;
    while(noGrade){
        printf("Jervis: Okie dokie now then; for %s 's FIRST subject, what's their grade? Enter a number between 0 and 100!\n\n", &studentsName);
        // making sure they enter a number
        if(scanf("%d", &studentGrade1) !=1){
            printf("Jervis: Oops, I found an error!\n This Grade you put in MUST be between 0 and 100! Can you give it another go please? \n");
            // user doesnt type a number? then we put the "not a number" in the garbage
            scanf(" %[^\n]", &garbage);
            continue;
        }
        // if the user tries to be funny and break the system, this error "politely yet firmly asks the user for a number between 0-100 :D"
        if (studentGrade1 < 0 || studentGrade1 > 100)
        {
            printf("Jervis: Oops, I found an error!\n This Grade you put in MUST be between 0 and 100! Can you give it another go please? \n");
        }else{
            printf("**********FIRST GRADE ENTERED :D *********\n\n");
            noGrade=false;
        }
    }
    // Moving onto the second subject!

    noGrade=true;
    while(noGrade){

        printf("Jervis: Onto the SECOND subject! What's their grade? Enter a number between 0 and 100! \n\n");
        if(scanf("%d", &studentGrade2) !=1){
            printf("Jervis: Oops, I found an error!\n This Grade you put in MUST be between 0 and 100! Can you give it another go please? \n");
            scanf(" %[^\n]", &garbage);
            continue;
        }
        if (studentGrade2 < 0 || studentGrade2 > 100)
        {
            printf("Jervis: Oops, I found an error!\n This Grade you put in MUST be between 0 and 100! Can you give it another go please? \n");
        }else{
            printf("**********SECOND GRADE ENTERED :D *********\n\n");
            noGrade=false;
        }
    }
    // Lastly, the 3rd and final subject! we're almost done! :D

      noGrade=true;
    while(noGrade){
         printf("Jervis: This is the final subject! What's their grade? Enter a number between 0 and 100! \n\n");
        if(scanf("%d", &studentGrade3) !=1){
            printf("Jervis: Oops, I found an error!\n This Grade you put in MUST be between 0 and 100! Can you give it another go please? \n");
            scanf(" %[^\n]", &garbage);
            continue;
        }
        if (studentGrade3 < 0 || studentGrade3 > 100)
        {
            printf("Jervis: Oops, I found an error!\n This Grade you put in MUST be between 0 and 100! Can you give it another go please? \n");
        }else{
            printf("**********FINAL GRADE ENTERED :D *********\n\n");
            noGrade=false;
        }
    }
    // Now we get to the good part! All the grades we need have been collected, time to see if the student passed or failed!
    printf("*********All Grades Have Been Collected**********\n");

    printf("Jervis: OK!\nJervis:We got all the grades we need! Time to do some quick maffs!\n\n");
    printf("Jervis: bzzzt \n\n");
    printf("Jervis: bzzzzzzzt \n\n");
    printf("Jervis: bzzzzzzzzzzzzt \n\n");
    // adding up all the grades for the student
    totalGrades = studentGrade1 + studentGrade2 + studentGrade3;
    // adding students total to the class total
    classTotal = classTotal+totalGrades;
    // casting the interger division into a float
    studentAverage =(float) (studentGrade1 + studentGrade2 + studentGrade3) / 3;

    printf("Jervis: Alrighty so for %s \n", &studentsName);
    printf("Jervis: Their total marks are %d\n", totalGrades);
    printf("Jervis: the average is %.3f\n", studentAverage);
    // if grade is 50 or better, the student passes
    if( studentAverage >=50.0)
    {
        didStudentPass=true;
    }else{
        didStudentPass=false;
    }

    printf("Jervis: Let's see if they passed or failed: %s\n\n", didStudentPass ? "Success" : "Nope");
    printf("**********END OF THIS STUDENTS EVALUATION**********\n\n");


    printf("Jervis: Do you want to add another student? Press y for 'yes' or n for 'No' \n\n");
    // if they press y then we get to enter another student
    scanf(" %c", &yesToContinue);
  } while (yesToContinue == 'y');
  // signing off message
  printf("Jervis: Alrighty I guess you don't need me anymore :(. But hey it was fun while it lasted!\n\n");
  printf("Jervis: Here's what we got after entering all those students!\n");
  printf("Jervis: Here's a recap of how many students you entered!  %d\n", totalStudents);
  printf("Jervis: Looks like the class average is: %.3f\n",(float) classTotal/totalStudents);
  printf("****************************************************\n\n");

  printf("Jervis: Oh I forgot to mention this code is written by a novice programmer;\n\nJervis: So that means everything you just entered isnt being saved anywhere!\n\n");
  printf("Jervis: Ok Gotta go Byeeeeeeee!\n\n");
  printf("\t*******************End Of Student Grade Management Program V1.1! :D ******************");
  return 0;
}
