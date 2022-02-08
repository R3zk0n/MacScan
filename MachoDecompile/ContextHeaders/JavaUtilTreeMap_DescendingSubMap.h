// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_DESCENDINGSUBMAP_H
#define JAVAUTILTREEMAP_DESCENDINGSUBMAP_H

@class NavigableSubMap;


#import "JavaUtilComparator-Protocol.h"

@interface JavaUtilTreeMap_DescendingSubMap : NavigableSubMap {
    id<JavaUtilComparator> *reverseComparator_;
}




-(id)initWithJavaUtilTreeMap:(id)arg0 withId:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 withId:(id)arg3 withJavaUtilTreeMap_BoundEnum:(id)arg4 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif