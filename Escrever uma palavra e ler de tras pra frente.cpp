#include <stdio.h>
#include <string.h>
main ()
{
char nome[30];
int tam, i;
printf ("\n Digite o nome:");
gets(nome);
tam = strlen(nome);
for (i=tam;i>=0; i--)
{
printf ("%c", nome[i]);
}
return (0);
}
