// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_CHECKEDSORTEDMAP_H
#define JAVAUTILCOLLECTIONS_CHECKEDSORTEDMAP_H

@class CheckedMap;

#import <Foundation/Foundation.h>

#import "JavaUtilSortedMap-Protocol.h"
#import "JavaUtilSortedMap-Protocol.h"

@interface JavaUtilCollections_CheckedSortedMap : CheckedMap <JavaUtilSortedMap>

 {
    id<JavaUtilSortedMap> *sm_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilSortedMap:(id)arg0 withIOSClass:(id)arg1 withIOSClass:(id)arg2 ;
-(id)comparator;
-(id)subMapWithId:(id)arg0 withId:(id)arg1 ;
-(id)headMapWithId:(id)arg0 ;
-(id)tailMapWithId:(id)arg0 ;
-(id)firstKey;
-(id)lastKey;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif