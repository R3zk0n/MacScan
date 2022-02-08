// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTLIST_SIMPLELISTITERATOR_H
#define JAVAUTILABSTRACTLIST_SIMPLELISTITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractList.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilAbstractList_SimpleListIterator : NSObject <JavaUtilIterator>

 {
    JavaUtilAbstractList *this$0_;
    int pos_;
    int expectedModCount_;
    int lastPosition_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilAbstractList:(id)arg0 ;
-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif