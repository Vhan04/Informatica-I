//*Nombre: Piendibene Isabella
//Comision: 2
//Nombre del programa: -.
//MATRICES Y FUNCIONES
//

#include<stdio.h>
#include<math.h>
#include <time.h>

//double func_sum_r (int n)                     //FUNCION RECURSIVA
//{
//    if (n <= 1)
//        return((5.0*n)/(n+10.0));
//              else
//                  return((5.0*n)/(n+10.0))+func_sum_r(n-1);
//        }

//double func_sum_i (int n)                     FUNCION ITERATIVA
//{
//    double suma = 0.0;
//    int i = 1;
//
//    for (i = 1; i <= n; i++)
//    {
//        suma += ((5.0*i)/(i+10.0));
//    }
//    return suma;
//}

//int main ()
//{
//    double sum;
//    int n;
//
//    printf("ingrese el valor de n:  \n");
//    scanf("%d", &n);
//
//    sum = func_sum_r(n);
//
//    printf("El resultado es %lf", func_sum_r(n));
//
//    return 0;
//}

int main ()
{
    int matriz [10][10];
    int i = 0, j = 0;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
