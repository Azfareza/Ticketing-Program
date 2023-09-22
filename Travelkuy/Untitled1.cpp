#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main{


void loading_bar(int len, int time, char *message)
{
 char a = 177, b = 219;
 printf("\n[%s]\n", message);
    int i = 0;
 for (i = 0; i < len; i++)
  printf("%c", a);

 printf("\r");

    time *= 10;
 for (i = 0; i < len; i++) {
  printf("%c", b);
  Sleep(time);
 }
    puts("");
}

 return 0;
}
