#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float num1;
  float num2;
  int op;
  float result;
  char replay='y';
  
  while (replay == 'y' || replay == 'Y')
  {
    //LAYOUT
    printf("---CALCULATOR---\n");
    printf("Enter an operator:\n ");
    printf("1. Addition\n ");
    printf("2. Subtraction\n ");
    printf("3. Multiplication\n ");
    printf("4. Division\n ");
    printf("5. Root\n ");
    printf("6. Sin\n ");
    printf("7. Cos\n ");
    printf("8. Tan\n ");
    printf("--------\n ");
    printf("Press 0 to exit\n ");
    printf("Selected: ");
    scanf(" %d", &op);
    

    //EXIT COMMAND
      if (op == 0)
      {
        exit(0);
      }
    //VALIDATING
      if (op < 0 || op > 8)
      {
        printf("Invalid Operator.\n");
      }

      if (op >0 && op < 9 )
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
      
      if (op == 1) 
      {
        result = num1 + num2;
        printf("Result: %.4g\n", result);
      }
      else if (op == 2) 
      {
        result = num1 - num2;
        printf("Result: %.4g\n", result);
      }
      else if (op == 3) 
      {
        result = num1 * num2;
        printf("Result: %.4g\n", result);
      }
      else if (op == 4) 
      {
        result = num1 / num2;
        printf("Result: %.4g\n", result);
      }
      else if (op == 5)
      {
        result = sqrt(num1);
        printf("Result : %.4g\n", result);
      }      
      else if (op == 6)
      {
        result = sin (num1);
        printf("%.4g\n", result);
      }
      else if (op == 7)
      {
        result = cos(num1);
        printf("%.4g\n", result);
      }
      else if (op == 8)
      {
        result = tan (num1);
        printf("%.4g\n",result);
      }
    
       
      // for Loop 
      printf("Continue calculating? (Y/N): ");
      scanf(" %c", &replay);

      //list store 10


    }
   
    

    
    

    
    
   
return 0;  
}
