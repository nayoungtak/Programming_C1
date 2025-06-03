
// #pragma once

#ifndef _CONTACT_H_123456789
#define _CONTACT_H_123456789


enum gender { MAN, WEMAN };
typedef enum gender EGender;

struct contact
{
	char name[24];
	char phone[24];
	EGender gender;
	int year;
};
typedef struct contact Contact;

int ifEualcontact(Contact a, Contact b);
void printContact(Contact ct);
int ifEualcontactPTR(const Contact* a, const Contact* b);
void printContactPTR(const Contact* ct);

#endif //_CONTACT_H_123456789
