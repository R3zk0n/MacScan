// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTLIST_FULLLISTITERATOR_H
#define JAVAUTILABSTRACTLIST_FULLLISTITERATOR_H

@class SimpleListIterator;

#import <Foundation/Foundation.h>

#import "JavaUtilAbstractList.h"
#import "JavaUtilListIterator-Protocol.h"

@interface JavaUtilAbstractList_FullListIterator : SimpleListIterator <JavaUtilListIterator>

 {
    JavaUtilAbstractList *this$1_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilAbstractList:(id)arg0 withInt:(int)arg1 ;
-(void)addWithId:(id)arg0 ;
-(BOOL)hasPrevious;
-(int)nextIndex;
-(id)previous;
-(int)previousIndex;
-(void)setWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif