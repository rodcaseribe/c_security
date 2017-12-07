#include <stdio.h>
#include <stdlib.h>

main () {
   char ip[16]; //variável que vai receber o ip do usuário
   char var[100]; //variável que vai receber o comando+variável ip

   printf(“Digite o ip: ");
   scanf("%s",&ip); //var ip tem o valor digitado pelo usuário 

   sprintf(var, "nmap -sV %s", ip); //var recebe valor com + var ip
   system(var); //system recebe valor de var

   return 0;
}
