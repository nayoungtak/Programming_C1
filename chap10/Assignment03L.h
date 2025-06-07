
// #pragma once

#ifndef _ASSIGNMENT03L_H_123456789
#define _ASSIGNMENT03L_H_123456789


struct login
{
	char id[21];
	char password[21];
};
typedef struct login Login;

int comparison_login(Login log, Login SLogin);
void print_login(Login logins[], Login SLogin);


#endif //_ASSIGNMENT03L_H_123456789
