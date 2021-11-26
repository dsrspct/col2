#include <stdio.h>

int main(void)
{
    int a;
    int b;
    int c;

    scanf ("%d", &a);
    scanf ("%d", &b);

    c = b;
    b = 0;
    if(a > 1000 || b > 1000)
    {
        printf("Введено число більше ліміту\n");
    }
    while (a > 1 && a <= 1000 && b <= 1000)
    {
        c+=4;
        b+=c;
        a--;
    }
    printf ("%d\n", b);
}
