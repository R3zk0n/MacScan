// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTREEMAP_SUBMAP_H
#define JAVAUTILTREEMAP_SUBMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "JavaUtilTreeMap.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilTreeMap_SubMap : JavaUtilAbstractMap <JavaIoSerializable>

 {
    id *fromKey_;
    id *toKey_;
    BOOL fromStart_;
    BOOL toEnd_;
    JavaUtilTreeMap *this$0_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)entrySet;
-(id)readResolve;
-(id)initWithJavaUtilTreeMap:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif