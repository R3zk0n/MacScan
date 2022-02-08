// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTATOMICATOMICLONG_H
#define JAVAUTILCONCURRENTATOMICATOMICLONG_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentAtomicAtomicLong : NSNumber <JavaIoSerializable>

 {
    uint8_t value_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithLong:(NSInteger)arg0 ;
-(id)init;
-(NSInteger)get;
-(void)setWithLong:(NSInteger)arg0 ;
-(void)lazySetWithLong:(NSInteger)arg0 ;
-(NSInteger)getAndSetWithLong:(NSInteger)arg0 ;
-(BOOL)compareAndSetWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(BOOL)weakCompareAndSetWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)getAndIncrement;
-(NSInteger)getAndDecrement;
-(NSInteger)getAndAddWithLong:(NSInteger)arg0 ;
-(NSInteger)incrementAndGet;
-(NSInteger)decrementAndGet;
-(NSInteger)addAndGetWithLong:(NSInteger)arg0 ;
-(int)intValue;
-(NSInteger)longLongValue;
-(float)floatValue;
-(CGFloat)doubleValue;
+(BOOL)VMSupportsCS8;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif