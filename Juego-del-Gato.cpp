#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define X 1
#define C 0
#define VACIO -1

int Dibujar ( int gato [ 3 ][ 3 ] );
int Tirar ( int gato [ 3 ][ 3 ] );
int ganador (int gato [3][3]);
int main ()

{
    int a,b,g;
	system ( "color 1F" );
	int gato[3][3];
	for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            gato[a][b]=-1;
        }
    }
	int i;

for ( i=0 ; i<9 ; i++ )
	{
		system ( "cls" );
		Dibujar ( gato );
		Tirar ( gato );
		ganador(gato);
	}

}
int Dibujar ( int gato [ 3 ][ 3 ] )

{
	int i, j;
	for( i=0 ; i<3 ; i++ )
	{
		for( j=0 ; j<3 ; j++ )
		{
           switch(gato[i][j])
           {
               case -1: printf(" ");
               break;
               case 0: printf("O");
               break;
               case 1: printf("X");
               break;
               default:
                break;
           }
            if( j<2 ){
			printf ( "|" );
			}
		}
        printf("\n---------\n");
	}
	printf ( "\n" );
}

int Tirar ( int gato [ 3 ][ 3 ] )

{
	static int Tirada = 0;
	int r,c,z;


do
{
            printf("Introduce la coordenada horizontal con valores de 0 a 2 :");
            scanf("\t%d",&r);
            printf("\nIntroduce la coordenada vertical con valores de 0 a 2 :");
            scanf("\t%d",&c);
}
while(c>=3 || r>=3 || gato[r][c]!=VACIO);

		if ( Tirada%2==0 )
		{
		( gato[r][c] = X );
		}
		else{
		( gato[r][c] = C );
		}
		Tirada ++;
}

int ganador (int gato [3][3])
{
    int a,b,q,w,z,aux=0;
//  Caso Circulo
//horizontal
if (gato[0][0]==0 && gato[0][1]==0 && gato[0][2]==0  )
{
    printf("El juego ha terminado\n La ficha ganadora O \n");
    q=15;
    exit(q);

}
if (gato[1][0]==0 && gato[1][1]==0 && gato[1][2]==0  )
{
    printf("El juego ha terminado\n La ficha ganadora O \n");
    q=15;
    exit(q);
}
if (gato[2][0]==0 && gato[2][1]==0 && gato[2][2]==0  )
{
    printf("El juego ha terminado\n La ficha ganadora O \n");
    q=15;
    exit(q);
}
//vertical
if (gato[0][0]==0 && gato[1][0]==0 && gato[2][0]==0  )
{
    printf("El juego ha terminado\n La ficha ganadora O \n");
    q=15;
    exit(q);

}
if (gato[0][1]==0 && gato[1][1]==0 && gato[2][1]==0  )
{
    printf("El juego ha terminado\n La ficha ganadora O \n");
    q=15;
    exit(q);

}
if (gato[0][1]==0 && gato[1][1]==0 && gato[2][1]==0  )
{
    printf("El juego ha terminado\n La ficha ganadora O \n");
    q=15;
    exit(q);
}
//diagonales
if (gato[0][0]==0 && gato[1][1]==0 && gato[2][2]==0  )
{
    printf("El juego ha terminado\n La ficha ganadora O \n");
    q=15;
    exit(q);

}
if (gato[0][1]==0 && gato[1][1]==0 && gato[2][0]==0  )
{
    printf("El juego ha terminado\n La ficha ganadora O \n");
    q=15;
    exit(q);
}

//  Caso Tache
//horizontal
if (gato[0][0]==1 && gato[0][1]==1 && gato[0][2]==1  )
{
    printf("El juego ha terminado\n La ficha ganadora X \n");
    q=15;
    exit(q);

}
if (gato[1][0]==1 && gato[1][1]==1 && gato[1][2]==1  )
{
    printf("El juego ha terminado\n La ficha ganadora X \n");
    q=15;
    exit(q);
}
if (gato[2][0]==1 && gato[2][1]==1 && gato[2][2]==1)
{
    printf("El juego ha terminado\n La ficha ganadora X \n");
    q=15;
    exit(q);
}
//vertical
if (gato[0][0]==1 && gato[1][0]==1 && gato[2][0]==1 )
{
    printf("El juego ha terminado\n La ficha ganadora X \n");
    q=15;
    exit(q);

}
if (gato[0][1]==1 && gato[1][1]==1 && gato[2][1]==1)
{
    printf("El juego ha terminado\n La ficha ganadora X \n");
    q=15;
    exit(q);

}
if (gato[0][1]==1 && gato[1][1]==1 && gato[2][1]==1  )
{
    printf("El juego ha terminado\n La ficha ganadora X \n");
    q=15;
    exit(q);
}
//diagonales
if (gato[0][0]==1 && gato[1][1]==1 && gato[2][2]==1)
{
    printf("El juego ha terminado\n La ficha ganadora X \n");
    q=15;
    exit(q);

}
if (gato[0][1]==1 && gato[1][1]==1 && gato[2][0]==1 )
{
    printf("El juego ha terminado\n La ficha ganadora X \n");
    q=15;
    exit(q);
}

system("pause");

}
