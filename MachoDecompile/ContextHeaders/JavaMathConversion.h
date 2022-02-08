// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAMATHCONVERSION_H
#define JAVAMATHCONVERSION_H


#import <Foundation/Foundation.h>


@interface JavaMathConversion : NSObject



-(id)init;
+(id)bigInteger2StringWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(id)toDecimalScaledStringWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(id)toDecimalScaledStringWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
+(NSInteger)divideLongByBillionWithLong:(NSInteger)arg0 ;
+(CGFloat)bigInteger2DoubleWithJavaMathBigInteger:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif