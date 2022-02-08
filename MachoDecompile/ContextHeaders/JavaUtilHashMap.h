// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILHASHMAP_H
#define JAVAUTILHASHMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "IOSObjectArray.h"
#import "JavaUtilHashMap_HashMapEntry.h"
#import "AutoreleaseLiteSupport-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@interface JavaUtilHashMap : JavaUtilAbstractMap <AutoreleaseLiteSupport, NSCopying, JavaIoSerializable>

 {
    IOSObjectArray *table_;
    JavaUtilHashMap_HashMapEntry *entryForNullKey_;
    int size_;
    int modCount_;
    uint8_t _autoreleaseLiteLastPoolId;
    int threshold_;
    id<JavaUtilSet> *keySet_HashMap_;
    id<JavaUtilSet> *entrySet_;
    id<JavaUtilCollection> *values_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)autorelease;
-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(void)constructorPutAllWithJavaUtilMap:(id)arg0 ;
-(id)clone;
-(void)init__;
-(BOOL)isEmpty;
-(int)size;
-(id)getWithId:(id)arg0 ;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(id)putValueForNullKeyWithId:(id)arg0 ;
-(void)preModifyWithJavaUtilHashMap_HashMapEntry:(id)arg0 ;
-(void)constructorPutWithId:(id)arg0 withId:(id)arg1 ;
-(void)addNewEntryWithId:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)addNewEntryForNullKeyWithId:(id)arg0 ;
-(id)constructorNewRetainedEntryWithId:(id)arg0 withId:(id)arg1 withInt:(int)arg2 withJavaUtilHashMap_HashMapEntry:(id)arg3 ;
-(void)putAllWithJavaUtilMap:(id)arg0 ;
-(void)ensureCapacityWithInt:(int)arg0 ;
-(id)makeTableWithInt:(int)arg0 ;
-(id)doubleCapacity;
-(id)removeWithId:(id)arg0 ;
-(void)postRemoveWithJavaUtilHashMap_HashMapEntry:(id)arg0 ;
-(void)clear;
-(id)keySet;
-(id)values;
-(id)entrySet;
-(BOOL)containsMappingWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)removeMappingWithId:(id)arg0 withId:(id)arg1 ;
-(id)newKeyIterator;
-(id)newValueIterator;
-(id)newEntryIterator;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)enumerateEntriesWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(int)capacityForInitSizeWithInt:(int)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif