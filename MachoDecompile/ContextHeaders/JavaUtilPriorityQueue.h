// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILPRIORITYQUEUE_H
#define JAVAUTILPRIORITYQUEUE_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractQueue.h"
#import "IOSObjectArray.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilComparator-Protocol.h"

@interface JavaUtilPriorityQueue : JavaUtilAbstractQueue <JavaIoSerializable>

 {
    int size_;
    id<JavaUtilComparator> *comparator_;
    IOSObjectArray *elements_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withJavaUtilComparator:(id)arg1 ;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(id)initWithJavaUtilPriorityQueue:(id)arg0 ;
-(id)initWithJavaUtilSortedSet:(id)arg0 ;
-(id)iterator;
-(int)size;
-(void)clear;
-(BOOL)offerWithId:(id)arg0 ;
-(id)poll;
-(id)peek;
-(id)comparator;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(id)newElementArrayWithInt:(int)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)getFromPriorityQueueWithJavaUtilPriorityQueue:(id)arg0 ;
-(void)getFromSortedSetWithJavaUtilSortedSet:(id)arg0 ;
-(void)removeAtWithInt:(int)arg0 ;
-(int)compareWithId:(id)arg0 withId:(id)arg1 ;
-(void)siftUpWithInt:(int)arg0 ;
-(void)siftDownWithInt:(int)arg0 ;
-(void)initSizeWithJavaUtilCollection:(id)arg0 ;
-(void)growToSizeWithInt:(int)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif