#include<stdio.h>
#include<stdlib.h>

int main() {
  FILE *fp;
  char str[10];
  fp = fopen("/Users/sitaram/Downloads/Coding/C/file_handling_youtube/practical1.txt", "r");
  if(fp == NULL) {
    printf("Error.\n");
    exit(1);
  }

  while(!feof(fp)) {
    fgets(str, 8, fp);
    printf("%s", str);
  }
  printf("\n");
  // while(!feof(fp)) {
  //   ch = fgetc(fp);
  //   printf("%c", ch);
  // }

  fclose(fp);
  return 0;
}