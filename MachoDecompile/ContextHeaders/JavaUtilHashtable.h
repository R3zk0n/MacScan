// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHTABLE_H
#define JAVAUTILHASHTABLE_H


#import <Foundation/Foundation.h>

#import "JavaUtilDictionary.h"
#import "IOSObjectArray.h"
#import "JavaUtilMap-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@interface JavaUtilHashtable : JavaUtilDictionary <JavaUtilMap, NSCopying, JavaIoSerializable>

 {
    IOSObjectArray *table_;
    int size_;
    int modCount_;
    int threshold_;
    id<JavaUtilSet> *keySet_;
    id<JavaUtilSet> *entrySet_;
    id<JavaUtilCollection> *values_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(void)constructorPutAllWithJavaUtilMap:(id)arg0 ;
-(id)clone;
-(BOOL)isEmpty;
-(int)size;
-(id)getWithId:(id)arg0 ;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(BOOL)containsWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(void)constructorPutWithId:(id)arg0 withId:(id)arg1 ;
-(void)putAllWithJavaUtilMap:(id)arg0 ;
-(void)ensureCapacityWithInt:(int)arg0 ;
-(id)makeTableWithInt:(int)arg0 ;
-(id)doubleCapacity;
-(id)removeWithId:(id)arg0 ;
-(void)clear;
-(id)keySet;
-(id)values;
-(id)entrySet;
-(id)keys;
-(id)elements;
-(BOOL)containsMappingWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)removeMappingWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(int)capacityForInitSizeWithInt:(int)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif