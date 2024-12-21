#include <stdio.h>
#include <math.h>

int main(){
    int op;
    printf ("Enter Operation You Wanna Do:\n 1-Add 2-Subtract 3-Multiplication 4-Division 5-Exponent\n 6-Square root 7-Remainder 8-Sin 9-Cos 10-Tan\n");
    scanf("%d", &op);
    switch (op) {
        case 1:{
        int a,b;
        printf ("Enter 1st number:");
        scanf( "%d", &a);
        printf ("Enter 2nd number:");
        scanf( "%d", &b);
        printf("Answer: %d\n", a+b);
        break;
        }
        case 2:{
        int a,b;
        printf ("Enter 1st number:");
        scanf( "%d", &a);
        printf ("Enter 2nd number:");
        scanf( "%d", &b);
        printf("Answer: %d\n ", a-b);
        break;
        }
        case 3:{
        int a,b;
        printf ("Enter 1st number:");
        scanf( "%d", &a);
        printf ("Enter 2nd number:");
        scanf( "%d", &b);
        printf("Answer: %d\n", a*b);
        break;
        }
        case 4:{
        int a,b;
        printf ("Enter 1st number:");
        scanf( "%d", &a);
        printf ("Enter 2nd number:");
        scanf( "%d", &b);
       if (b != 0)
                printf("Answer: %d\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        }
        case 5:{
        int a,b;
        printf ("Enter 1st number:");
        scanf( "%d", &a);
        printf ("Enter 2nd number:");
        scanf( "%d", &b);
        printf("Answer: %d\n", pow(a,b));
        break;
        }
        case 6:{
        int a;
        printf ("Enter 1st number:");
        scanf( "%d", &a);
        printf("Answer: %d\n", sqrt(a));
        break;
        }
        case 7:{
        int a,b;
        printf ("Enter 1st number:");
        scanf( "%d", &a);
        printf ("Enter 2nd number:");
        scanf( "%d", &b);
        if (b != 0)
                printf("Answer: %d\n", a % b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        }
        case 8:{
        float a;
        printf ("Enter angle:");
        scanf( "%f", &a);
        printf("Answer: %f\n", sinf(a));
        break;
        }
        case 9:{
        float a;
        printf ("Enter angle:");
        scanf( "%f", &a);
        double radians = a * 3.14 / 180.0;
        printf("Answer: %f\n", cos(radians));
        break;
        }
        case 10:{
        float a;
        printf ("Enter angle:");
        scanf( "%f", &a);
        printf("Answer: %f\n", tanf(a));
        break;
        }
    }
    return 0;
}