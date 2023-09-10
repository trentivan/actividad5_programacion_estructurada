//Hernandez Ceseña Ivan Fernando  373077
// 10/09/23
// 1) promedio 3 calif. 2) piedra papel tijera anidado. 
//3) piedra papel tijera multiple. 4)num mayor. 5) num medio. 
//6) num ascendente. 7) horoscopo
//NYP_ACT3_1-7_932

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  menu(void);
void promedio_3cali(void);
void ppt_anidado(void);
void ppt_multiple(void);
void numero_mayor(void);
void numero_medio(void);
void numeros_ascendente(void);
void horoscopo(void);

int main()
{
    int opcion;

    menu();
    scanf("%d",& opcion);

    switch(opcion)
    {
        case 1:
        promedio_3cali();
        break;

        case 2:
        ppt_anidado();
        break;

        case 3:
        ppt_multiple();
        break;

        case 4:
        numero_mayor();
        break;

        case 5:
        numero_medio();
        break;

        case 6:
        numeros_ascendente();
        break;

        case 7:
        horoscopo();
        break;
    }
    return 0;
}

void menu()
{
    printf("1) proomedio de 3 calificaciones\n");
    printf("2) piedra papel o tijera anidado\n");
    printf("3) piedra papel o tijera multiple\n");
    printf("4) 3 numeros y dar el mayor\n");
    printf("5) 3 numeros y dar el del medio\n");
    printf("6) dar 3 numeros y darlos en orden ascendente\n");
    printf("7) horoscopo\n");
    printf("dame la opcion que quieres ejecutar\n");
}

void promedio_3cali()
{
    int cal1, cal2, cal3;
    float prom;

    printf("\ndame tu primer calificacion: ");
    scanf("%d",& cal1);
    printf("\ndame tu segunda calificacion: ");
    scanf("%d",& cal2);
    printf("\ndame tu tercer calificacion: ");
    scanf("%d",& cal3);

    prom= (cal1 + cal2 + cal3)/3;

    if(prom>90)
     {
        if(prom>90 && prom<100)
        {
            printf("muy bien");
        }
        else
        {
            if(prom<=100)
            {
                printf("excelente");
            }
            else
            {
                printf("error en promedio");
            }
        }
    }
    else
    {
        if(prom>80)
        {
            printf("bien");
        }
        else
        {
            if(prom>60)
            {
                if(prom>70)
                {
                    printf("regular");
                }
                else
                {
                    printf("suficiente");
                }
            }
            else
            {
                if(prom>30)
                {
                    printf("extraordinario");
                }
                else
                {
                    printf("repetir");
                }
            }
        }
    }
}

void ppt_anidado()
{

    int j=1,m,puntajej,puntajem;

    printf("CHINCHAMPU\n");
    printf("1.Piedra\n");
    printf("2.Papel\n");  
    printf("3.Tijera\n");
    printf("Ingresa 0 para salir\n");
        
        
    while(j!=0)
    {        
        printf("\nEscoje tu opcion: ");scanf("%d",&j);

        srand(time(NULL));
        m=1+rand()%(3-1+1);

     
        if (j==1)
        {
            if (m==1)
            {
                printf("Empate!");
            }
            else
            {
                if (m==2)
                {
                    printf("Gana Papel-Maquina");
                    puntajem++;
                }
                else
                {
                    if (m==3)
                    {
                        printf("Gana Piedra- Jugador");
                        puntajej++;
                    }
                    
                }
            }
            
        }
        
        if (j==2)
        {
            if (m==2)
            {
                printf("Empate!");
            }
            else
            {
                if (m==1)
                {
                    printf("Gana Papel-Jugador");
                    puntajej++;
                }
                else
                {
                    if (m==3)
                    {
                        printf("Gana Tijera- Maquina");
                        puntajem++;
                    }
                }
            } 
        }
        if (j==3)
        {
            if (m==3)
            {
                printf("Empate!");
            }
            else
            {
                if (m==1)
                {
                    printf("Gana piedra-Maquina");
                    puntajem++;
                }
                else
                {
                    if (m==2)
                    {
                        printf("Gana Tijera- Jugador");
                        puntajej++;
                    }
                }
            } 
        }
        if (j>3)
        {
            printf("Selecciona una opcion valida\n");
        }
        
    }

    printf("\nPuntaje Jugador: %d puntos",puntajej);
    printf("\nPuntaje Maquina: %d puntos",puntajem);
}

void ppt_multiple()
{

    int j=1,m,puntajej,puntajem;
    srand(time(NULL));

    printf("CHINCHAMPU\n");
    printf("1.Piedra\n");
    printf("2.Papel\n");  
    printf("3.Tijera\n");
    printf("Ingresa 0 para salir\n");
        
        
    while(j!=0)
    {        
        printf("\nEscoje tu opcion: ");scanf("%d",&j);

        m=1+rand()%(3-1+1);

     
        switch (j)
        {
        case 1:
             if (m==1)
            {
                printf("Empate!");
            }
            else
            {
                if (m==2)
                {
                    printf("Gana Papel-Maquina");
                    puntajem++;
                }
                else
                {
                    if (m==3)
                    {
                        printf("Gana Piedra- Jugador");
                        puntajej++;
                    }
                    
                }
            }

            break;
        case 2:
            if (m==2)
            {
                printf("Empate!");
            }
            else
            {
                if (m==1)
                {
                    printf("Gana Papel-Jugador");
                    puntajej++;
                }
                else
                {
                    if (m==3)
                    {
                        printf("Gana Tijera- Maquina");
                        puntajem++;
                    }
                }
            } 
            break;
        case 3:
            if (m==3)
            {
                printf("Empate!");
            }
            else
            {
                if (m==1)
                {
                    printf("Gana piedra-Maquina");
                    puntajem++;
                }
                else
                {
                    if (m==2)
                    {
                        printf("Gana Tijera- Jugador");
                        puntajej++;
                    }
                }
            } 
            break;
        case 0:
            printf("Fin del juego");
            break;
        default:
            printf("Selecciona una opcion valida\n");
            break;
        }
        
    }

    printf("\nPuntaje Jugador: %d puntos",puntajej);
    printf("\nPuntaje Maquina: %d puntos",puntajem);
}

