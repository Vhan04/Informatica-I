//*Nombre: Piendibene Isabella
//Comision: 2
//Nombre del programa: Sumatoria
//

#include<stdio.h>
#include<math.h>

int main()
{
    int n, i, y=0; 
    int sumat1=0, sumat2=0;

    printf("ingrese un valor para n: \n\n");
    scanf("%d", &n);

    for (i=1; i<=n; i++)      
    {
        sumat1+=5*(pow(i,2));
    }
    
    for (i=1; i<=n; i++);
    {
        sumat2+=(6*i)/(i+8);
    }

    y=sumat1+sumat2;

    printf("\n\nEl resultado de Y es: %d \n\n", y);

    return 0;    
}