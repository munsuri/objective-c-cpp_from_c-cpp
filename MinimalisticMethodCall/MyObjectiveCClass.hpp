#import "MyObjectiveCInterface.hpp"
#import <Foundation/Foundation.h>

@interface MyObjectiveCClass : NSObject
{
    int someVar;
}

- (int)  doSomethingWith:(double *) b;
- (void) logMyMessage:( string ) msg;

@end
