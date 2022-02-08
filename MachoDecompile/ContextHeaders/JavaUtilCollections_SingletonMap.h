// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCOLLECTIONS_SINGLETONMAP_H
#define JAVAUTILCOLLECTIONS_SINGLETONMAP_H


#import <Foundation/Foundation.h>

#import "JavaUtilAbstractMap.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilCollections_SingletonMap : JavaUtilAbstractMap <JavaIoSerializable>

 {
    id *k_;
    id *v_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)containsKeyWithId:(id)arg0 ;
-(BOOL)containsValueWithId:(id)arg0 ;
-(id)getWithId:(id)arg0 ;
-(int)size;
-(id)entrySet;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif