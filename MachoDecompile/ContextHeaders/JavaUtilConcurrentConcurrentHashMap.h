// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "JavaUtilConcurrentConcurrentHashMap_KeySetView.h"
#import "JavaUtilConcurrentConcurrentHashMap_ValuesView.h"
#import "JavaUtilConcurrentConcurrentHashMap_EntrySetView.h"
#import "JavaUtilConcurrentConcurrentMap-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentConcurrentHashMap : JavaUtilAbstractMap <JavaUtilConcurrentConcurrentMap, JavaIoSerializable>

 {
    uint8_t table_;
    uint8_t nextTable_;
    uint8_t baseCount_;
    uint8_t sizeCtl_;
    uint8_t transferIndex_;
    uint8_t cellsBusy_;
    uint8_t counterCells_;
    JavaUtilConcurrentConcurrentHashMap_KeySetView *keySet_ConcurrentHashMap_;
    JavaUtilConcurrentConcurrentHashMap_ValuesView *values_;
    JavaUtilConcurrentConcurrentHashMap_EntrySetView *entrySet_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 withInt:(int)arg2 ;
-(int)size;
-(BOOL)isEmpty;
-(id)getWithId:(id)arg0 ;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(id)putValWithId:(id)arg0 withId:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)putAllWithJavaUtilMap:(id)arg0 ;
-(id)removeWithId:(id)arg0 ;
-(id)replaceNodeWithId:(id)arg0 withId:(id)arg1 withId:(id)arg2 ;
-(void)clear;
-(id)keySet;
-(id)values;
-(id)entrySet;
-(BOOL)isEqual:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(id)putIfAbsentWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)removeWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)replaceWithId:(id)arg0 withId:(id)arg1 withId:(id)arg2 ;
-(id)replaceWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)containsWithId:(id)arg0 ;
-(id)keys;
-(id)elements;
-(NSInteger)mappingCount;
-(id)keySetWithId:(id)arg0 ;
-(id)initTable;
-(void)addCountWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
-(id)helpTransferWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg1 ;
-(void)tryPresizeWithInt:(int)arg0 ;
-(void)transferWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg1 ;
-(void)treeifyBinWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withInt:(int)arg1 ;
-(NSInteger)sumCount;
-(void)fullAddCountWithLong:(NSInteger)arg0 withJavaUtilConcurrentConcurrentHashMap_CounterHashCode:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)dealloc;
-(void)__javaClone;
+(int)spreadWithInt:(int)arg0 ;
+(int)tableSizeForWithInt:(int)arg0 ;
+(id)comparableClassForWithId:(id)arg0 ;
+(int)compareComparablesWithIOSClass:(id)arg0 withId:(id)arg1 withId:(id)arg2 ;
+(id)tabAtWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withInt:(int)arg1 ;
+(BOOL)casTabAtWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withInt:(int)arg1 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg2 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg3 ;
+(void)setTabAtWithJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg0 withInt:(int)arg1 withJavaUtilConcurrentConcurrentHashMap_Node:(id)arg2 ;
+(id)newKeySet;
+(id)newKeySetWithInt:(int)arg0 ;
+(int)resizeStampWithInt:(int)arg0 ;
+(id)untreeifyWithJavaUtilConcurrentConcurrentHashMap_Node:(id)arg0 ;
+(void)ensureLoadedWithIOSClass:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif