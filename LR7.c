#include <stdio.h>															    //����������� ��������� ���������� ������� �����, ������, ��������������  �������, � ������� ������
#include <math.h>
#include <stdlib.h>

float square(int height,int side);
float volume(int height, int side);
int main(void)
{
  int h,a;                          //����������� ���������� � ������������ �� ����������� ��������
  float ;
  printf("Yaskovich Dmitry (T01-01c). Lab 7. Variant 21\n\n");              //���������� � ���������

  printf("Dimini Inc.\n");                                                      //��������� �����
  printf("For progressive future\n");
  printf("(c)2009-2012\n");
  fflush(stdin);                                                                //�������� ������� �� ������� ��� ���������� ���������
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


