#include "MyCPPClass.hpp"
#include "MyObjectiveCInterface.hpp"

MyCPPClass::MyCPPClass() : _impl (NULL){
  cout << "MyCPPClass\n";
  if( _impl == NULL )
    _impl = new MyClassImpl();
}

MyCPPClass::~MyCPPClass(){
  cout << "~MyCPPClass\n";
  if( _impl ){
    delete _impl;
    _impl = NULL;
  }
}

void MyCPPClass::doSomethingWithMyClass(){
  cout << "MyCPPClass::doSomethingWithMyClass\n";

  _myValue = REULT_A;
    
  double valueB = 0.0;
    
  int result = _impl->doSomethingWith( _myValue, &valueB );
    
  cout << "Result " << result << " valueB " << valueB << "\n";
  if ( result == RESULT_B ){
    _impl->logMyMessage( "Got result B!" );
  }else{
    _impl->logMyMessage( "Erm.. almost" );
  }
}
