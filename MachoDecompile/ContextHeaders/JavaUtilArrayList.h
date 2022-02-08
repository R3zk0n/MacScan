// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILARRAYLIST_H
#define JAVAUTILARRAYLIST_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractList.h"
#import "IOSObjectArray.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilRandomAccess-Protocol.h"

@interface JavaUtilArrayList : JavaUtilAbstractList <NSCopying, JavaIoSerializable, JavaUtilRandomAccess>

 {
    int size_;
    IOSObjectArray *array_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(id)init;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(void)addWithInt:(int)arg0 withId:(id)arg1 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(BOOL)addAllWithInt:(int)arg0 withJavaUtilCollection:(id)arg1 ;
-(void)clear;
-(id)clone;
-(void)ensureCapacityWithInt:(int)arg0 ;
-(id)getWithInt:(int)arg0 ;
-(int)size;
-(BOOL)isEmpty;
-(BOOL)containsWithId:(id)arg0 ;
-(int)indexOfWithId:(id)arg0 ;
-(int)lastIndexOfWithId:(id)arg0 ;
-(id)removeWithInt:(int)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(void)removeRangeWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)setWithInt:(int)arg0 withId:(id)arg1 ;
-(id)toArray;
-(id)toArrayWithNSObjectArray:(id)arg0 ;
-(void)trimToSize;
-(id)iterator;
-(BOOL)isEqual:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(int)newCapacityWithInt:(int)arg0 ;
+(id)throwIndexOutOfBoundsExceptionWithInt:(int)arg0 withInt:(int)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif