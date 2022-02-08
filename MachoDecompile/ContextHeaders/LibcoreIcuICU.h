// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREICUICU_H
#define LIBCOREICUICU_H


#import <Foundation/Foundation.h>


@interface LibcoreIcuICU : NSObject



-(id)init;
+(id)getISOLanguages;
+(id)getISOCountries;
+(id)localeFromStringWithNSString:(id)arg0 ;
+(id)localesFromStringsWithNSStringArray:(id)arg0 ;
+(id)getAvailableLocales;
+(id)getAvailableBreakIteratorLocales;
+(id)getAvailableCalendarLocales;
+(id)getAvailableCollatorLocales;
+(id)getAvailableDateFormatLocales;
+(id)getAvailableDateFormatSymbolsLocales;
+(id)getAvailableDecimalFormatSymbolsLocales;
+(id)getAvailableNumberFormatLocales;
+(id)getAvailableCurrencyCodes;
+(id)getISOLanguagesNative;
+(id)getISOCountriesNative;
+(id)getAvailableBreakIteratorLocalesNative;
+(id)getAvailableCollatorLocalesNative;
+(id)getAvailableLocalesNative;
+(id)getAvailableDateFormatLocalesNative;
+(id)getAvailableCalendarLocalesNative;
+(id)getAvailableNumberFormatLocalesNative;
+(id)getDisplayCountryNativeWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)getDisplayLanguageNativeWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)getDisplayVariantNativeWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)getISO3CountryNativeWithNSString:(id)arg0 ;
+(id)getISO3LanguageNativeWithNSString:(id)arg0 ;
+(id)getCurrencyCodeWithNSString:(id)arg0 ;
+(id)getCurrencySymbolWithNSString:(id)arg0 ;
+(int)getCurrencyFractionDigitsWithNSString:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif