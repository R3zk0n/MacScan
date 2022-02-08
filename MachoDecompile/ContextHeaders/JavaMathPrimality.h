// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAMATHPRIMALITY_H
#define JAVAMATHPRIMALITY_H


#import <Foundation/Foundation.h>


@interface JavaMathPrimality : NSObject



-(id)init;
+(id)nextProbablePrimeWithJavaMathBigInteger:(id)arg0 ;
+(id)consBigIntegerWithInt:(int)arg0 withInt:(int)arg1 withJavaUtilRandom:(id)arg2 ;
+(BOOL)isProbablePrimeWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(BOOL)millerRabinWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif