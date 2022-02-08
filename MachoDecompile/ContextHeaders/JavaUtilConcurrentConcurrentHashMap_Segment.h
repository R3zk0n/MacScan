// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCONCURRENTHASHMAP_SEGMENT_H
#define JAVAUTILCONCURRENTCONCURRENTHASHMAP_SEGMENT_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentLocksReentrantLock.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentConcurrentHashMap_Segment : JavaUtilConcurrentLocksReentrantLock <JavaIoSerializable>

 {
    float loadFactor_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithFloat:(float)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif