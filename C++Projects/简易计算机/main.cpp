#include <iostream>

int main()
{
    float a, b;
    char c, d;

    do
    {
        printf("Please enter the expression:\n");
        scanf("%f %c%f", &a, &c, &b);
        if (c == '/' && b == 0)
        {
            printf("Division by zero!\n");
        }
        else
        {
            switch (c)
            {
            case '-' :
                printf("%f - %f = %f\n", a, b, a - b);
                break;
            case '+' :
                printf("%f + %f = %f\n", a, b, a + b);
                break;
            case '*' :
                printf("%f * %f = %f\n", a, b, a * b);
                break;
            case '/' :
                printf("%f / %f = %f\n", a, b, a / b);
                break;
            default:
                printf("Unknown operator!\n");
            }
        }
        getchar();
        printf("Do you want to continue(Y/N or y/n)?"); 
        scanf("%c",&d); 
	}
    while (d == 'Y');
    return 0;

}
