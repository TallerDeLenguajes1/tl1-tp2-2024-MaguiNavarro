#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// codigo a completar
#define N 20
int main()
{
   srand(time(NULL));
    int i;
    double vt[N];
    double *punt= &vt[0];

for ( i = 0; i < N; i++)
{

    vt[i] = 1 + rand() % 100;
    printf("%f\n" , *punt);
    punt++;
}

    return 0;
}

