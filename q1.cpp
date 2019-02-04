#include"Header.h"
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    githubuser *user;
    readdatafromfile(user);
	delete[]user;
	system("pause");
}
