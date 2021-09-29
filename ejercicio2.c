//López Licea Miguel

#include <stdio.h>
#define N 10

int BuscarNumMenor(int arr[N]);
int pos(int arr[N]);

int main()
{
    int arreglo[N];
    int i;
    int menor;
    int posicion;

    for(i = 0; i < N; i++)
    {
        printf("arreglo[%d]: ", i);
        scanf("%d", &arreglo[i]);
    }
    
    menor = BuscarNumMenor(arreglo);
    posicion = pos(arreglo);

    printf("\nEl numero menor es %d y se encontro en la posicion %d\n", menor, posicion);
    

    return 0;
}

int BuscarNumMenor(int arr[N]) //Funcíon: Busqueda del número menor
{
  int i;
  int menor = 10000;

 for(i = 0; i < N; i++) 
{
    if (arr[i] < menor)
    {
       menor = arr[i];
    }
}    

return menor;

}

int pos(int arr[N]) //Función:Posición en la que se encuentra el número menor
{
  int i;
  int pos;
  int menor = 10000;

 for(i = 0; i < N; i++) 
{
        if (arr[i] < menor)
        {
        menor = arr[i];
        pos = i;
        }
}   

return pos;
}