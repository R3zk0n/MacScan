// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTATOMICATOMICREFERENCE_H
#define JAVAUTILCONCURRENTATOMICATOMICREFERENCE_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentAtomicAtomicReference : NSObject <JavaIoSerializable>

 {
    uint8_t value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithId:(id)arg0 ;
-(id)init;
-(id)get;
-(void)setWithId:(id)arg0 ;
-(void)lazySetWithId:(id)arg0 ;
-(BOOL)compareAndSetWithId:(id)arg0 withId:(id)arg1 ;
-(BOOL)weakCompareAndSetWithId:(id)arg0 withId:(id)arg1 ;
-(id)getAndSetWithId:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif