// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAMATHBIGDECIMAL_H
#define JAVAMATHBIGDECIMAL_H


#import <Foundation/Foundation.h>

#import "JavaMathBigInteger.h"
#import "JavaLangComparable-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaMathBigDecimal : NSNumber <JavaLangComparable, JavaIoSerializable>

 {
    NSString *toStringImage_;
    int hashCode_;
    JavaMathBigInteger *intVal_;
    int bitLength_;
    NSInteger smallValue_;
    int scale__;
    int precision_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)initWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithCharArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withJavaMathMathContext:(id)arg3 ;
-(id)initWithCharArray:(id)arg0 ;
-(id)initWithCharArray:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)initWithDouble:(CGFloat)arg0 ;
-(id)initWithDouble:(CGFloat)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)initWithJavaMathBigInteger:(id)arg0 ;
-(id)initWithJavaMathBigInteger:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)initWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
-(id)initWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 withJavaMathMathContext:(id)arg2 ;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)initWithLong:(NSInteger)arg0 ;
-(id)initWithLong:(NSInteger)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)addWithJavaMathBigDecimal:(id)arg0 ;
-(id)addWithJavaMathBigDecimal:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)subtractWithJavaMathBigDecimal:(id)arg0 ;
-(id)subtractWithJavaMathBigDecimal:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)multiplyWithJavaMathBigDecimal:(id)arg0 ;
-(id)multiplyWithJavaMathBigDecimal:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)divideWithJavaMathBigDecimal:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)divideWithJavaMathBigDecimal:(id)arg0 withInt:(int)arg1 withJavaMathRoundingModeEnum:(id)arg2 ;
-(id)divideWithJavaMathBigDecimal:(id)arg0 withInt:(int)arg1 ;
-(id)divideWithJavaMathBigDecimal:(id)arg0 withJavaMathRoundingModeEnum:(id)arg1 ;
-(id)divideWithJavaMathBigDecimal:(id)arg0 ;
-(id)divideWithJavaMathBigDecimal:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)divideToIntegralValueWithJavaMathBigDecimal:(id)arg0 ;
-(id)divideToIntegralValueWithJavaMathBigDecimal:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)remainderWithJavaMathBigDecimal:(id)arg0 ;
-(id)remainderWithJavaMathBigDecimal:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)divideAndRemainderWithJavaMathBigDecimal:(id)arg0 ;
-(id)divideAndRemainderWithJavaMathBigDecimal:(id)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)powWithInt:(int)arg0 ;
-(id)powWithInt:(int)arg0 withJavaMathMathContext:(id)arg1 ;
-(id)abs;
-(id)absWithJavaMathMathContext:(id)arg0 ;
-(id)negate;
-(id)negateWithJavaMathMathContext:(id)arg0 ;
-(id)plus;
-(id)plusWithJavaMathMathContext:(id)arg0 ;
-(int)signum;
-(BOOL)isZero;
-(int)scale__;
-(int)precision;
-(id)unscaledValue;
-(id)roundWithJavaMathMathContext:(id)arg0 ;
-(id)setScaleWithInt:(int)arg0 withJavaMathRoundingModeEnum:(id)arg1 ;
-(id)setScaleWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)setScaleWithInt:(int)arg0 ;
-(id)movePointLeftWithInt:(int)arg0 ;
-(id)movePointWithLong:(NSInteger)arg0 ;
-(id)movePointRightWithInt:(int)arg0 ;
-(id)scaleByPowerOfTenWithInt:(int)arg0 ;
-(id)stripTrailingZeros;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)minWithJavaMathBigDecimal:(id)arg0 ;
-(id)maxWithJavaMathBigDecimal:(id)arg0 ;
-(id)toEngineeringString;
-(id)toPlainString;
-(id)toBigInteger;
-(id)toBigIntegerExact;
-(NSInteger)longLongValue;
-(NSInteger)longValueExact;
-(int)intValue;
-(int)intValueExact;
-(short)shortValueExact;
-(char)byteValueExact;
-(float)floatValue;
-(CGFloat)doubleValue;
-(id)ulp;
-(void)inplaceRoundWithJavaMathMathContext:(id)arg0 ;
-(void)smallRoundWithJavaMathMathContext:(id)arg0 withInt:(int)arg1 ;
-(NSInteger)valueExactWithInt:(int)arg0 ;
-(int)aproxPrecision;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(id)getUnscaledValue;
-(void)setUnscaledValueWithJavaMathBigInteger:(id)arg0 ;
-(void)dealloc;
-(char *)objCType;
-(void)getValue:(*void)arg0 ;
+(id)valueOfWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
+(id)valueOfWithLong:(NSInteger)arg0 ;
+(id)valueOfWithDouble:(CGFloat)arg0 ;
+(id)addAndMult10WithJavaMathBigDecimal:(id)arg0 withJavaMathBigDecimal:(id)arg1 withInt:(int)arg2 ;
+(id)divideBigIntegersWithJavaMathBigInteger:(id)arg0 withJavaMathBigInteger:(id)arg1 withInt:(int)arg2 withJavaMathRoundingModeEnum:(id)arg3 ;
+(id)dividePrimitiveLongsWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 withJavaMathRoundingModeEnum:(id)arg3 ;
+(int)longCompareToWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
+(int)roundingBehaviorWithInt:(int)arg0 withInt:(int)arg1 withJavaMathRoundingModeEnum:(id)arg2 ;
+(int)toIntScaleWithLong:(NSInteger)arg0 ;
+(id)zeroScaledByWithLong:(NSInteger)arg0 ;
+(int)bitLengthWithLong:(NSInteger)arg0 ;
+(int)bitLengthWithInt:(int)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif