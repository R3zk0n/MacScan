// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAMATHBITLEVEL_H
#define JAVAMATHBITLEVEL_H


#import <Foundation/Foundation.h>


@interface JavaMathBitLevel : NSObject



-(id)init;
+(int)bitLengthWithJavaMathBigInteger:(id)arg0 ;
+(int)bitCountWithJavaMathBigInteger:(id)arg0 ;
+(BOOL)testBitWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(BOOL)nonZeroDroppedBitsWithInt:(int)arg0 withIntArray:(id)arg1 ;
+(id)shiftLeftWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(void)inplaceShiftLeftWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(void)shiftLeftWithIntArray:(id)arg0 withIntArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(void)shiftLeftOneBitWithIntArray:(id)arg0 withIntArray:(id)arg1 withInt:(int)arg2 ;
+(id)shiftLeftOneBitWithJavaMathBigInteger:(id)arg0 ;
+(id)shiftRightWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(void)inplaceShiftRightWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(BOOL)shiftRightWithIntArray:(id)arg0 withInt:(int)arg1 withIntArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(id)flipBitWithJavaMathBigInteger:(id)arg0 withInt:(int)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif