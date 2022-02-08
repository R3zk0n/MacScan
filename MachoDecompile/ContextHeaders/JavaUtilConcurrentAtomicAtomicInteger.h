// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTATOMICATOMICINTEGER_H
#define JAVAUTILCONCURRENTATOMICATOMICINTEGER_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentAtomicAtomicInteger : NSNumber <JavaIoSerializable>

 {
    uint8_t value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 ;
-(id)init;
-(int)get;
-(void)setWithInt:(int)arg0 ;
-(void)lazySetWithInt:(int)arg0 ;
-(int)getAndSetWithInt:(int)arg0 ;
-(BOOL)compareAndSetWithInt:(int)arg0 withInt:(int)arg1 ;
-(BOOL)weakCompareAndSetWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)getAndIncrement;
-(int)getAndDecrement;
-(int)getAndAddWithInt:(int)arg0 ;
-(int)incrementAndGet;
-(int)decrementAndGet;
-(int)addAndGetWithInt:(int)arg0 ;
-(int)intValue;
-(NSInteger)longLongValue;
-(float)floatValue;
-(CGFloat)doubleValue;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif