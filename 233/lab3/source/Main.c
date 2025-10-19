#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, d, e, f, g;
    printf("Total distance driven today (km): ");
    scanf("%f", &a);
    printf("Price of gasoline per liter: ");
    scanf("%f", &b);
    printf("Average kilometers per liter: ");
    scanf("%f", &c);
    printf("Parking fee for one day: ");
    scanf("%f", &d);
    printf("Toll fee for one day: ");
    scanf("%f", &e);
    f = (a / c) * b;  
    g = f + d + e;     

    printf("Total cost for one day = %.1f\n", g);

    system("pause");
    return 0;
}
