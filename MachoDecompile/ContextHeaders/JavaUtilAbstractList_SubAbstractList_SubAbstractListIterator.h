// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILABSTRACTLIST_SUBABSTRACTLIST_SUBABSTRACTLISTITERATOR_H
#define JAVAUTILABSTRACTLIST_SUBABSTRACTLIST_SUBABSTRACTLISTITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractList_SubAbstractList.h"
#import "JavaUtilListIterator-Protocol.h"
#import "JavaUtilListIterator-Protocol.h"

@interface JavaUtilAbstractList_SubAbstractList_SubAbstractListIterator : NSObject <JavaUtilListIterator>

 {
    JavaUtilAbstractList_SubAbstractList *subList_;
    id<JavaUtilListIterator> *iterator_;
    int start_;
    int end_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilListIterator:(id)arg0 withJavaUtilAbstractList_SubAbstractList:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)addWithId:(id)arg0 ;
-(BOOL)hasNext;
-(BOOL)hasPrevious;
-(id)next;
-(int)nextIndex;
-(id)previous;
-(int)previousIndex;
-(void)remove;
-(void)setWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif