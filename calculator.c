
#include <stdio.h>

int main()
{
    float num1;
    float num2;
    char op;
    float result;
    char replay;

    
    
        //layout
        printf("---CALCULATOR---\n");
        printf("Enter an operator:\n");
        printf("|+,-,*,/|\n");
        printf("|sin (s) , cos (c), tan (t), root (r)|\n");
        printf("--- CHOSEN OPERATOR ---\n");
        scanf("%c", &op);
   
        if (op == '+'|| op == '-'|| op == '*'|| op == '/'||op == 's'|| op == 'c'|| op == 't'|| op == 'r') 
        {
        printf("Insert first number:");
        scanf(" %f", &num1);
        }
        else
        {
          printf("Invalid Operator.\n");
        }
    
        if (op == '+'|| op == '-'|| op == '*'|| op == '/') 
        {
        printf("Insert second number:");
        scanf(" %f", &num2);
    
     

        //operators 
        if (op == '+') 
        {
        result = num1 + num2;
        printf("Result: %.4f\n", result);
        }

        else if (op == '-') {
        result = num1 - num2;
        printf("Result: %.4f\n", result);
        }

        else if (op == '*') {
        result = num1 * num2;
        printf("Result: %.4f\n", result);
        }

       else if (op == '/') {
        result = num1 / num2;
        printf("Result: %.4f\n", result);
        }
        else 
        {
          printf("Error: Invalid. Cannot be calculated.\n");
        }
        

        //sin cos tan

        // for Loop 
        printf("Continue calculating? (Y/N): ");
        scanf(" %c", &replay);

    }
    

    
    

    
    
   
  return 0;  
}
