// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILARRAYDEQUE_DEQITERATOR_H
#define JAVAUTILARRAYDEQUE_DEQITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilArrayDeque.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilArrayDeque_DeqIterator : NSObject <JavaUtilIterator>

 {
    JavaUtilArrayDeque *this$0_;
    int cursor_;
    int fence_;
    int lastRet_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithJavaUtilArrayDeque:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif