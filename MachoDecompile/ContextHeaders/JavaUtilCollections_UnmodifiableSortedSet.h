// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_UNMODIFIABLESORTEDSET_H
#define JAVAUTILCOLLECTIONS_UNMODIFIABLESORTEDSET_H

@class UnmodifiableSet;

#import <Foundation/Foundation.h>

#import "JavaUtilSortedSet-Protocol.h"
#import "JavaUtilSortedSet-Protocol.h"

@interface JavaUtilCollections_UnmodifiableSortedSet : UnmodifiableSet <JavaUtilSortedSet>

 {
    id<JavaUtilSortedSet> *ss_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilSortedSet:(id)arg0 ;
-(id)comparator;
-(id)first;
-(id)headSetWithId:(id)arg0 ;
-(id)last;
-(id)subSetWithId:(id)arg0 withId:(id)arg1 ;
-(id)tailSetWithId:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif