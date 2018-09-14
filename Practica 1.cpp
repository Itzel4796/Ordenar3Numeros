#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
int main()
{
	float n1,n2,n3,menor,mayor,medio;
    printf ("Ingrese el primer numero:");
    scanf ("%f",&n1);
    printf ("Ingrese el segundo numero:");
    scanf ("%f",&n2);
    printf ("Ingrese el tercer numero:");
    scanf ("%f",&n3);
 if(n1==n2)
   {
    printf("Error");
   }
   else
       {
          if(n1==n3)
            {
             printf("Error");
            }
           else
            {
             if(n3==n2)
                {
                 printf("Error");
                }
               else
                { 
                 menor = n1;
                 mayor = n3;
                 if ( n2 < menor )
                    {
                     menor = n2;
                    }
                 if ( n3 < menor )
                    {
                     menor = n3;
                    }
                 if ( n1 > mayor )
                    {
                     mayor = n1;
                    }
                 if ( n2 > mayor )
                    {
                     mayor = n2;
                    }
                 medio = n1 + n2 + n3 - mayor - menor;
                    printf ("El mayor es: %.2f\n",mayor);
                    printf ("El medio es: %.2f\n",medio);
                }
            }
       }
}
