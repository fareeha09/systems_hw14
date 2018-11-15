#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
  char * s;
  char ** arr = calloc(30,sizeof(char*));
  int i = 0;
  while ((s = strsep(&line," "))){
    arr[i] = s;
    i++;
  }
  arr[i+1] = NULL;
  return arr;
}

int main(){
  char cow[10] = "ls -a -l";
  printf("Arguments of: %s\n",cow);
  char ** args = parse_args(cow);
    
  int i = 0;
  while(args[i]){
    printf("Arg %d: %s\n",i,args[i]);
    i++;
  }
  printf("\n\nExecuting ls -a -l\n");
  execvp(args[0], args);
}
