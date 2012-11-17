#include <stdio.h>															    //подключение библиотек содержащих функции ввода, вывода, математических  функций, и функции рандом
#include <math.h>
#include <stdlib.h>

float square(int height,int side);                                              //прототипы функций
float volume(int height, int side);
float cube(float volum);

int main(void)
{
  int h,a,i,j,hres=50,ares=50;                                                  //определение переменных и присваивание им необходимых значений
  float s,v,o,res,sd;
  printf("Yaskovich Dmitry (T01-01c). Lab 7. Variant 21\n\n");                  //Информация о программе
  printf("Enter height and side:\n");
  scanf("%d %d",&h,&a);                                                         //ввод данных
  s=square(h,a);                                                                //вычисление площади и объёма
  v=volume(h,a);
  res=volume(50,50)/square(50,50);
  for (i = 1; i <= 50; i++)                                                     //выбор оптимального значения высоты и стороны основания
  {
	for (j = 1; j <= 50; j++)
	{
	  o=volume(i,j)/square(i,j)	;
	  if ((abs(res-1))>(abs(o-1)))
	  {
		res=o;
		hres=i;
		ares=j;
	  }
	}
  }
  sd=cube(s);                                                                   //вычисление стороны куба
  printf("Square: %f\n",s);                                                  //вывод данных
  printf("Volume: %f\n\n",v);
  printf("Height: %d\n",hres);
  printf("Side:   %d\n\n",ares);
  printf("Side:   %f\n",sd);
  printf("\nDimini Inc.\n");                                                    //Авторские права
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //ожидание нажатия на клавишу для завершения программы
  getchar();
  return 0;
}

float square(int height,int side)                                               //функция вычисления площади
{
  float sq;
  sq=2*sqrt(3)/4*side*side+3*side*height;
  return sq;
}

float volume(int height,int side)                                               //функция вычисления объёма
{
  float vol;
  vol=sqrt(3)/4*side*side*height;
  return vol;
}

float cube(float volum)                                                         //функция вычисления стороны куба
{
  float cubeside;
  cubeside=sqrt(volum/sqrt(3));
  return cubeside;
}

