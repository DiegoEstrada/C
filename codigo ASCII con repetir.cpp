#include <stdio.h>
#include <conio.h>
main()
{
     int i=1;
     printf ("Este programa mostarar el codigo ASCII \n\n\n");
     printf ("El resultado del codigo ASCII es: ");
     do 
      printf ("%d = %c \t", i++, i, i);
      while( i<=255);

getch();
}
