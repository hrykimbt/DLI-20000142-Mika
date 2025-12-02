#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*struct for printing the history
typedef struct
{
  float *number1;
  float *number2;
  char *operator[5];
  float *results;
}Calculation;

void printCalc (Calculation calc);
*/



int main()
{
  float num1;
  float num2;
  int op;
  float result;
  
  char replay='y';
  
  printf("---CALCULATOR---\n");
  while (replay == 'y' || replay == 'Y')
  {
    //LAYOUT
    printf("Enter an operator:\n ");
    printf("1. Addition\n ");
    printf("2. Subtraction\n ");
    printf("3. Multiplication\n ");
    printf("4. Division\n ");
    printf("5. Root\n ");
    printf("6. Sin\n ");
    printf("7. Cos\n ");
    printf("8. Tan\n ");
    printf("----------------\n ");
    printf("Press 0 to exit\n ");
    printf("Selected: ");
    scanf(" %d", &op);
    

      //EXIT COMMAND
      if (op == 0)
      {
        printf("Exiting program...\n");
        break;
      }

      //VALIDATING OPERATOR
      if (op < 0 || op > 8)
      {
        printf("Invalid Operator.\n");
      }

      
      if (op >=1 && op <9)
      {
        printf("Insert a number:");
        scanf(" %f", &num1);
      }
        if (op >= 1 && op <5 )
        {
          printf("Insert another number: ");
          scanf("%f", &num2);
        }
       
      
      //OPERATORS 
      switch (op)
      {
      case 1:
        result = num1 + num2;
        printf("Result: %.4g\n", result);

        break;
      case 2: 
        result = num1 - num2;
        printf("Result: %.4g\n", result);

        break;
      case 3:
        result = num1 * num2;
        printf("Result: %.4g\n", result);

        break;
      case 4: 
        if (num2 == 0)
        {
          printf("Cannot be divided.\n");
          break;
        }

        result = num1 / num2;
        printf("Result: %.4g\n", result);

        break;
      case 5:
        result = sqrt(num1);
        printf("Result : %.4g\n", result); 

        break;
      case 6:
        result = sin (num1);
        printf("%.4g\n", result);

        break;
      case 7:
        result = cos(num1);
        printf("%.4g\n", result);

        break;
      case 8:
        result = tan (num1);
        printf("%.4g\n",result);

        break;
      }
      // CALC LOOP
      printf("Continue calculating? (Y/N): ");
      scanf(" %c", &replay);
      
      //ERROR MESSAGE FOR (Y/N)
      do
      {
        printf("Invalid. Try again.\n");
        printf("Continue calculating? (Y/N): ");
        scanf(" %c", &replay);
      }while (replay != 'Y' || replay != 'y' || replay != 'N' || replay != 'n' );
      //Exiting Program
      if (replay == 'N'|| replay == 'n')
      {
          printf("Quitting calculator...\n");
          break;
      }

      
    }

/*MAKE COMMAND THAT ASKS ABOUT STORING RESULT. (after, printing the result)
printf("Would you like to store this result?");
scanf("")

//WHEN PAST RESULT IS STORED    
if (//smth that can detect)
{
  printf ("Detected store number (%.4g), would you like to use? [Y/N]\n" , &result);
  scanf ("%c" &y); //the answer, add this when its asking for num1 & num2;  
  
}*/
    
    

    
    
   
return 0;  
}

/*void printCalc (Calculation calc)
{
  printf ("%f %s %f = %f", calc.number1, calc.operator, calc.number2, calc.results);
}
//PRINT HISTORY OF CALCULATIONS
void printHistory
{
int list[10];  
int length = sizeof(list) / sizeof(list[0]);
for (i=0; i<10; i++)
{
  // this is for the array list
  printf ("%f %s %f = %f", *calc[i].number1, *calc[i].operator, *calc[i].number2, *calc[i].results);
}
//if list is already > 10 then delete the top one*/


