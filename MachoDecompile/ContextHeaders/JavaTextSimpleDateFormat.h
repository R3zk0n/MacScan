// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTSIMPLEDATEFORMAT_H
#define JAVATEXTSIMPLEDATEFORMAT_H


#import <Foundation/Foundation.h>

#import "JavaTextDateFormat.h"
#import "JavaTextDateFormatSymbols.h"
#import "JavaUtilDate.h"

@interface JavaTextSimpleDateFormat : JavaTextDateFormat {
    NSString *pattern_;
    JavaTextDateFormatSymbols *formatData_;
    int creationYear_;
    JavaUtilDate *defaultCenturyStart_;
}




-(id)init;
-(id)initWithNSString:(id)arg0 ;
-(void)validatePatternWithNSString:(id)arg0 ;
-(void)validatePatternCharacterWithChar:(unsigned short)arg0 ;
-(id)initWithNSString:(id)arg0 withJavaTextDateFormatSymbols:(id)arg1 ;
-(id)initWithNSString:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(id)initWithJavaUtilLocale:(id)arg0 ;
-(void)applyLocalizedPatternWithNSString:(id)arg0 ;
-(void)applyPatternWithNSString:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)formatToCharacterIteratorWithId:(id)arg0 ;
-(id)formatToCharacterIteratorImplWithJavaUtilDate:(id)arg0 ;
-(id)formatImplWithJavaUtilDate:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 withJavaUtilList:(id)arg3 ;
-(void)appendWithJavaLangStringBuffer:(id)arg0 withJavaTextFieldPosition:(id)arg1 withJavaUtilList:(id)arg2 withChar:(unsigned short)arg3 withInt:(int)arg4 ;
-(void)appendDayOfWeekWithJavaLangStringBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(void)appendMonthWithJavaLangStringBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(void)appendTimeZoneWithJavaLangStringBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(void)appendNumericTimeZoneWithJavaLangStringBuffer:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(void)appendMillisecondsWithJavaLangStringBuffer:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)appendNumberWithJavaLangStringBuffer:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)errorWithJavaTextParsePosition:(id)arg0 withInt:(int)arg1 withJavaUtilTimeZone:(id)arg2 ;
-(id)formatWithJavaUtilDate:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)get2DigitYearStart;
-(id)getDateFormatSymbols;
-(NSUInteger)hash;
-(int)parseWithNSString:(id)arg0 withInt:(int)arg1 withChar:(unsigned short)arg2 withInt:(int)arg3 ;
-(int)parseFractionalSecondsWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)parseDayOfWeekWithNSString:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(int)parseMonthWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(id)parseWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(id)parseNumberWithInt:(int)arg0 withNSString:(id)arg1 withJavaTextParsePosition:(id)arg2 ;
-(int)parseNumberWithInt:(int)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(int)parseTextWithNSString:(id)arg0 withInt:(int)arg1 withNSStringArray:(id)arg2 withInt:(int)arg3 ;
-(int)parseTimeZoneWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)set2DigitYearStartWithJavaUtilDate:(id)arg0 ;
-(void)setDateFormatSymbolsWithJavaTextDateFormatSymbols:(id)arg0 ;
-(id)toLocalizedPattern;
-(id)toPattern;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
+(id)defaultPattern;
+(id)convertPatternWithNSString:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withBoolean:(BOOL)arg3 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif