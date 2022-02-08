// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTDECIMALFORMAT_H
#define JAVATEXTDECIMALFORMAT_H



#import "JavaTextNumberFormat.h"
#import "JavaTextDecimalFormatSymbols.h"
#import "LibcoreIcuNativeDecimalFormat.h"
#import "JavaMathRoundingModeEnum.h"

@interface JavaTextDecimalFormat : JavaTextNumberFormat {
    JavaTextDecimalFormatSymbols *symbols_;
    LibcoreIcuNativeDecimalFormat *ndf_;
    JavaMathRoundingModeEnum *roundingMode_;
}




-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaTextDecimalFormatSymbols:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(void)initNativeWithNSString:(id)arg0 ;
-(void)applyLocalizedPatternWithNSString:(id)arg0 ;
-(void)applyPatternWithNSString:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)formatToCharacterIteratorWithId:(id)arg0 ;
-(void)checkBufferAndFieldPositionWithJavaLangStringBuffer:(id)arg0 withJavaTextFieldPosition:(id)arg1 ;
-(id)formatWithDouble:(CGFloat)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)formatWithLong:(NSInteger)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)formatWithId:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)getDecimalFormatSymbols;
-(id)getCurrency;
-(int)getGroupingSize;
-(int)getMultiplier;
-(id)getNegativePrefix;
-(id)getNegativeSuffix;
-(id)getPositivePrefix;
-(id)getPositiveSuffix;
-(NSUInteger)hash;
-(BOOL)isDecimalSeparatorAlwaysShown;
-(BOOL)isParseBigDecimal;
-(void)setParseIntegerOnlyWithBoolean:(BOOL)arg0 ;
-(BOOL)isParseIntegerOnly;
-(id)parseWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(void)setDecimalFormatSymbolsWithJavaTextDecimalFormatSymbols:(id)arg0 ;
-(void)setCurrencyWithJavaUtilCurrency:(id)arg0 ;
-(void)setDecimalSeparatorAlwaysShownWithBoolean:(BOOL)arg0 ;
-(void)setGroupingSizeWithInt:(int)arg0 ;
-(void)setGroupingUsedWithBoolean:(BOOL)arg0 ;
-(BOOL)isGroupingUsed;
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
-(id)toLocalizedPattern;
-(id)toPattern;
-(id)getRoundingMode;
-(void)setRoundingModeWithJavaMathRoundingModeEnum:(id)arg0 ;
-(void)dealloc;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif