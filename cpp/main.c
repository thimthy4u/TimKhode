#include<stdio.h>
int main()
{
    printf("----------Logic AND----------\n");
    printf("10 > 5 && 10==5     Answer = %d \n",10 > 5 && 10==5);
    printf("10 > 5 && 10==10     Answer = %d \n",10 > 5 && 10==10);
    printf("10 < 5 && 1>0==10     Answer = %d \n",10 < 5 && 10==10);

    printf("----------Logic OR----------\n");
    printf("10 > 5 || 10==5 Answer = %d \n",10 > 5 || 10==5);
    printf("10 > 5 || 10==10 Answer = %d \n",10 > 5 || 10==10);
    printf("10 < 5 || 10==10 Answer = %d \n",10 < 5 || 10==10);
    printf("10 < 5 || 10!=10 Answer = %d \n",10 < 5 || 10!=10);

    printf("----------Logic !----------\n");
    printf("!(10 > 5 || 10==5)   Answer = %d \n",!(10 > 5 || 10==5));
    printf("!(10 > 5 || 10==5)   Answer = %d \n",!(10 > 5 || 10==5));

    printf("\n\n***Note: 1 = True       0 = False");

    return 0;
}
