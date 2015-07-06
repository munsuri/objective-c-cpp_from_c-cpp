#ifndef __MYOBJECTIVECCLASS_INTERFACE_HPP__
#define __MYOBJECTIVECCLASS_INTERFACE_HPP__
#include <iostream>
#include <string>
#include <objc/objc-runtime.h> //id

using namespace std;

class MyClassImpl{

public:
    MyClassImpl ( void );
    ~MyClassImpl( void );

    int  doSomethingWith( int a, double *b );
    void logMyMessage( string msg );

private:
    //void *, /* MyObject* */
    id self;
};

#endif
