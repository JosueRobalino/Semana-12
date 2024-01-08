#include <stdio.h>

int main(void) {
  FILE *Archivo;
  Archivo=fopen("prueb1.txt","w");
  if (Archivo==NULL){
    printf("el archivo no existe\n");
  }else{
    char letra;
    while((letra=getchar())!='\n')
   fputc(letra,Archivo);
  }
  fclose(Archivo);
  return 0;
}