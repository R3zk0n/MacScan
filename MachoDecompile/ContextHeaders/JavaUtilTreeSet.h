// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREESET_H
#define JAVAUTILTREESET_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractSet.h"
#import "JavaUtilNavigableSet-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilNavigableMap-Protocol.h"
#import "JavaUtilNavigableSet-Protocol.h"

@interface JavaUtilTreeSet : JavaUtilAbstractSet <JavaUtilNavigableSet, NSCopying, JavaIoSerializable>

 {
    id<JavaUtilNavigableMap> *backingMap_;
    id<JavaUtilNavigableSet> *descendingSet_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilNavigableMap:(id)arg0 ;
-(id)init;
-(id)initWithJavaUtilCollection:(id)arg0 ;
-(id)initWithJavaUtilComparator:(id)arg0 ;
-(id)initWithJavaUtilSortedSet:(id)arg0 ;
-(BOOL)addWithId:(id)arg0 ;
-(BOOL)addAllWithJavaUtilCollection:(id)arg0 ;
-(void)clear;
-(id)clone;
-(id)comparator;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)isEmpty;
-(id)iterator;
-(id)descendingIterator;
-(BOOL)removeWithId:(id)arg0 ;
-(int)size;
-(id)first;
-(id)last;
-(id)pollFirst;
-(id)pollLast;
-(id)higherWithId:(id)arg0 ;
-(id)lowerWithId:(id)arg0 ;
-(id)ceilingWithId:(id)arg0 ;
-(id)floorWithId:(id)arg0 ;
-(id)descendingSet;
-(id)subSetWithId:(id)arg0 withBoolean:(BOOL)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3 ;
-(id)headSetWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)tailSetWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)subSetWithId:(id)arg0 withId:(id)arg1 ;
-(id)headSetWithId:(id)arg0 ;
-(id)tailSetWithId:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif