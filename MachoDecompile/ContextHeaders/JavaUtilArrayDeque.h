// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILARRAYDEQUE_H
#define JAVAUTILARRAYDEQUE_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractCollection.h"
#import "IOSObjectArray.h"
#import "JavaUtilDeque-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilArrayDeque : JavaUtilAbstractCollection <JavaUtilDeque, NSCopying, JavaIoSerializable>

 {
    IOSObjectArray *elements_;
    int head_;
    int tail_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)allocateElementsWithInt:(int)arg0 ;
-(void)doubleCapacity;
-(id)copyElementsWithNSObjectArray:(id)arg0 ;
-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(void)addFirstWithId:(id)arg0 ;
-(void)addLastWithId:(id)arg0 ;
-(BOOL)offerFirstWithId:(id)arg0 ;
-(BOOL)offerLastWithId:(id)arg0 ;
-(id)removeFirst;
-(id)removeLast;
-(id)pollFirst;
-(id)pollLast;
-(id)getFirst;
-(id)getLast;
-(id)peekFirst;
-(id)peekLast;
-(BOOL)removeFirstOccurrenceWithId:(id)arg0 ;
-(BOOL)removeLastOccurrenceWithId:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)offerWithId:(id)arg0 ;
-(id)remove;
-(id)poll;
-(id)element;
-(id)peek;
-(void)pushWithId:(id)arg0 ;
-(id)pop;
-(void)checkInvariants;
-(BOOL)delete__WithInt:(int)arg0 ;
-(int)size;
-(BOOL)isEmpty;
-(id)iterator;
-(id)descendingIterator;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(void)clear;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(id)clone;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif