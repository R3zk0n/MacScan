// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILRANDOM_H
#define JAVAUTILRANDOM_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilRandom : NSObject <JavaIoSerializable>

 {
    BOOL haveNextNextGaussian_;
    NSInteger seed_;
    CGFloat nextNextGaussian_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithLong:(NSInteger)arg0 ;
-(int)nextWithInt:(int)arg0 ;
-(BOOL)nextBoolean;
-(void)nextBytesWithByteArray:(id)arg0 ;
-(CGFloat)nextDouble;
-(float)nextFloat;
-(CGFloat)nextGaussian;
-(int)nextInt;
-(int)nextIntWithInt:(int)arg0 ;
-(NSInteger)nextLong;
-(void)setSeedWithLong:(NSInteger)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif