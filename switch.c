#include <stdio.h>

int main() {
    
    int number = 7;

    switch(number)
    {
        case 10:
        printf("number 10 is greater than 5");
        break;

        case 7:
         printf("number 7 is greater than  5");
        break;

        case 6:
         printf("number 6 is greater than  5");
        break;

        case 5:
         printf("Hurray you are correct!");
        break;

         default:
             printf("Number not found!");
    }

    // switch(operation)
    // {
    //     case '+':
    //         printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
    //         break;

    //     case '-':
    //         printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
    //         break;

    //     case '*':
    //         printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
    //         break;

    //     case '/':
    //         printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
    //         break;

    //     // operator doesn't match any case constant +, -, *, /
    //     default:
    //         printf("Error! operator is not correct");
    // }

    return 0;
}