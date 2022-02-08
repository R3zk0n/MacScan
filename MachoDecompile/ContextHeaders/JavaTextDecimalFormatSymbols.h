// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTDECIMALFORMATSYMBOLS_H
#define JAVATEXTDECIMALFORMATSYMBOLS_H


#import <Foundation/Foundation.h>

#import "JavaUtilCurrency.h"
#import "JavaUtilLocale.h"
#import "NSCopying-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaTextDecimalFormatSymbols : NSObject <NSCopying, JavaIoSerializable>

 {
    unsigned short zeroDigit_;
    unsigned short digit_;
    unsigned short decimalSeparator_;
    unsigned short groupingSeparator_;
    unsigned short patternSeparator_;
    unsigned short percent_;
    unsigned short perMill_;
    unsigned short monetarySeparator_;
    unsigned short minusSign_;
    NSString *infinity_;
    NSString *NaN_;
    NSString *currencySymbol_;
    NSString *intlCurrencySymbol_;
    JavaUtilCurrency *currency_;
    JavaUtilLocale *locale_;
    NSString *exponentSeparator_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithJavaUtilLocale:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)getCurrency;
-(id)getInternationalCurrencySymbol;
-(id)getCurrencySymbol;
-(unsigned short)getDecimalSeparator;
-(unsigned short)getDigit;
-(unsigned short)getGroupingSeparator;
-(id)getInfinity;
-(unsigned short)getMinusSign;
-(unsigned short)getMonetaryDecimalSeparator;
-(id)getNaN;
-(unsigned short)getPatternSeparator;
-(unsigned short)getPercent;
-(unsigned short)getPerMill;
-(unsigned short)getZeroDigit;
-(id)getExponentSeparator;
-(void)setCurrencyWithJavaUtilCurrency:(id)arg0 ;
-(void)setInternationalCurrencySymbolWithNSString:(id)arg0 ;
-(void)setCurrencySymbolWithNSString:(id)arg0 ;
-(void)setDecimalSeparatorWithChar:(unsigned short)arg0 ;
-(void)setDigitWithChar:(unsigned short)arg0 ;
-(void)setGroupingSeparatorWithChar:(unsigned short)arg0 ;
-(void)setInfinityWithNSString:(id)arg0 ;
-(void)setMinusSignWithChar:(unsigned short)arg0 ;
-(void)setMonetaryDecimalSeparatorWithChar:(unsigned short)arg0 ;
-(void)setNaNWithNSString:(id)arg0 ;
-(void)setPatternSeparatorWithChar:(unsigned short)arg0 ;
-(void)setPercentWithChar:(unsigned short)arg0 ;
-(void)setPerMillWithChar:(unsigned short)arg0 ;
-(void)setZeroDigitWithChar:(unsigned short)arg0 ;
-(void)setExponentSeparatorWithNSString:(id)arg0 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)getInstance;
+(id)getInstanceWithJavaUtilLocale:(id)arg0 ;
+(id)getAvailableLocales;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif