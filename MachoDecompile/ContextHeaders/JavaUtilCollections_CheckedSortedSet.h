// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_CHECKEDSORTEDSET_H
#define JAVAUTILCOLLECTIONS_CHECKEDSORTEDSET_H

@class CheckedSet;

#import <Foundation/Foundation.h>

#import "JavaUtilSortedSet-Protocol.h"
#import "JavaUtilSortedSet-Protocol.h"

@interface JavaUtilCollections_CheckedSortedSet : CheckedSet <JavaUtilSortedSet>

 {
    id<JavaUtilSortedSet> *ss_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilSortedSet:(id)arg0 withIOSClass:(id)arg1 ;
-(id)comparator;
-(id)subSetWithId:(id)arg0 withId:(id)arg1 ;
-(id)headSetWithId:(id)arg0 ;
-(id)tailSetWithId:(id)arg0 ;
-(id)first;
-(id)last;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif