#include<stdio.h>
#include<stdlib.h>

int main() {
  FILE *fp;
  char str[30], tab[5] = " ";
  fp = fopen("/Users/sitaram/Downloads/Coding/C/file_handling_youtube/practical1.txt", "a");

  if(fp == NULL) {
    printf("Error.\n");
    exit(1);
  }

  printf("Enter the content you want to append.\n");
  gets(str);

  // fputs(tab, fp);
  // fputs(str, fp);
  fprintf(fp, "\n%s", str);

  printf("Sucessfully appended\n");
  fclose(fp);
  return 0;
}