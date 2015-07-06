#import "MyObjectiveCClass.hpp"

@implementation MyObjectiveCClass

MyClassImpl::MyClassImpl() : self( NULL ){
  NSLog( @"MyClassImpl" );
  self = [[MyObjectiveCClass alloc] init];
}

MyClassImpl::~MyClassImpl(){
  NSLog( @"~MyClassImpl" );
  [self dealloc];
}

int MyClassImpl::doSomethingWith( int a, double *b ){
  NSLog( @"MyClassImpl::doSomethingWith" );
  NSLog( @"Param a %d", a );
  return [self doSomethingWith:b];
}

void MyClassImpl::logMyMessage( string msg ){
  [self logMyMessage:msg];
}

- (int) doSomethingWith:(double *) b{
  NSLog( @"MyObjectiveCClass::doSomethingWith" );
    someVar = 13;
    
  *b = 69.69;

  return someVar;
}

- (void) logMyMessage:( string ) msg{
  NSString *string = [NSString stringWithCString:msg.c_str()
                                   encoding:[NSString defaultCStringEncoding]];
  NSLog( @"%@", string );
}

@end
