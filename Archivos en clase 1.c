#include <stdio.h>
//Conocer si existe un archivo
int main(void) {
  //Apertura del archivo con la palabra reservada FILE
 FILE*fd;
  char addressFile[]="D:\\Ejercicio\\prueba.txt";
  fd = fopen(addressFile,"r");//abro el archivo y lo leo
  if(fd==NULL){
    printf("El archivo no existe\n");
  }else{
    printf("El archivo existe\n");
    printf("Su ubicacion (PathFile) es: %s\n",addressFile);
  }
  return 0;
}