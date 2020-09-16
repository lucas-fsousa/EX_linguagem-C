#include<stdio.h>
#include <math.h>

int main()
{
    float x, y;
    printf("Digite o valor de X: ");
    scanf("%f", &x);
    if(x < 1){
        y = x;
    }else if(x == 1){
        y = 0;
    }else{
        y = pow(x, 2);
    }
    printf("O valor de Y sera %.2f, pois o valor de X equivale a %.2f", y, x);
    return 0;
}
