#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main() {
  FILE *fp = NULL;
  char ch[50] = "Hello your string was ";

  char str[50];

  printf("Enter the string.\n");
  gets(str);
  fp = fopen("/Users/sitaram/Downloads/Coding/C/file_handling_youtube/practical1.txt", "w");
  if(fp == NULL) {
    printf("error.\n");
    exit(1);
  }

  fprintf(fp, "%s%s", ch, str);
  // fputs(str, fp);
  // for(int i = 0; i != strlen(str); i++){
  //   fputc(str[i], fp);
  // }
  

  fclose(fp);
}