#include<stdio.h>

int main() {
  FILE *fp;
  char str[50] = "Riwaj Karki test1";
  fp = fopen("/Users/sitaram/Downloads/Coding/C/file_handling_youtube/putc_loop.txt", "w");

  for(int i = 0; str[i] != '\0'; i++) {
    fputc(str[i], fp);
  }

  fclose(fp);
  return 0;
}