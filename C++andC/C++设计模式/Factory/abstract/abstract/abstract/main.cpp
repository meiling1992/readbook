#include "abstractfactory.h"
#include <stdlib.h>
int main(int argc,char* arv[]){

	AstactFactory* cf1=new CreateFactory_1();

	cf1->CreateProductA();
	cf1->CreateProductB();

	
	AstactFactory* cf2=new CreateFactory_2();

	cf2->CreateProductA();
	cf2->CreateProductB();


	delete  cf1;
	delete  cf2;

	system("pause");
return 0;

}