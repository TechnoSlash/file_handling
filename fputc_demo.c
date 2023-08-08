#include<stdio.h>

int main() {
  FILE *fp;
  char ch = 'a';
  fp = fopen("/Users/sitaram/Downloads/Coding/C/file_handling_youtube/fputc_demo.txt", "w");// overwrites the file if the file already exists
  fputc(ch, fp);
  fclose(fp);
  return 0;
}