
// #pragma once

#ifndef _PRODUCT_H_123456789
#define _PRODUCT_H_123456789


struct product
{
	char name[21];
	int price;
	int stock;
};
typedef struct product Product;

void print_product(Product p);
	

#endif //_PRODUCT_H_123456789
