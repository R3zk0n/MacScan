// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTATOMICATOMICBOOLEAN_H
#define JAVAUTILCONCURRENTATOMICATOMICBOOLEAN_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentAtomicAtomicBoolean : NSObject <JavaIoSerializable>

 {
    uint8_t value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithBoolean:(BOOL)arg0 ;
-(id)init;
-(BOOL)get;
-(BOOL)compareAndSetWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)weakCompareAndSetWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 ;
-(void)setWithBoolean:(BOOL)arg0 ;
-(void)lazySetWithBoolean:(BOOL)arg0 ;
-(BOOL)getAndSetWithBoolean:(BOOL)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif