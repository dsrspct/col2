#include <stdio.h>

int main(void) {
    int a;

    scanf ("%d", &a);

    int b[a];
    int c[4] = {-2147483647, 0, 2147483647, 0};

    for(int i = 0; i < a; i++) 
    {
        scanf ("%d", &b[i]);
    }

    for(int i = 0; i < a; i++) 
    {
        if(c[0] < b[i]) {
            c[0] = b[i];
            c[1] = i;
        }

        if(c[2] > b[i]) {
            c[2] = b[i];
            c[3] = i;
        }
    }

    b[c[1]] = c[2];
    b[c[3]] = c[0];

    for(int i = 0; i < a; i++) 
    {
        printf ("%d\n", b[i]);
    }
}
