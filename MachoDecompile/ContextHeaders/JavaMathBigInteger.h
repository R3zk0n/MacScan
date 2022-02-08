// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAMATHBIGINTEGER_H
#define JAVAMATHBIGINTEGER_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "IOSByteArray.h"
#import "JavaLangComparable-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaMathBigInteger : NSNumber <JavaLangComparable, JavaIoSerializable>

 {
    IOSIntArray *digits_;
    int numberLength_;
    int sign_;
    int firstNonzeroDigit_;
    int signum_;
    IOSByteArray *magnitude_;
    int hashCode_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withJavaUtilRandom:(id)arg1 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withJavaUtilRandom:(id)arg2 ;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)initWithInt:(int)arg0 withByteArray:(id)arg1 ;
-(id)initWithByteArray:(id)arg0 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withIntArray:(id)arg2 ;
-(id)initWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(id)initWithInt:(int)arg0 withIntArray:(id)arg1 ;
-(id)toByteArray;
-(id)abs;
-(id)negate;
-(id)addWithJavaMathBigInteger:(id)arg0 ;
-(id)subtractWithJavaMathBigInteger:(id)arg0 ;
-(int)signum;
-(id)shiftRightWithInt:(int)arg0 ;
-(id)shiftLeftWithInt:(int)arg0 ;
-(id)shiftLeftOneBit;
-(int)bitLength;
-(BOOL)testBitWithInt:(int)arg0 ;
-(id)setBitWithInt:(int)arg0 ;
-(id)clearBitWithInt:(int)arg0 ;
-(id)flipBitWithInt:(int)arg0 ;
-(int)getLowestSetBit;
-(int)bitCount;
-(id)not__;
-(id)and__WithJavaMathBigInteger:(id)arg0 ;
-(id)or__WithJavaMathBigInteger:(id)arg0 ;
-(id)xor__WithJavaMathBigInteger:(id)arg0 ;
-(id)andNotWithJavaMathBigInteger:(id)arg0 ;
-(int)intValue;
-(NSInteger)longLongValue;
-(float)floatValue;
-(CGFloat)doubleValue;
-(int)compareToWithId:(id)arg0 ;
-(id)minWithJavaMathBigInteger:(id)arg0 ;
-(id)maxWithJavaMathBigInteger:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)equalsArraysWithIntArray:(id)arg0 ;
-(id)toStringWithInt:(int)arg0 ;
-(id)gcdWithJavaMathBigInteger:(id)arg0 ;
-(id)multiplyWithJavaMathBigInteger:(id)arg0 ;
-(id)powWithInt:(int)arg0 ;
-(id)divideAndRemainderWithJavaMathBigInteger:(id)arg0 ;
-(id)divideWithJavaMathBigInteger:(id)arg0 ;
-(id)remainderWithJavaMathBigInteger:(id)arg0 ;
-(id)modInverseWithJavaMathBigInteger:(id)arg0 ;
-(id)modPowWithJavaMathBigInteger:(id)arg0 withJavaMathBigInteger:(id)arg1 ;
-(id)modWithJavaMathBigInteger:(id)arg0 ;
-(BOOL)isProbablePrimeWithInt:(int)arg0 ;
-(id)nextProbablePrime;
-(void)cutOffLeadingZeroes;
-(BOOL)isOne;
-(void)putBytesPositiveToIntegersWithByteArray:(id)arg0 ;
-(void)putBytesNegativeToIntegersWithByteArray:(id)arg0 ;
-(int)getFirstNonzeroDigit;
-(id)copy__;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)unCache;
-(void)dealloc;
-(char *)objCType;
-(void)getValue:(*void)arg0 ;
+(id)valueOfWithLong:(NSInteger)arg0 ;
+(void)setFromStringWithJavaMathBigInteger:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
+(id)probablePrimeWithInt:(int)arg0 withJavaUtilRandom:(id)arg1 ;
+(id)getPowerOfTwoWithInt:(int)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif