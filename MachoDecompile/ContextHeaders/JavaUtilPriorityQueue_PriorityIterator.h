// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILPRIORITYQUEUE_PRIORITYITERATOR_H
#define JAVAUTILPRIORITYQUEUE_PRIORITYITERATOR_H


#import <Foundation/Foundation.h>

#import "JavaUtilPriorityQueue.h"
#import "JavaUtilIterator-Protocol.h"

@interface JavaUtilPriorityQueue_PriorityIterator : NSObject <JavaUtilIterator>

 {
    JavaUtilPriorityQueue *this$0_;
    int currentIndex_;
    BOOL allowRemove_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)hasNext;
-(id)next;
-(void)remove;
-(id)initWithJavaUtilPriorityQueue:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif