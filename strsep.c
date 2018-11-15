#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
  char * s;
  char ** arr;
  int i = 0;
  while ((s = strsep(&line," "))){
    printf("TEST\n");
    arr[i] = s;
    i++;
  }
  arr[i+1] = NULL;
  return arr;
}

int main(){
  char cow[10] = "ls -a -l";
  char ** args = parse_args(cow);
  //execvp(args[0], args);
}
