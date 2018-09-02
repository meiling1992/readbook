//AbstractFactory.h
#ifndef _AbstactFactory_H
#define _AbstactFactory_H

class AstractproductA;
class AstractproductB;

class AstactFactory
{
public: 
	virtual ~AstactFactory();
	virtual AstractproductA*  CreateProductA()=0;
	virtual AstractproductB*  CreateProductB()=0;
	
	

protected:AstactFactory();
private:
};

class CreateFactory_1:public AstactFactory
{
public:
	CreateFactory_1();
	~CreateFactory_1();
	AstractproductA* CreateProductA();

	AstractproductB* CreateProductB();


};
class CreateFactory_2:public AstactFactory
{
public:
	CreateFactory_2();
	~CreateFactory_2();
	AstractproductA* CreateProductA();
	AstractproductB* CreateProductB();

};
#endif