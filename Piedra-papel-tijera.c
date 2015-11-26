# include <stdio.h>
# include <conio.h>
# include <stdlib.h>
int main (void)
{
int jug, maq, op, r;
printf("Hola, jugaremos pidra, papel o tijera\n");
do{
printf("Para jugar ingresaras solo el numero que corresponda a tu eleccion:\n");
srand(time(NULL));
r=rand()%3;
printf("0-------Piedra\n");
printf("1-------Papel\n");
printf("2-------Tijeras\n");
printf("Selecciona un numero del anterior menu\n");
scanf("%d", &jug);
switch (jug)
{
case 0:
printf("Elegiste Piedra\n");
    if (r==0)
    {
	printf("\tElegi Piedra\n\n");
        printf("\t\t\tEmpate\n\n\n");
    }
 else
    {
     if (r==1)
     {
         printf("\tElegi Papel\n\n");
         printf("\t\t\tGana la computadora\n\n\n");
     }
     else
    {
     if (r==2)
     {
         printf("\tElegi Tijeras\n\n");
         printf("\t\t\tTu ganas\n\n\n");
     }

    }
  }
break;
case 1:
printf("Elegiste Papel\n");
        if (r==0)
        {
            printf("\tElegi Piedra\n\n");
            printf("\t\t\tTu ganas\n\n\n");
        }
        else
        {
            if (r==1)
            {
                printf("\tElegi Papel\n\n");
                printf("\t\t\tEmpate\n\n\n");
            }
            else
            {
                if (r==2)
                {
                    printf("\tElegi Tijeras\n\n");
                   printf("\t\t\tGana la computadora\n\n\n");
                }
            }
        }
break;
case 2 :
printf("Elegiste Tijeras\n");
          if (r==0)
          {
              printf("\tElegi Piedra\n\n");
            printf("\t\t\tGana la computadora\n\n\n");
          }
          else
          {
              if (r==1)
              {
                printf("\tElegi Papel\n\n");
                 printf("\t\t\tTu ganas\n\n\n");
              }
              else
              {
                  if (r==2)
                  {
                    printf("\tElegi Tijeras\n\n");
                     printf("\t\t\tEmpate\n\n\n");
                  }
              }
          }
          break;
default:
    printf("Por favor solo introduce los numeros que aparecen en el menu");
}
printf("Quieres volver a jugar?\n");
printf("Si deseas volver a jugar presiona 1\n");
printf("Si deseas salir del juego presiona 2\n");
scanf("%d", &op);
system("cls");
}
while(op==1);
printf("Ok, hasta luego, regresa pronto");
getch();
}
