#include<stdio.h>
#define M 3 //Número de Renglones
#define N 3 //Número de Columnas

int renglon1 (int arrBi[M][N]);

int main()
{

int i, j;
int arrBidim[N][M];


for(i = 0; i < M; i++) //Captura de Datos por Renglón
{
    for(j = 0; j < N; j++) 
    {
        printf("matriz[%d][%d]: ", i, j);
        scanf("%d", &arrBidim[i][j]);
    }
}

renglon1(arrBidim);

return 0;

}


int renglon1(int arrBi[M][N])
{
    int i, j;
    int renglon;
    int menor = 10000;


    for(i = 0; i < M; i++) 
{
    for(j = 0; j < N; j++) 
    {
        if (arrBi[i][j] < menor)
    {
       menor = arrBi[i][j];
       renglon = i;
    }

    }

    printf("Numero menor del renglón %d: %d \n", renglon + 1, menor );
    menor = 10000; //Reset de valor del menor
}

return 0;

}