#include"Header.h"
#include<iostream>
using namespace std;
void rectangle :: getwidth()
{
	cout<<"Enter width:";
}
void rectangle:: getlength()
{
	cout<<"Enter length:";
}
void rectangle::setlength(int l)
{
	l=0;
	if(l>0)
		length=l;
	else
		length=0;
}
void rectangle::setwidth(int w)
{
	w=0;
	if(w>0)
		width=w;
	else width=0;
}
void rectangle::getarea()
{
	int area;
	area=length*width;

}
void rectangle::rotaterectangle()
{
	int temp;
	temp=length;
	length=width;
	width=temp;


}
void rectangle::draw(int l,int w)
{
	for(int i=0;i<l;i++)
	{
		for(int j=0;j<w;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}