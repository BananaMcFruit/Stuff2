#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MIN 7

int minu_sola(char k){
  if (k >= 'a' && k <= 'z') {
  return 1;
}else{
  return 0;
  }
}
int digi_solo(char k){

  if(k<='9' && k>='0'){
  return 1;
}else{
  return 0;
  }
}
int main(){
	char* ptr, ch;
	char* contra[MIN];
	int i, n = 1;

	printf("Introduzca contrase%ca: ",164);

  for(i=0;i<15;i++)
 {
  ch = getch();
   if (ch == 13)
         break;
  contra[i] = ch;
  ch = '*' ;
  printf("%c",ch);
 }
	ptr = (char*)realloc(contra, n * sizeof(char));
{
    if (contra < MIN);
     printf("\n\nContrase%ca tiene menos de 7 caracteres.  Intente denuevo", 164);
       return 0;
    }
	if (ptr == NULL) {
		printf("\nAcceso: denegado");
		return 1;
	}
	else {
		printf("\nAcceso: confirmado");

		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}
	}
		printf("\n\nLa contrase%ca digitada fue:\n", 164);
         for(i=0;i<7;i++)
 {
  printf("%c",contra[i]);
    }
    free(contra);
 return 0;
}

