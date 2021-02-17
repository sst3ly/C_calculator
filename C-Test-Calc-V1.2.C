#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int restart;
    do{
        double num1;
        double num2;
        int calcOperationChoice;
        int calcAgain;
        int loopVarOne = 0;
        int loopVarTwo = 0;
        char squareRootSymbol = 251;
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);
        printf("1=multiply 1 x 2, 2=divide 1 / 2, 3=add 1 + 2, 4=subtract 1 - 2, 5=power 1^2, 6=square root %c1/%c2, 7=cube root num1 or num2. Pick one: ", squareRootSymbol, squareRootSymbol);
        scanf("%d", &calcOperationChoice);
        switch(calcOperationChoice) {
            case 1: ;
                double numMultiply = num1*num2;
                printf("Number one times number two = %f\n", numMultiply);
                break;
            case 2: ;
                double numDivide = num1 / num2;
                printf("Number one divided by number two = %f\n", numDivide);
                break;
            case 3: ;
                double numAdd = num1 + num2;
                printf("Number one plus number two = %f\n", numAdd);
                break;
            case 4: ;
                double numSubtract = num1 - num2;
                printf("Number one minus number two = %f\n", numSubtract);
                break;
            case 5: ;
                double numPower = pow(num1, num2);
                printf("Number one to the power of number two = %f\n", numPower);
                break;
            case 6: ;
                int numChoiceRoot;
                printf("Would you like to use num1 or num2 for the square root? ");
                scanf("%d", &numChoiceRoot);
                if (numChoiceRoot == 1) {
                    double num1Root = sqrt(num1);
                    printf("The square root of number 1 is %f\n", num1Root);
                }
                if (numChoiceRoot == 2) {
                    double num2Root = sqrt(num2);
                    printf("The square root of number 2 is %f\n", num2Root);
                }
                break;
            case 7: ;
                int numChoiceCubeRt;
                printf("Would you like to use num1 or num2 for the cube root? ");
                scanf("%d", &numChoiceCubeRt);
                if (numChoiceCubeRt == 1) {
                    double num1CRoot = cbrtf(num1);
                    printf("The cube root of number 1 is %f\n", num1CRoot);
                }
                if (numChoiceCubeRt == 2) {
                    double num2CRoot = cbrtf(num2);
                    printf("The cube root if number 2 is %f\n", num2CRoot);
                }
                break;
            default:
                printf("You have not selected a given option.");
        }
                
            printf("Would you like to make another calculation? 1=yes 2=no: ");
            scanf("%d", &restart);
            
    } while(restart == 1);
        return 0;
}
