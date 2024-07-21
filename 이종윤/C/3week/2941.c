#include <stdio.h> 
#include <string.h> 
 
int main(void) { 
  char word[100]; 
  gets(word); 
  int cnt = strlen(word); 
  int i; 
  for(i=0; i<strlen(word); i++) { 
    if(word[i] == '=') { 
      if(word[i-1] == 'c') cnt--; 
      if(word[i-1] == 's') cnt--; 
      if(word[i-1] == 'z') { 
        cnt--; 
        if(word[i-2] == 'd') cnt--; 
     } 
  } 
  if(word[i] == '-') { 
    if(word[i-1] == 'c') cnt--; 
    if(word[i-1] == 'd') cnt--; 
 } 
 if(word[i] == 'j') { 
   if(word[i-1] == 'l') cnt--; 
   if(word[i-1] == 'n') cnt--; 
} 
} 
printf("%d\n", cnt); 
} 
