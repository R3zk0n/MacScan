// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_KEYSET_H
#define JAVAUTILTREEMAP_KEYSET_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractSet.h"
#import "JavaUtilTreeMap.h"
#import "JavaUtilNavigableSet-Protocol.h"

@interface JavaUtilTreeMap_KeySet : JavaUtilAbstractSet <JavaUtilNavigableSet>

 {
    JavaUtilTreeMap *this$0_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(int)size;
-(id)iterator;
-(id)descendingIterator;
-(BOOL)containsWithId:(id)arg0 ;
-(BOOL)removeWithId:(id)arg0 ;
-(void)clear;
-(id)comparator;
-(id)first;
-(id)last;
-(id)lowerWithId:(id)arg0 ;
-(id)floorWithId:(id)arg0 ;
-(id)ceilingWithId:(id)arg0 ;
-(id)higherWithId:(id)arg0 ;
-(id)pollFirst;
-(id)pollLast;
-(id)subSetWithId:(id)arg0 withBoolean:(BOOL)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3 ;
-(id)subSetWithId:(id)arg0 withId:(id)arg1 ;
-(id)headSetWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)headSetWithId:(id)arg0 ;
-(id)tailSetWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)tailSetWithId:(id)arg0 ;
-(id)descendingSet;
-(id)initWithJavaUtilTreeMap:(id)arg0 ;
-(void)__javaClone;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif