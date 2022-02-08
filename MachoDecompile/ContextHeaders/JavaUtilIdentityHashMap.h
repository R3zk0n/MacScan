// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILIDENTITYHASHMAP_H
#define JAVAUTILIDENTITYHASHMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "IOSObjectArray.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface JavaUtilIdentityHashMap : JavaUtilAbstractMap <JavaUtilMap, JavaIoSerializable, NSCopying>

 {
    IOSObjectArray *elementData_;
    int size_;
    int threshold_;
    int modCount_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(int)getThresholdWithInt:(int)arg0 ;
-(int)computeElementArraySize;
-(id)newElementArrayWithInt:(int)arg0 ;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(id)massageValueWithId:(id)arg0 ;
-(void)clear;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(id)getWithId:(id)arg0 ;
-(id)getEntryWithId:(id)arg0 ;
-(id)getEntryWithInt:(int)arg0 ;
-(int)findIndexWithId:(id)arg0 withNSObjectArray:(id)arg1 ;
-(int)getModuloHashWithId:(id)arg0 withInt:(int)arg1 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(void)putAllWithJavaUtilMap:(id)arg0 ;
-(void)computeMaxSize;
-(id)removeWithId:(id)arg0 ;
-(id)entrySet;
-(id)keySet;
-(id)values;
-(BOOL)isEqual:(id)arg0 ;
-(id)clone;
-(BOOL)isEmpty;
-(int)size;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)putAllImplWithJavaUtilMap:(id)arg0 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif