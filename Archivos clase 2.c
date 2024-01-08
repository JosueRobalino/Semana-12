#include <stdio.h>

int main(void) {
  FILE *Archivo;
  Archivo=fopen("prueb1.txt","a");
  if (Archivo==NULL){
    printf("el archivo no existe\n");
  }else{
    char Texto[]="Bon dhia ..\n";
    fprintf(Archivo,"Texto escrito: %s\n",Texto);
  }
  fclose(Archivo);
  return 0;
}