#include <stdio.h>
#include <stdlib.h>

typedef enum {
  Addition,
  Subtraction,
  Multiblication,
  Division,
  Remind,
  And,
  Or,
  Not,x2
}Operation;

int main(){

    int x,y;
    char operation;
    Operation oper;

    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);
    printf("Enter one of operation (+ , - , * , / , %% , & , | , ! ): ");
    getchar();
    operation=getchar();

    switch(operation){
    case '+':
      oper = Addition;
      break;
    case '-':
      oper = Subtraction;
      break;
    case '*':
      oper = Multiblication;
      break;
    case '/':
      oper = Division;
      break;
    case '%':
      oper = Remind;
      break;
    case '&':
      oper = And;
      break;
    case '|':
      oper = Or;
      break;
    case '!':
      oper = Not;
      break;
    default:
      printf("Invalid operation, Please try again \n");
      return 0;
    }

    switch (oper) {
    case Addition:
      printf("%d + %d = %d\n", x, y, x + y);
      break;
    case Subtraction:
      printf("%d - %d = %d\n", x, y, x - y);
      break;
    case Multiblication:
      printf("%d * %d = %d\n", x, y, x * y);
      break;
    case Division:
      if (y == 0) {
        printf("Error: division by zero\n");
        break;
      }
      printf("%d / %d = %d\n", x, y, x / y);
      break;
    case Remind:
      printf("%d %% %d = %d\n", x, y, x % y);
      break;
    case And:
      printf("%d & %d = %d\n", x, y, x & y);
      break;
    case Or:
      printf("%d | %d = %d\n", x, y, x | y);
      break;
    case Not:
      printf("!%d = %d\n", x, !y);
      printf("!%d = %d\n", x, !y);
      break;
  }
  printf("The Size of enum i s: %d bytes",sizeof(oper));
    /*size of enum is the same size of int As Stored
    so when we add extra members the size remains the same 4 bytes */
    return 0;
}
