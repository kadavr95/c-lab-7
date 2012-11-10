#include <stdio.h>															    //подключение библиотек содержащих функции ввода, вывода, математических  функций, и функции рандом
#include <math.h>
#include <stdlib.h>

float square(int height,int side);
float volume(int height, int side);
int main(void)
{
  int h,a;                          //определение переменных и присваивание им необходимых значений
  float ;
  printf("Yaskovich Dmitry (T01-01c). Lab 7. Variant 21\n\n");              //Информация о программе

  printf("Dimini Inc.\n");                                                      //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}

float square(int height,int side)
{
  float sq;
  sq=3*sqrt(3)/2*side*side+3*side*sqrt(height*height+5*side*side/4);
}

float volume(int height,int side)
{
 float vol;
 vol=sqrt(3)/2*side*side*height
}


