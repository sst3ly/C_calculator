#include <stdio.h>
#include <stdlib.h>
int restart;
int main()
{
    do{
        double num1;
        double num2;
        int calcOperationChoice;
        int calcAgain;
        int loopVarOne = 0;
        int loopVarTwo = 0;
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);
        printf("1=multiply 1 x 2, 2=divide 1 / 2, 3=add 1 + 2, 4=subtract 1 - 2, 5=power 1^2. Pick one: ");
        scanf("%d", &calcOperationChoice);
        if (calcOperationChoice == 1) {
            double numMultiply = num1*num2;
            printf("Number one times number two = %f\n", numMultiply);
        }
        if (calcOperationChoice == 2){
            double numDivide = num1 / num2;
            printf("Number one divided by number two = %f\n", numDivide);
        }
        if (calcOperationChoice == 3){
            double numAdd = num1 + num2;
            printf("Number one plus number two = %f\n", numAdd);
        }
        if (calcOperationChoice == 4){
            double numSubtract = num1 - num2;
            printf("Number one minus number two = %f\n", numSubtract);
        }
        if (calcOperationChoice == 5) {
            double numPower = pow(num1, num2);
            printf("Number one to the power of number two = %f\n", numPower);
        }
        if (calcOperationChoice >= 6) {
            printf("You have not selected a given option.");
            return 0;
        }
        printf("Would you like to make another calculation? 1=yes 2=no: ");
        scanf("%d", &restart);
    }
    while(restart == 1);
}

