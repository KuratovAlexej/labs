#include <stdio.h>
#include <ctype.h>

int main() {
  char t[80];
  int i;
  
  printf("Vvedite srtroky: ");
  fgets(t, 80, stdin);
  
  for(i=0; t[i]!='\0'; i++) {
    if(t[i] == 'a') {
      t[i] = 'A'; 
    }
    else if(t[i] == 'b') {
      t[i] = 'B';
    }
  }
  
  printf("Polychennaya srtroka: %s", t);
  
  return 0;
}
