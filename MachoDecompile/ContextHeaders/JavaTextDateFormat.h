// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTDATEFORMAT_H
#define JAVATEXTDATEFORMAT_H



#import "JavaTextFormat.h"
#import "JavaUtilCalendar.h"
#import "JavaTextNumberFormat.h"

@interface JavaTextDateFormat : JavaTextFormat {
    JavaUtilCalendar *calendar_;
    JavaTextNumberFormat *numberFormat_;
}




-(id)init;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)formatWithId:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)formatWithJavaUtilDate:(id)arg0 ;
-(id)formatWithJavaUtilDate:(id)arg0 withJavaLangStringBuffer:(id)arg1 withJavaTextFieldPosition:(id)arg2 ;
-(id)getCalendar;
-(id)getNumberFormat;
-(id)getTimeZone;
-(NSUInteger)hash;
-(BOOL)isLenient;
-(id)parseWithNSString:(id)arg0 ;
-(id)parseWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(id)parseObjectWithNSString:(id)arg0 withJavaTextParsePosition:(id)arg1 ;
-(void)setCalendarWithJavaUtilCalendar:(id)arg0 ;
-(void)setLenientWithBoolean:(BOOL)arg0 ;
-(void)setNumberFormatWithJavaTextNumberFormat:(id)arg0 ;
-(void)setTimeZoneWithJavaUtilTimeZone:(id)arg0 ;
-(void)dealloc;
+(id)getAvailableLocales;
+(id)getDateInstance;
+(id)getDateInstanceWithInt:(int)arg0 ;
+(id)getDateInstanceWithInt:(int)arg0 withJavaUtilLocale:(id)arg1 ;
+(id)getDateTimeInstance;
+(id)getDateTimeInstanceWithInt:(int)arg0 withInt:(int)arg1 ;
+(id)getDateTimeInstanceWithInt:(int)arg0 withInt:(int)arg1 withJavaUtilLocale:(id)arg2 ;
+(id)getInstance;
+(void)set24HourTimePrefWithBoolean:(BOOL)arg0 ;
+(id)getTimeInstance;
+(id)getTimeInstanceWithInt:(int)arg0 ;
+(id)getTimeInstanceWithInt:(int)arg0 withJavaUtilLocale:(id)arg1 ;
+(void)checkDateStyleWithInt:(int)arg0 ;
+(void)checkTimeStyleWithInt:(int)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif