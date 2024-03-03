#include <stdio.h>
#include <ctype.h>

int main() {
  char t[80];
  
  printf("Vvedite srtroky: ");
  gets(t);
  
  for(int i=0; i<80; i++) {
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
