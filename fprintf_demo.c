#include<stdio.h>
#include<stdlib.h>

int main() {
  FILE *fp;
  int a = 10;
  char str[50] = "Riwaj Karki test1";
  fp = fopen("/Users/sitaram/Downloads/Coding/C/file_handling_youtube/fprintf_demo.txt", "w");

  if( fp == NULL) {
    printf("No file.\n");
    exit(1);
  }
  fprintf(fp, "%d\t%s", a, str);

  fclose(fp);
  return 0;
}