void numero_mayor()
{
    int num1, num2, num3;

    printf("Dame el primer numero\n");
    scanf("%d",& num1);
    printf("Dame el segundo numero\n");
    scanf("%d",& num2);
    printf("Dame el tercer numero\n");
    scanf("%d",& num3);

    if(num1>num2 && num1> num3)
    {
        printf("el mayor es: %d", num1);
    }
    if(num2 > num1 && num2 > num3)
    {
        printf("el mayor es: %d", num2);
    }
    if(num3>num1 && num3> num2)
    {
        printf("el mayor es: %d", num3);
    }
}

void numero_medio()
{
    int num1, num2, num3;

    printf("Dame el primer numero\n");
    scanf("%d",& num1);
    printf("Dame el segundo numero\n");
    scanf("%d",& num2);
    printf("Dame el tercer numero\n");
    scanf("%d",& num3);

    if((num1 > num2 && num3 > num1)  ||  (num1 > num3 && num2 > num1))
    {
        printf("el numero del medio es: %d", num1);
    }
    if((num2 > num1 && num3 > num2)  ||  (num1 > num2 && num2 > num3))
    {
        printf("el numero del medio es: %d", num2);
    }
    if((num3>num1 && num2> num3)  ||  (num1 > num3 && num3 > num2))
    {
        printf("el numero del medio es: %d", num3);
    }
}

void numeros_ascendente()
{
    int num1, num2, num3;

    printf("Dame el primer numero\n");
    scanf("%d",& num1);
    printf("Dame el segundo numero\n");
    scanf("%d",& num2);
    printf("Dame el tercer numero\n");
    scanf("%d",& num3);

   if(num2>num1 && num3> num1 && num2 > num3)
    {
        printf("%d, %d, %d", num2, num3, num1);
    }
    if(num1 > num2 && num3 > num2 && num1 > num3)
    {
        printf("%d, %d, %d", num1, num3, num2);
    }
    if(num1>num3 && num2> num3 && num1 > num2)
    {
        printf("%d, %d, %d", num1, num2, num3);
    }
}

void horoscopo()
{
    int mes, dia;

    printf("ecribe en numero tu mes de nacimiento(ejemplo: enero = 1)");
    scanf("%d",& mes);
    printf("dame tu dia de nacimiento (ejemplo: 1, 2, 3,..., 29)");
    scanf("%d",& dia);

    if(mes>12 || mes<1 || dia > 31 || dia < 1)
    {
        printf("datos no validos");
    }

    if(mes==1)
    {
        if(dia<20)
        {
            printf("capricornio tu ex te extrana");
        }
        else
        {
            printf("acuario comprate los que tanto quieres");
        }
    }
    if(mes==2)
    {
        if(dia>28)
        {
            printf("dato no valido");
        }
        if(dia<19)
        {
            printf("acuario comprate los que tanto quieres");
        }
        else
        {
            printf("pisis dejate de depresiones, enciendete");
        }
    }
    if(mes==3)
    {
        if(dia<21)
        {
            printf("pisis dejate de depresiones, enciendete");
        }
        else
        {
            printf("aries te va a ir bien en la escuela");
        }
    }
    if(mes==4)
    {
        if(dia>30)
        {
            printf("dato no valido");
        }
        if(dia<20)
        {
            printf("aries te va a ir bien en la escuela");
        }
        else
        {
            printf("tauro se fuerte, los vas a superar");
        }
    }
    if(mes==5)
    {
        if(dia<21)
        {
            printf("tauro se fuerte, los vas a superar");
        }
        else
        {
            printf("geminis vas a ser exitoso");
        }
    }
    if(mes==6)
    {
        if(dia>30)
        {
            printf("dato no valido");
        }
        if(dia<21)
        {
            printf("geminis vas a ser exitoso");
        }
        else
        {
            printf("cancer no te enfermes");
        }
    }
    if(mes==7)
    {
        if(dia>30)
        {
            printf("dato no valido");
        }
        if(dia<23)
        {
            printf("cancer no te enfermes");
        }
        else
        {
            printf("leo pule tu melena");
        }
    }
    if(mes==8)
    {
        if(dia<23)
        {
            printf("leo pule tu melena");
        }
        else
        {
            printf("virgo ponte a estudiar para tu examen");
        }
    }
    if(mes==9)
    {
        if(dia>30)
        {
            printf("dato no valido");
        }
        if(dia<23)
        {
            printf("virgo ponte a estudiar para tu examen");
        }
        else
        {
            printf("libra banate mas seguido plis");
        }
    }
    if(mes==10)
    {
        if(dia<23)
        {
            printf("libra banate mas seguido plis");
        }
        else
        {
            printf("escorpio deja de ser tan picudo/a");
        }
    }
    if(mes==11)
    {
        if(dia>30)
        {
            printf("dato no valido");
        }
        if(dia<22)
        {
            printf("escorpio deja de ser tan picudo/a");
        }
        else
        {
            printf("sagitario dejate de cosas ya hablale a tu crush");
        }
    }
    if(mes==12)
    {
        if(dia<22)
        {
            printf("sagitario dejate de cosas ya hablale a tu crush");
        }
        else
        {
            printf("capricornio tu ex te extrana");
        }
    }
}