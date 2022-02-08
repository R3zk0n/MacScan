// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_BOUNDEDMAP_H
#define JAVAUTILTREEMAP_BOUNDEDMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "JavaUtilTreeMap.h"
#import "JavaUtilTreeMap_BoundEnum.h"
#import "JavaUtilTreeMap_BoundedMap_BoundedEntrySet.h"
#import "JavaUtilTreeMap_BoundedMap_BoundedKeySet.h"
#import "JavaUtilTreeMap_BoundedMap_BoundedValuesCollection.h"
#import "JavaUtilNavigableMap-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilTreeMap_BoundedMap : JavaUtilAbstractMap <JavaUtilNavigableMap, JavaIoSerializable>

 {
    JavaUtilTreeMap *this$0_;
    BOOL ascending_;
    id *from_;
    JavaUtilTreeMap_BoundEnum *fromBound_;
    id *to_;
    JavaUtilTreeMap_BoundEnum *toBound_;
    JavaUtilTreeMap_BoundedMap_BoundedEntrySet *entrySet_;
    JavaUtilTreeMap_BoundedMap_BoundedKeySet *keySet_BoundedMap_;
    JavaUtilTreeMap_BoundedMap_BoundedValuesCollection *valuesCollection_BoundedMap_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilTreeMap:(id)arg0 withBoolean:(BOOL)arg1 withId:(id)arg2 withJavaUtilTreeMap_BoundEnum:(id)arg3 withId:(id)arg4 withJavaUtilTreeMap_BoundEnum:(id)arg5 ;
-(int)size;
-(BOOL)isEmpty;
-(id)getWithId:(id)arg0 ;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(id)putWithId:(id)arg0 withId:(id)arg1 ;
-(id)removeWithId:(id)arg0 ;
-(BOOL)isInBoundsWithId:(id)arg0 ;
-(BOOL)isInBoundsWithId:(id)arg0 withJavaUtilTreeMap_BoundEnum:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 ;
-(id)boundWithJavaUtilTreeMap_Node:(id)arg0 withJavaUtilTreeMap_BoundEnum:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 ;
-(id)firstEntry;
-(id)pollFirstEntry;
-(id)firstKey;
-(id)lastEntry;
-(id)pollLastEntry;
-(id)lastKey;
-(id)endpointWithBoolean:(BOOL)arg0 ;
-(id)findBoundedWithId:(id)arg0 withJavaUtilTreeMap_RelationEnum:(id)arg1 ;
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
-(id)descendingMap;
-(id)descendingKeySet;
-(id)subMapWithId:(id)arg0 withBoolean:(BOOL)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3 ;
-(id)subMapWithId:(id)arg0 withId:(id)arg1 ;
-(id)headMapWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)headMapWithId:(id)arg0 ;
-(id)tailMapWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)tailMapWithId:(id)arg0 ;
-(id)subMapWithId:(id)arg0 withJavaUtilTreeMap_BoundEnum:(id)arg1 withId:(id)arg2 withJavaUtilTreeMap_BoundEnum:(id)arg3 ;
-(id)outOfBoundsWithId:(id)arg0 withJavaUtilTreeMap_BoundEnum:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 ;
-(id)writeReplace;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif