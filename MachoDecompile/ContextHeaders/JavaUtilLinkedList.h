// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLINKEDLIST_H
#define JAVAUTILLINKEDLIST_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractSequentialList.h"
#import "JavaUtilLinkedList_Link.h"
#import "JavaUtilList-Protocol.h"
#import "JavaUtilDeque-Protocol.h"
#import "JavaUtilQueue-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilLinkedList : JavaUtilAbstractSequentialList <JavaUtilList, JavaUtilDeque, JavaUtilQueue, NSCopying, JavaIoSerializable>

 {
    int size_;
    JavaUtilLinkedList_Link *voidLink_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(void)addWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)addLastImplWithId:(id)arg0 ;
-(BOOL)addAllWithInt:(int)arg0 withJavaUtilCollection:(id)arg1 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(void)addFirstWithId:(id)arg0 ;
-(BOOL)addFirstImplWithId:(id)arg0 ;
-(void)addLastWithId:(id)arg0 ;
-(void)clear;
-(id)clone;
-(BOOL)containsWithId:(id)arg0 ;
-(id)getWithInt:(int)arg0 ;
-(id)getFirst;
-(id)getFirstImpl;
-(id)getLast;
-(int)indexOfWithId:(id)arg0 ;
-(int)lastIndexOfWithId:(id)arg0 ;
-(id)listIteratorWithInt:(int)arg0 ;
-(id)removeWithInt:(int)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(id)removeFirst;
-(id)removeFirstImpl;
-(id)removeLast;
-(id)removeLastImpl;
-(id)descendingIterator;
-(BOOL)offerFirstWithId:(id)arg0 ;
-(BOOL)offerLastWithId:(id)arg0 ;
-(id)peekFirst;
-(id)peekLast;
-(id)pollFirst;
-(id)pollLast;
-(id)pop;
-(void)pushWithId:(id)arg0 ;
-(BOOL)removeFirstOccurrenceWithId:(id)arg0 ;
-(BOOL)removeLastOccurrenceWithId:(id)arg0 ;
-(BOOL)removeFirstOccurrenceImplWithId:(id)arg0 ;
-(BOOL)removeOneOccurrenceWithId:(id)arg0 withJavaUtilIterator:(id)arg1 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(int)size;
-(BOOL)offerWithId:(id)arg0 ;
-(id)poll;
-(id)remove;
-(id)peek;
-(id)peekFirstImpl;
-(id)element;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif