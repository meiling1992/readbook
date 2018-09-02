// Product.h

#ifndef _PRODUCT_H
#define _PRODUCT_H
#include <iostream>
using namespace std;

class AstractproductA
{
public:
	virtual ~AstractproductA();

protected:AstractproductA();
private:
};
class AstractproductB
{
public:
	virtual ~AstractproductB();

protected:AstractproductB();

private:
};

class ProdcutA1:public AstractproductA
{
public:
	ProdcutA1();
	~ProdcutA1();
protected:
private:
};
class ProdcutA2:public AstractproductA
{
public:
	ProdcutA2();
	~ProdcutA2();
protected:
private:
};
class ProdcutB1:public AstractproductB
{
public:
	ProdcutB1();
	~ProdcutB1();
protected:
private:
};
class ProdcutB2:public AstractproductB
{
public:
	ProdcutB2();
	~ProdcutB2();
protected:
private:
};

#endif 