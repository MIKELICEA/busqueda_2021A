//López Licea Miguel

#include <stdio.h>
#define N 10

int BuscarNumMayor(int arr[N]);
int pos(int arr[N]);

int main()
{
    int arreglo[N];
    int i;
    int mayor;
    int posicion;

    for(i = 0; i < N; i++)
    {
        printf("arreglo[%d]: ", i);
        scanf("%d", &arreglo[i]);
    }
    
    mayor = BuscarNumMayor(arreglo);
    posicion = pos(arreglo);

    printf("\nEl numero mayor es %d y se encontro en la posicion %d\n", mayor, posicion);
    

    return 0;
}

int BuscarNumMayor(int arr[N]) //Funcíon: Busqueda del número mayor
{
  int i;
  int mayor = 0;

 for(i = 0; i < N; i++) 
{
    if (arr[i] > mayor)
    {
       mayor = arr[i];
    }
}    

return mayor;

}

int pos(int arr[N]) //Función: Posición en la que se encuentra el número mayor
{
  int i;
  int pos;
  int mayor = 0;

 for(i = 0; i < N; i++) 
{
        if (arr[i] > mayor)
        {
        mayor = arr[i];
        pos = i;
        }
}   

return pos;
}