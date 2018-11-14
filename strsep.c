#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char ** parse_args (char * line){
  char * arr[5];
  char *s = strsep(&line, " ");
  printf( "flgjffffsd\n");
  int i = 0;
  
  while (s){
    arr[i] = s;
    i++;
    s = strsep(&line, " ");
  }

  return arr;
}

int main(){
  char c[100] = "ls -a -l";
  parse_args(c);
}
