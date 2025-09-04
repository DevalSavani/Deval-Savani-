#include <stdio.h>

int main() {
    float gs, disc, ns;

    printf("Enter Gross Sales: ");
    scanf("%f", &gs);

    if (gs > 20000)
        disc = gs * 0.15;   
    else if (gs > 10000)
        disc = gs * 0.10;  
    else
        disc = gs * 0.05;   

    ns = gs - disc;

    printf("Net Sales = %.2f\n", ns);

    return 0;
}
