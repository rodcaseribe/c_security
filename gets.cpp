#include <stdio.h> 
int main () 
{ 
    char string[50000000]; 
    printf ("Digite uma string: "); 
    gets (string); 
    FILE * fp;
    fp = fopen ("filegg.txt", "w+");
    fprintf(fp, "%s" , string);
    return(0);
}
