# include <stdio.h>
# include <conio.h>

int main ()
{
    float y, x1, x2, rango ;
    printf("Este programa permite calculaar los valores para X de la Funcion y=x^2+2x+2\n\n\n\n");
    printf("Por favor ingresa el primer rango de valores que deseas asignarle a x\n\n\n");
    scanf("%f", &x1);
    printf("Ahora introduce el valor final que tomara x\n\n\n");
    scanf("%f", &x2);

     rango=0.5;

     do
     {
                    y=(x1*x1)-(2*x1)+2;
                    x1=x1+rango;
                    printf("Los resultados para y son %f\n", y);
     }
     while (x1<=x2);
     getch ();

}
