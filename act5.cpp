//Hernandez Ceseña Ivan Fernando  373077
// 07/09/23
//1) n numeros. 2) aleatorios 0-200. 3) aleatorios mayor y menor. 4) tabla multiplicar (1-20)
//NYP_ACT3_5_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu(void);
void n_numeros(void);
void aleatorios(void);
void num_mayor_menor(void);
void tabla_multiplicar(void);

int main()
{
    int opcion;

    opcion= menu();

    switch(opcion)
    {
        case 1:
        n_numeros();
        break;

        case 2:
        aleatorios();
        break;

        case 3:
        num_mayor_menor();
        break;

        case 4:
        tabla_multiplicar();
        break;
    }
}
int menu()
{
    int opcion;

    printf("menu\n");
    printf("1)numeros menores a n.\n");
    printf("2) numeros aleatorios.\n");
    printf("3)numeros aleatorios (mayor y menor).\n");
    printf("4)tabla de multiplicar\n");
    printf("elije una opcion: ");
    scanf("%d",& opcion);

    return opcion;
}

void n_numeros()
{
    int num;

    printf("\ndame un numero:\n");
    scanf("%d",& num);
    printf("\nel numero dado es: %d\n los numero menores son:\n", num);
    for(int i = 1; i < num; i++)
    {
        printf("%d  ", i);
    }
}

void aleatorios()
{
    int lista[40];

    srand(time(NULL));
    for(int i=0; i<40; i++)
    {
        lista[i]=rand() % 201;
    }

    printf("\nlista de 40 numeros aleatorios entre 0 y 200: \n");
    int num_par=0, num_impar=0;
    int total_par=0, total_impar=0;
    for( int i=0; i<40; i++)
    {
        if(lista[i] % 2 == 0)
        {
            printf("%d (par)\n", lista[i]);
            total_par= total_par + lista[i];
            num_par++;
        }
        else
        {
            printf("%d (impar)\n", lista[i]);
            total_impar= total_impar + lista[i];
            num_impar++;
        }
    }

    printf("la cantidad de numeros pares es: %d\n", num_par);
    printf("la cantidad de numeros impares es: %d\n", num_impar);
    printf("la suma de los numeros pares es: %d\n", total_par);
    printf("la suma de los numeros impares es: %d\n", total_impar);
}

# define N 35
void num_mayor_menor()
{
    int lista[N], num_mayor=1, num_menor=199;

   
    printf("\n");
    srand(time(NULL));
    for(int i=0; i<N; i++)
    {
        lista[i]= rand()%101 + 100;
    }

    for( int i=0; i<N; i++)
    {
        //lista[i]= 100 + (rand()%101);
        

        if(lista[i] > num_mayor)
        {
            num_mayor= lista[i];
        }
        if(lista[i] < num_menor)
        {
            num_menor= lista[i];;
        }
    }

     printf("\nlista numeros 100-200\n");
    for(int i=0; i<N; i++)
    {
        printf("%d\n", lista[i]);
        if(lista[i] == num_mayor)
        {
            printf("%d (mayor)\n", lista[i]);
        }
        if(lista[i] == num_menor)
        {
            printf("%d (menor)\n", lista[i]);
        }
    }

    printf("\nel numero mayor es: %d", num_mayor);
    printf("\nel numero menor es: %d", num_menor);
}

void tabla_multiplicar()
{
    int num, total, i;

    printf("dame un numero entre 1 y 20\n");
    scanf("%d",& num);

    for(i=1; i<=10; i++)
    {
        total= num*i;
        printf("%d x %d = %d\n", num, i, total);
    }
}
