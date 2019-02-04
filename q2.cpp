#include<iostream>
#include<stdio.h>
#include"Header.h"
#include<stdio.h>
using namespace std;
int main()
{
	rectangle a1;
	int width,length;
	a1.getwidth();
	cin>>width;
	a1.getlength();
	cin>>length;
	a1.setwidth(width);
	a1.setlength(length);
	a1.getarea();
	a1.rotaterectangle();
	a1.draw(length,width);
	system("pause");

}