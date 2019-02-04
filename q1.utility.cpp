#include"Header.h"
#include<stdio.h>
#include<iostream>
#include<fstream>
void setedubckgrnd(githubuser &user)//get the value of institution and qualification from file
{
	user.nameofinstitution=new string[20];
	user.levelofqualification=new string[20];
	cout<<user.username<<" enter your institution name:";
	getline(cin,*user.nameofinstitution);
	cout<<user.username<<" enter your level of qualification:";
	cin>>*user.levelofqualification;
}
void print(githubuser &user)//print the data of users
{
	cout << user.firstname << endl;
	cout << user.username << endl;
	cout << user.email << endl;
	cout << user.countoffolders << endl;
	user.folders = new string[user.countoffolders];
	for (int i = 0; i < user.countoffolders; i++)
	{
		cout << user.folders[i] << endl;
	}
	cout << user.nameofinstitution << endl;
	cout << user.levelofqualification;
}
void remove(githubuser &user)
{
	*user.nameofinstitution= nullptr;
	*user.levelofqualification = nullptr ;
}

void readdatafromfile(gitHubuser *&users)//to  get data of users from file
{
	int numofusers ;
	ifstream fin("file.txt");
	fin >> numofusers;
	fin.ignore();
	users = new gitHubuser[numofusers];
	for (int i = 0; i < numofusers; i++)
	{
		fin >> users[i].firstname;
		fin.ignore();
		fin >> users[i].username;
		fin.ignore();
		fin >> users[i].email;
		fin.ignore();
		fin >> users[i].countoffolders;
		fin.ignore();
		users[i].folders = new string[users[i].countoffolders];
		fin.ignore();
		for (int j = 0; j < users[i].countoffolders; j++)
		{
			fin >> users[i].folders[j];
		}
	}
}
void backup(gitHubuser *original, gitHubuser *&backup, int noofuser)//deep copy for backup
{

	backupArry = new gitHubuser[noofuser];
	for (int i = 0; i < noofuser; i++)
	{
		backup[i].firstname = original[i].firstname;
		backup[i].username = original[i].username;
		backup[i].email = original[i].email;
		for (int j = 0; j < userCount; j++)
		{
			backup[i].folders[j] = original[i].folders[j];
		}
	}
}

