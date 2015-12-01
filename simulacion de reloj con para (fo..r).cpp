#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
main ()
{
     int a, b, c, d;
for (d=0; d<=60; d++)
     for (a=1; a<=60; a++)
         for (b=1; b<=60; b++)
             for (c=1; c<=60; c++)
               {
                       system(" cls ");
                       printf("Han Transcurrido \n \tHoras %d Minutos %d Segundos %d Milecimasdesegundo %d", d, a, b, c);
               }
getch() ;
}
