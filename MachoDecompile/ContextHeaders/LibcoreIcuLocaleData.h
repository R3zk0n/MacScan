// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREICULOCALEDATA_H
#define LIBCOREICULOCALEDATA_H


#import <Foundation/Foundation.h>

#import "JavaLangInteger.h"
#import "IOSObjectArray.h"

@interface LibcoreIcuLocaleData : NSObject {
    JavaLangInteger *firstDayOfWeek_;
    JavaLangInteger *minimalDaysInFirstWeek_;
    IOSObjectArray *amPm_;
    IOSObjectArray *eras_;
    IOSObjectArray *longMonthNames_;
    IOSObjectArray *shortMonthNames_;
    IOSObjectArray *tinyMonthNames_;
    IOSObjectArray *longStandAloneMonthNames_;
    IOSObjectArray *shortStandAloneMonthNames_;
    IOSObjectArray *tinyStandAloneMonthNames_;
    IOSObjectArray *longWeekdayNames_;
    IOSObjectArray *shortWeekdayNames_;
    IOSObjectArray *tinyWeekdayNames_;
    IOSObjectArray *longStandAloneWeekdayNames_;
    IOSObjectArray *shortStandAloneWeekdayNames_;
    IOSObjectArray *tinyStandAloneWeekdayNames_;
    NSString *yesterday_;
    NSString *today_;
    NSString *tomorrow_;
    NSString *fullTimeFormat_;
    NSString *longTimeFormat_;
    NSString *mediumTimeFormat_;
    NSString *shortTimeFormat_;
    NSString *fullDateFormat_;
    NSString *longDateFormat_;
    NSString *mediumDateFormat_;
    NSString *shortDateFormat_;
    unsigned short zeroDigit_;
    unsigned short decimalSeparator_;
    unsigned short groupingSeparator_;
    unsigned short patternSeparator_;
    unsigned short percent_;
    unsigned short perMill_;
    unsigned short monetarySeparator_;
    unsigned short minusSign_;
    NSString *exponentSeparator_;
    NSString *infinity_;
    NSString *NaN_;
    NSString *currencySymbol_;
    NSString *internationalCurrencySymbol_;
    NSString *numberPattern_;
    NSString *integerPattern_;
    NSString *currencyPattern_;
    NSString *percentPattern_;
}




-(id)init;
-(id)description;
-(id)getDateFormatWithInt:(int)arg0 ;
-(id)getTimeFormatWithInt:(int)arg0 ;
-(void)dealloc;
+(id)getWithJavaUtilLocale:(id)arg0 ;
+(id)initLocaleDataWithJavaUtilLocale:(id)arg0 ;
+(BOOL)initLocaleDataImplWithNSString:(id)arg0 withLibcoreIcuLocaleData:(id)arg1 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif