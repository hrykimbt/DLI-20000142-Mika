#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void printHistory (char equation[10][100],int listSize);

int main()
{
  float num1;
  float num2;
  int op;
  float result;
  char equation [10][100];
  int listSize = sizeof(equation) / sizeof (equation[0]);
  int historyIndex = 0;
  //initialize history buffer to empty strings
  for (int i = 0; i < listSize; ++i) equation[i][0] = '\0';
  //Start looping
  char replay='y';
  

  printf("---CALCULATOR---\n");
  while (replay == 'y' || replay == 'Y')
  {

    //LAYOUT
    printf("Enter a number to select an operator:\n ");
    printf("----------------\n ");    
    printf("1. Addition\n ");
    printf("2. Subtraction\n ");
    printf("3. Multiplication\n ");
    printf("4. Division\n ");
    printf("5. Root\n ");
    printf("6. Sin\n ");
    printf("7. Cos\n ");
    printf("8. Tan\n ");
    printf("9. Access History\n");
    printf("----------------\n ");
    printf("Press 0 to exit\n ");
    printf("Selected: ");
    scanf(" %d", &op);
    

    //EXIT COMMAND
    if (op == 0)
    {
      printf("Exiting program...\n");
      exit(0);
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
        printf("Insert another number:");
        scanf(" %f", &num2);
      }
       
      
    //OPERATORS 
    switch (op)
    {
    case 1:
      result = num1 + num2;
      sprintf(equation[historyIndex]," %.4g + %.4g = %.4g\n", num1, num2, result);
      printf("%s", equation[historyIndex]);
      historyIndex = (historyIndex + 1) % listSize;
      break;
    case 2: 
      result = num1 - num2;
      sprintf(equation[historyIndex]," %.4g - %.4g = %.4g\n", num1, num2, result);
      printf("%s", equation[historyIndex]);
      historyIndex = (historyIndex + 1) % listSize;
      break;
    case 3:
      result = num1 * num2;
      sprintf(equation[historyIndex]," %.4g * %.4g = %.4g\n", num1, num2, result);
      printf("%s", equation[historyIndex]);
      historyIndex = (historyIndex + 1) % listSize;
      break;
    case 4: 
      if (num2 == 0)
      {
        printf("Cannot be divided.\n");
          
        break;
      }

      result = num1 / num2;
      sprintf(equation[historyIndex]," %.4g / %.4g = %.4g\n", num1, num2, result);
      printf("%s",equation[historyIndex]);
      historyIndex = (historyIndex + 1) % listSize;

      break;
    case 5:
      if (num1 < 0)
      {
        printf("Square root cannot be calculated.\n");
      }
      result = sqrt(num1);
      sprintf(equation[historyIndex],"Square root of %.4g = %.4g\n", num1, result);
      printf("%s",equation[historyIndex]);
      historyIndex = (historyIndex + 1) % listSize;

      break;
    case 6:
      result = sin (num1);
      sprintf(equation[historyIndex],"sin (%.4g) = %.4g\n", num1, result);
      printf("%s",equation[historyIndex]);
      historyIndex = (historyIndex + 1) % listSize;

      break;
    case 7:
      result = cos(num1);
      sprintf(equation[historyIndex],"cos (%.4g) = %.4g\n", num1, result);
      printf("%s",equation[historyIndex]);
      historyIndex = (historyIndex + 1) % listSize;

      break;
    case 8:
      result = tan (num1);
      sprintf(equation[historyIndex],"tan (%.4g) = %.4g\n", num1, result);
      printf("%s",equation[historyIndex]);
      historyIndex = (historyIndex + 1) % listSize;

      break;
      }

    printHistory (equation,listSize);

    // CALC LOOP
    printf("Continue calculating? (Y/N): ");
    scanf(" %c", &replay);
  }  

 
    
    //ERROR MESSAGE FOR (Y/N)
    while (replay != 'Y' && replay != 'y' && replay != 'N' && replay != 'n' )
    {
      printf("Invalid. Try again.\n");
      printf("Continue calculating? (Y/N): ");
      scanf(" %c", &replay);
    }


    //Exiting Program
    if (replay == 'N'|| replay == 'n')
      {
        printf("Quitting calculator...\n");
        exit(0);
      }


return 0;  
}

void printHistory (char equation[10][100],int listSize)
{
  printf("----------------\n");
  printf("Past History\n");
  for (int i = 0; i < listSize; ++i) {
    if (equation[i][0] == '\0') continue; //find empty strings 

    printf("%s", equation[i]);
  }
}
