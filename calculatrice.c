#include <stdio.h>
#include <stdlib.h>

int addition(int nombre1, int nombre2)
{
    return nombre1 + nombre2;
}
int soustraction(int nombre1, int nombre2)
{
    return nombre1 - nombre2;
}
int multiplication(int nombre1, int nombre2)
{
    return nombre1 * nombre2;
}
int division(int nombre1, int nombre2)
{
    if (nombre1 != 0)
    {
        if (nombre2 != 0)
        {
            return nombre1 / nombre2;
        }
        else
        {
            printf("Vous ne pouvez pas diviser par 0\n");
        }
    }
    else
    {
        printf("Vous ne pouvez pas diviser par 0\n");
    }
}

int main(int argc, char *argv[])
{
    int nombre1 = 0;
    int nombre2 = 0;
    int operateur = 0;
    int resultat = 0;

    printf("Entrez le premier chiffre\n");
    scanf("%d", &nombre1);
    printf("Entrez le deuxieme chiffre\n");
    scanf("%d", &nombre2);

    printf("Veuillez choisir le type d'operation\n");
    printf("1 = Addition\n");
    printf("2 = Soustraction\n");
    printf("3 = Multiplication\n");
    printf("4 = Division\n");
    scanf("%d", &operateur);

    switch (operateur)
    {
    case 1:
        resultat = addition(nombre1, nombre2);
        break;
    case 2:
        resultat = soustraction(nombre1, nombre2);
        break;
    case 3:
        resultat = multiplication(nombre1, nombre2);
        break;
    case 4:
        resultat = division(nombre1, nombre2);
        break;
    default:
        printf("Entrez un numero valide pour choisir l'operateur\n");
        break;
    }

    printf("Le resultat est %d\nVeuillez noter que cette calculatrice ne prend pas en charge les virgules\nLe resultat peut etre tronquer\nAppuyer sur une touche pour continuer", resultat);

    getchar();
    getchar();
    return 0;
}