#pragma once

#include <stdio.h>
#include "Supermarket.h"

int	saveSuperMarketToFile(const SuperMarket* pMarket, const char* fileName, const char* customersFileName, int flag);
int	saveCustomerToTextFile(const SuperMarket* pMarket, const char* customersFileName);
int	loadSuperMarketFromFile(SuperMarket* pMarket, const char* fileName, const char* customersFileName, int flag);
int	loadCustomerFromTextFile(SuperMarket* pMarket, const char* customersFileName);
int	loadProductFromTextFile(SuperMarket* pMarket, const char* fileName);

int readSupermarketDataCompress(SuperMarket * pMarket, FILE * fp);

int saveSupermarketDataCompress(const SuperMarket * pMarket, FILE * fp);
