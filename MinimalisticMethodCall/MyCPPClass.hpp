#ifndef __MYCPP_CLASS_HPP__
#define __MYCPP_CLASS_HPP__

class MyClassImpl;

class MyCPPClass{
    enum { REULT_A = 7, RESULT_B = 13 };
    
public:
    MyCPPClass();
    ~MyCPPClass();

    void doSomethingWithMyClass();

private:
    MyClassImpl * _impl;
    int           _myValue;
};

#endif
