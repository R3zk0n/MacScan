// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREICUNATIVEDECIMALFORMAT_H
#define LIBCOREICUNATIVEDECIMALFORMAT_H


#import <Foundation/Foundation.h>

#import "JavaMathBigDecimal.h"
#import "NSCopying-Protocol.h"

@interface LibcoreIcuNativeDecimalFormat : NSObject <NSCopying>

 {
    id *nsFormatter_;
    NSString *lastPattern_;
    BOOL negPrefNull_;
    BOOL negSuffNull_;
    BOOL posPrefNull_;
    BOOL posSuffNull_;
    BOOL parseBigDecimal_;
    JavaMathBigDecimal *multiplierBigDecimal_;
}




-(id)initWithNSString:(id)arg0 withJavaTextDecimalFormatSymbols:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withLibcoreIcuLocaleData:(id)arg1 ;
-(void)close;
-(void)dealloc;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(void)setDecimalFormatSymbolsWithJavaTextDecimalFormatSymbols:(id)arg0 ;
-(void)setDecimalFormatSymbolsWithLibcoreIcuLocaleData:(id)arg0 ;
-(id)formatBigDecimalWithJavaMathBigDecimal:(id)arg0 withJavaTextFieldPosition:(id)arg1 ;
-(id)formatBigIntegerWithJavaMathBigInteger:(id)arg0 withJavaTextFieldPosition:(id)arg1 ;
-(id)formatLongWithLong:(NSInteger)arg0 withJavaTextFieldPosition:(id)arg1 ;
-(id)formatDoubleWithDouble:(CGFloat)arg0 withJavaTextFieldPosition:(id)arg1 ;
-(void)applyLocalizedPatternWithNSString:(id)arg0 ;
-(void)applyPatternWithNSString:(id)arg0 ;
-(id)formatToCharacterIteratorWithId:(id)arg0 ;
-(id)toLocalizedPattern;
-(id)toPattern;
-(id)parseWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(int)getMaximumFractionDigits;
-(int)getMaximumIntegerDigits;
-(int)getMinimumFractionDigits;
-(int)getMinimumIntegerDigits;
-(int)getGroupingSize;
-(int)getMultiplier;
-(id)getNegativePrefix;
-(id)getNegativeSuffix;
-(id)getPositivePrefix;
-(id)getPositiveSuffix;
-(BOOL)isDecimalSeparatorAlwaysShown;
-(BOOL)isParseBigDecimal;
-(BOOL)isParseIntegerOnly;
-(BOOL)isGroupingUsed;
-(void)setDecimalSeparatorAlwaysShownWithBoolean:(BOOL)arg0 ;
-(void)setCurrencyWithJavaUtilCurrency:(id)arg0 ;
-(void)setGroupingSizeWithInt:(int)arg0 ;
-(void)setGroupingUsedWithBoolean:(BOOL)arg0 ;
-(void)setMaximumFractionDigitsWithInt:(int)arg0 ;
-(void)setMaximumIntegerDigitsWithInt:(int)arg0 ;
-(void)setMinimumFractionDigitsWithInt:(int)arg0 ;
-(void)setMinimumIntegerDigitsWithInt:(int)arg0 ;
-(void)setMultiplierWithInt:(int)arg0 ;
-(void)setNegativePrefixWithNSString:(id)arg0 ;
-(void)setNegativeSuffixWithNSString:(id)arg0 ;
-(void)setPositivePrefixWithNSString:(id)arg0 ;
-(void)setPositiveSuffixWithNSString:(id)arg0 ;
-(void)setParseBigDecimalWithBoolean:(BOOL)arg0 ;
-(void)setParseIntegerOnlyWithBoolean:(BOOL)arg0 ;
-(void)setRoundingModeWithJavaMathRoundingModeEnum:(id)arg0 withDouble:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(void)applyPatternWithId:(id)arg0 withBoolean:(BOOL)arg1 withNSString:(id)arg2 ;
+(id)openWithNSString:(id)arg0 withNSString:(id)arg1 withChar:(unsigned short)arg2 withChar:(unsigned short)arg3 withNSString:(id)arg4 withChar:(unsigned short)arg5 withNSString:(id)arg6 withNSString:(id)arg7 withChar:(unsigned short)arg8 withChar:(unsigned short)arg9 withNSString:(id)arg10 withChar:(unsigned short)arg11 withChar:(unsigned short)arg12 withChar:(unsigned short)arg13 withChar:(unsigned short)arg14 ;
+(void)setDecimalFormatSymbolsWithId:(id)arg0 withNSString:(id)arg1 withChar:(unsigned short)arg2 withChar:(unsigned short)arg3 withNSString:(id)arg4 withChar:(unsigned short)arg5 withNSString:(id)arg6 withNSString:(id)arg7 withChar:(unsigned short)arg8 withChar:(unsigned short)arg9 withNSString:(id)arg10 withChar:(unsigned short)arg11 withChar:(unsigned short)arg12 withChar:(unsigned short)arg13 withChar:(unsigned short)arg14 ;
+(void)applyPatternImplWithId:(id)arg0 withBoolean:(BOOL)arg1 withNSString:(id)arg2 ;
+(id)cloneImplWithId:(id)arg0 ;
+(void)closeWithId:(id)arg0 ;
+(id)formatDoubleWithId:(id)arg0 withDouble:(CGFloat)arg1 withLibcoreIcuNativeDecimalFormat_FieldPositionIterator:(id)arg2 ;
+(id)formatLongWithId:(id)arg0 withLong:(NSInteger)arg1 withLibcoreIcuNativeDecimalFormat_FieldPositionIterator:(id)arg2 ;
+(id)parseWithId:(id)arg0 withNSString:(id)arg1 withJavaTextParsePosition:(id)arg2 withBoolean:(BOOL)arg3 ;
+(id)toPatternImplWithId:(id)arg0 withBoolean:(BOOL)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif