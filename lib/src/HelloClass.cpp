#include "HelloClass.h"
#include <iostream>
#include <string>
using namespace std ;

HelloClass::HelloClass( string name ): name( name ){}

void HelloClass::sayHello()
{
	cout<<"Hello "<<name<<endl ;
}
