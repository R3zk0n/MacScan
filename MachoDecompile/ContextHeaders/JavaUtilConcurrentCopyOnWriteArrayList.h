// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCOPYONWRITEARRAYLIST_H
#define JAVAUTILCONCURRENTCOPYONWRITEARRAYLIST_H


#import <Foundation/Foundation.h>

#import "JavaUtilList-Protocol.h"
#import "JavaUtilRandomAccess-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentCopyOnWriteArrayList : NSObject <JavaUtilList, JavaUtilRandomAccess, NSCopying, JavaIoSerializable>

 {
    uint8_t elements_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(id)initWithNSObjectArray:(id)arg0 ;
-(id)clone;
-(int)size;
-(id)getWithInt:(int)arg0 ;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)containsAllWithJavaUtilCollection:(id)arg0 ;
-(int)indexOfWithId:(id)arg0 withInt:(int)arg1 ;
-(int)indexOfWithId:(id)arg0 ;
-(int)lastIndexOfWithId:(id)arg0 withInt:(int)arg1 ;
-(int)lastIndexOfWithId:(id)arg0 ;
-(BOOL)isEmpty;
-(id)iterator;
-(id)listIteratorWithInt:(int)arg0 ;
-(id)listIterator;
-(id)subListWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(void)addWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)addAllWithInt:(int)arg0 withJavaUtilCollection:(id)arg1 ;
-(int)addAllAbsentWithJavaUtilCollection:(id)arg0 ;
-(BOOL)addIfAbsentWithId:(id)arg0 ;
-(void)clear;
-(id)removeWithInt:(int)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(BOOL)removeAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)retainAllWithJavaUtilCollection:(id)arg0 ;
-(int)removeOrRetainWithJavaUtilCollection:(id)arg0 withBoolean:(BOOL)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(void)removeRangeWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)getArray;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(BOOL)containsAllWithJavaUtilCollection:(id)arg0 withNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)lastIndexOfWithId:(id)arg0 withNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)indexOfWithId:(id)arg0 withNSObjectArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif