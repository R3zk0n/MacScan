// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_H
#define JAVAUTILTREEMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "JavaUtilTreeMap_Node.h"
#import "JavaUtilTreeMap_EntrySet.h"
#import "JavaUtilTreeMap_KeySet.h"
#import "JavaUtilTreeMap_ValuesCollection.h"
#import "JavaUtilSortedMap-Protocol.h"
#import "JavaUtilNavigableMap-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilComparator-Protocol.h"

@interface JavaUtilTreeMap : JavaUtilAbstractMap <JavaUtilSortedMap, JavaUtilNavigableMap, NSCopying, JavaIoSerializable>

 {
    id<JavaUtilComparator> *comparator_;
    JavaUtilTreeMap_Node *root_;
    int size_;
    int modCount_;
    JavaUtilTreeMap_EntrySet *entrySet_;
    JavaUtilTreeMap_KeySet *keySet_TreeMap_;
    JavaUtilTreeMap_ValuesCollection *valuesCollection_TreeMap_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithJavaUtilMap:(id)arg0 ;
-(id)initWithJavaUtilComparator:(id)arg0 ;
-(id)initWithJavaUtilSortedMap:(id)arg0 ;
-(id)clone;
-(int)size;
-(BOOL)isEmpty;
-(id)getWithId:(id)arg0 ;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(void)clear;
-(id)removeWithId:(id)arg0 ;
-(id)putInternalWithId:(id)arg0 withId:(id)arg1 ;
-(id)findWithId:(id)arg0 withJavaUtilTreeMap_RelationEnum:(id)arg1 ;
-(id)findByObjectWithId:(id)arg0 ;
-(id)findByEntryWithJavaUtilMap_Entry:(id)arg0 ;
-(void)removeInternalWithJavaUtilTreeMap_Node:(id)arg0 ;
-(id)removeInternalByKeyWithId:(id)arg0 ;
-(void)replaceInParentWithJavaUtilTreeMap_Node:(id)arg0 withJavaUtilTreeMap_Node:(id)arg1 ;
-(void)rebalanceWithJavaUtilTreeMap_Node:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)rotateLeftWithJavaUtilTreeMap_Node:(id)arg0 ;
-(void)rotateRightWithJavaUtilTreeMap_Node:(id)arg0 ;
-(id)immutableCopyWithJavaUtilMap_Entry:(id)arg0 ;
-(id)firstNode;
-(id)firstEntry;
-(id)internalPollFirstEntry;
-(id)pollFirstEntry;
-(id)firstKey;
-(id)lastNode;
-(id)lastEntry;
-(id)internalPollLastEntry;
-(id)pollLastEntry;
-(id)lastKey;
-(id)lowerEntryWithId:(id)arg0 ;
-(id)lowerKeyWithId:(id)arg0 ;
-(id)floorEntryWithId:(id)arg0 ;
-(id)floorKeyWithId:(id)arg0 ;
-(id)ceilingEntryWithId:(id)arg0 ;
-(id)ceilingKeyWithId:(id)arg0 ;
-(id)higherEntryWithId:(id)arg0 ;
-(id)higherKeyWithId:(id)arg0 ;
-(id)comparator;
-(id)entrySet;
-(id)keySet;
-(id)navigableKeySet;
-(id)values;
-(id)subMapWithId:(id)arg0 withBoolean:(BOOL)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3 ;
-(id)subMapWithId:(id)arg0 withId:(id)arg1 ;
-(id)headMapWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)headMapWithId:(id)arg0 ;
-(id)tailMapWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)tailMapWithId:(id)arg0 ;
-(id)descendingMap;
-(id)descendingKeySet;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(int)countWithJavaUtilIterator:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif