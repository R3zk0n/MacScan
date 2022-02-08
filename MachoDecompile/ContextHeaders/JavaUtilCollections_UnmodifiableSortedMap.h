// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_UNMODIFIABLESORTEDMAP_H
#define JAVAUTILCOLLECTIONS_UNMODIFIABLESORTEDMAP_H

@class UnmodifiableMap;

#import <Foundation/Foundation.h>

#import "JavaUtilSortedMap-Protocol.h"
#import "JavaUtilSortedMap-Protocol.h"

@interface JavaUtilCollections_UnmodifiableSortedMap : UnmodifiableMap <JavaUtilSortedMap>

 {
    id<JavaUtilSortedMap> *sm_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilSortedMap:(id)arg0 ;
-(id)comparator;
-(id)firstKey;
-(id)headMapWithId:(id)arg0 ;
-(id)lastKey;
-(id)subMapWithId:(id)arg0 withId:(id)arg1 ;
-(id)tailMapWithId:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif