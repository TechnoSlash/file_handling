#include<stdio.h>

int main() {
  FILE *fp;
  char str[10] = "String";
  fp = fopen("/Users/sitaram/Downloads/Coding/C/file_handling_youtube/fputs_demo.txt", "w");// overwrites the file if the file already exists
  fputs(str, fp);
  fclose(fp);
  return 0;
}