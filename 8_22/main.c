#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Identificador(char str[]);

int main()
{
    char str[100][100]; // Puedes ponerle la memoria que quieras, esto fue para probar
    int n, i;

    printf("Digite la cantidad de cadenas a realizar. ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Teclee una cadena de caracteres. ");
        fflush(stdin);
        scanf("%[^\n]s",str[i]);
    }

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%s ",str[i]);

        if(Identificador(str[i]))
            printf("\n-Esta cadena es valida-\n\n");
    }
    printf("\n\n");
    return 0;
}

int Identificador(char str[])
{
    int indA = 0;
    int indB = strlen(str)-1;
    int respuesta = 0;

    if(str[indA] >= 'A' && str[indA] <= 'Z')
    {
        for(indA+1; indA<indB; indA++)
        {
            if(str[indA] >= NULL)
            {
                respuesta++;

                if(respuesta == indB)
                    return 1;
            }
        }
    }

    return 0;
}

