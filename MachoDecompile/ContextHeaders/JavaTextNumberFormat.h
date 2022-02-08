// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTNUMBERFORMAT_H
#define JAVATEXTNUMBERFORMAT_H



#import "JavaTextFormat.h"

@interface JavaTextNumberFormat : JavaTextFormat {
    BOOL groupingUsed_;
    BOOL parseIntegerOnly_;
    int maximumIntegerDigits_;
    int minimumIntegerDigits_;
    int maximumFractionDigits_;
    int minimumFractionDigits_;
}




-(id)init;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)formatWithDouble:(CGFloat)arg0 ;
-(id)formatWithDouble:(CGFloat)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)formatWithLong:(NSInteger)arg0 ;
-(id)formatWithLong:(NSInteger)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)formatWithId:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)getCurrency;
-(int)getMaximumFractionDigits;
-(int)getMaximumIntegerDigits;
-(int)getMinimumFractionDigits;
-(int)getMinimumIntegerDigits;
-(NSUInteger)hash;
-(BOOL)isGroupingUsed;
-(BOOL)isParseIntegerOnly;
-(id)parseWithNSString:(id)arg0 ;
-(id)parseWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(id)parseObjectWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(void)setCurrencyWithJavaUtilCurrency:(id)arg0 ;
-(void)setGroupingUsedWithBoolean:(BOOL)arg0 ;
-(void)setMaximumFractionDigitsWithInt:(int)arg0 ;
-(void)setMaximumIntegerDigitsWithInt:(int)arg0 ;
-(void)setMinimumFractionDigitsWithInt:(int)arg0 ;
-(void)setMinimumIntegerDigitsWithInt:(int)arg0 ;
-(void)setParseIntegerOnlyWithBoolean:(BOOL)arg0 ;
-(id)getRoundingMode;
-(void)setRoundingModeWithJavaMathRoundingModeEnum:(id)arg0 ;
+(id)getAvailableLocales;
+(id)getCurrencyInstance;
+(id)getCurrencyInstanceWithJavaUtilLocale:(id)arg0 ;
+(id)getIntegerInstance;
+(id)getIntegerInstanceWithJavaUtilLocale:(id)arg0 ;
+(id)getInstance;
+(id)getInstanceWithJavaUtilLocale:(id)arg0 ;
+(id)getInstanceWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
+(id)getNumberInstance;
+(id)getNumberInstanceWithJavaUtilLocale:(id)arg0 ;
+(id)getPercentInstance;
+(id)getPercentInstanceWithJavaUtilLocale:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif