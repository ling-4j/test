#include <stdio.h> 

int main () 
{
    char operator;
    float a,b;
    printf (" nhap phep tinh (+, - ,* ,/): ");
    scanf ("%c", &operator);
    printf ("\n nhap 2 so can tinh: ");
    scanf ("%f%f", &a,&b);
    switch (operator)
    {
    case '+':
        printf (" %1.f + %1.f = %1.f", a, b, a+b);
        break;
    case '-':
        printf ("%f - %f = %f", a, b, a-b);
        break;
    case '*':
        printf (" %f * %f = %f", a, b, a*b);
        break;
        // neu khong dung 1 trong 4 phep tinh +, -, x, / =>//
        default: 
        printf ("loi chuong trinh");
    }
    return 0;
}
