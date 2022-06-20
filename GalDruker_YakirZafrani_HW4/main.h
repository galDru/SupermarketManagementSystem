#pragma once


#define EXIT -1
#define SUPER_FILE_NAME "SuperMarket.bin"
#define CUSTOMER_FILE_NAME "Customers.txt"
#define COMPRESS
#define SUPER_COMPRESS_FILE_NAME "SuperMarket_compress.bin"


typedef enum
{
	eShowSuperMarket, eAddProduct, eAddCustomer, eCustomerDoShopping,
	ePrintProductByType,eSortProduct,eSearchProduct, eNofOptions
} eMenuOptions;

const char* menuStrings[eNofOptions];

int menu();