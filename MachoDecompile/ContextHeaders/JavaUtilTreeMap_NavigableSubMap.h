// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_NAVIGABLESUBMAP_H
#define JAVAUTILTREEMAP_NAVIGABLESUBMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "JavaUtilTreeMap.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilTreeMap_NavigableSubMap : JavaUtilAbstractMap <JavaIoSerializable>

 {
    JavaUtilTreeMap *m_;
    id *lo_;
    id *hi_;
    BOOL fromStart_;
    BOOL toEnd_;
    BOOL loInclusive_;
    BOOL hiInclusive_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilTreeMap:(id)arg0 withId:(id)arg1 withJavaUtilTreeMap_BoundEnum:(id)arg2 withId:(id)arg3 withJavaUtilTreeMap_BoundEnum:(id)arg4 ;
-(id)entrySet;
-(id)readResolve;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif