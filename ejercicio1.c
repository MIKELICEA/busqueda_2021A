//López Licea Miguel

#include <stdio.h>
#define N 10

int buscarNumero(int arr[N], int b);
int main()
{
    int arreglo[N];
    int buscar;
    int i;
    int posicion;

    for(i = 0; i < N; i++)
    {
        printf("arreglo[%d]: ", i);
        scanf("%d", &arreglo[i]);
    }

    printf("Dime el numero a buscar: ");
    scanf("%d", &buscar);

    posicion = buscarNumero(arreglo, buscar);

    if(posicion != -1)
    {
        printf("\nEl numero a buscar se encontro en la posicion %d\n", posicion);
    } else 
    {
        printf("\nEl numero a buscar no existe en el arreglo\n");
    }

    return 0;
}

int buscarNumero(int arr[N], int b)
{
    int posicion = -1;

    for(int i; i < N && posicion == -1; i++)
    {
        if(arr[i]== b)
        posicion = i ;
    }

    return posicion;
}