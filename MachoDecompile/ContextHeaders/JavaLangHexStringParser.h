// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGHEXSTRINGPARSER_H
#define JAVALANGHEXSTRINGPARSER_H


#import <Foundation/Foundation.h>


@interface JavaLangHexStringParser : NSObject {
    int EXPONENT_WIDTH_;
    int MANTISSA_WIDTH_;
    NSInteger EXPONENT_BASE_;
    NSInteger MAX_EXPONENT_;
    NSInteger MIN_EXPONENT_;
    NSInteger MANTISSA_MASK_;
    NSInteger sign_;
    NSInteger exponent_;
    NSInteger mantissa_;
    NSString *abandonedNumber_;
}




-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(NSInteger)parseWithNSString:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)parseHexSignWithNSString:(id)arg0 ;
-(void)parseExponentWithNSString:(id)arg0 ;
-(void)parseMantissaWithNSString:(id)arg0 ;
-(void)setInfinite;
-(void)setZero;
-(void)checkedAddExponentWithLong:(NSInteger)arg0 ;
-(void)processNormalNumber;
-(void)processSubNormalNumber;
-(void)fitMantissaInDesiredWidthWithInt:(int)arg0 ;
-(void)discardTrailingBitsWithLong:(NSInteger)arg0 ;
-(void)round;
-(id)getNormalizedSignificandWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(int)getOffsetWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(int)countBitsLengthWithLong:(NSInteger)arg0 ;
-(void)dealloc;
+(CGFloat)parseDoubleWithNSString:(id)arg0 ;
+(float)parseFloatWithNSString:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif