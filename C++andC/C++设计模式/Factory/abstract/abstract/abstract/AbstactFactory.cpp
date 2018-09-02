
#include "abstractfactory.h"
#include "product.h"


AstactFactory::AstactFactory(){
	cout<<"Create AstactFactory"<<endl;

}

AstactFactory::~AstactFactory(){
	cout<<"Delete AstactFactory"<<endl;

}
//
CreateFactory_1::CreateFactory_1(){
	cout<<"Create CreateFactory_1"<<endl;
}
CreateFactory_1::~CreateFactory_1(){
	cout<<"Delete CreateFactory_1"<<endl;
}

AstractproductA* CreateFactory_1::CreateProductA()
{

	return new ProdcutA1();
}

AstractproductB* CreateFactory_1::CreateProductB()
{
	return new ProdcutB1();
}
// 
CreateFactory_2::CreateFactory_2(){
 cout<<"Create CreateFactory_2"<<endl;
}
CreateFactory_2::~CreateFactory_2(){
cout<<"Delete CreateFactory_2"<<endl;


}
AstractproductA* CreateFactory_2::CreateProductA(){

	return new ProdcutA2();
}

AstractproductB* CreateFactory_2::CreateProductB(){
	return new ProdcutB2();
} 
