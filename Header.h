#include<iostream>
#include<string>
using namespace std;
struct githubuser
{
	string firstname;
	string username;
	string password;
	string email;
	int countoffolders;
	string *folders;
	string*nameofinstitution;
	string*levelofqualification;
	
	
 };
void readdatafromfile(gitHubuser *&users);