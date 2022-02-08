// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILDATE_H
#define JAVAUTILDATE_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaUtilDate : NSObject <JavaIoSerializable, NSCopying, JavaLangComparable>

 {
    NSInteger milliseconds_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
-(id)initWithLong:(NSInteger)arg0 ;
-(id)initWithNSString:(id)arg0 ;
-(BOOL)afterWithJavaUtilDate:(id)arg0 ;
-(BOOL)beforeWithJavaUtilDate:(id)arg0 ;
-(id)clone;
-(int)compareToWithId:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(int)getDate;
-(int)getDay;
-(int)getHours;
-(int)getMinutes;
-(int)getMonth;
-(int)getSeconds;
-(NSInteger)getTime;
-(int)getTimezoneOffset;
-(int)getYear;
-(void)setDateWithInt:(int)arg0 ;
-(void)setHoursWithInt:(int)arg0 ;
-(void)setMinutesWithInt:(int)arg0 ;
-(void)setMonthWithInt:(int)arg0 ;
-(void)setSecondsWithInt:(int)arg0 ;
-(void)setTimeWithLong:(NSInteger)arg0 ;
-(void)setYearWithInt:(int)arg0 ;
-(id)toGMTString;
-(id)toLocaleString;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(int)parseWithNSString:(id)arg0 withNSStringArray:(id)arg1 ;
+(id)parseErrorWithNSString:(id)arg0 ;
+(NSInteger)parseWithNSString:(id)arg0 ;
+(void)appendTwoDigitsWithJavaLangStringBuilder:(id)arg0 withInt:(int)arg1 ;
+(NSInteger)UTCWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
+(int)zoneWithNSString:(id)arg0 ;
+(void)initialize;
+(id)__annotations_initWithInt_withInt_withInt_;
+(id)__annotations_initWithInt_withInt_withInt_withInt_withInt_;
+(id)__annotations_initWithInt_withInt_withInt_withInt_withInt_withInt_;
+(id)__annotations_initWithNSString_;
+(id)__annotations_getDate;
+(id)__annotations_getDay;
+(id)__annotations_getHours;
+(id)__annotations_getMinutes;
+(id)__annotations_getMonth;
+(id)__annotations_getSeconds;
+(id)__annotations_getTimezoneOffset;
+(id)__annotations_getYear;
+(id)__annotations_parseWithNSString_;
+(id)__annotations_setDateWithInt_;
+(id)__annotations_setHoursWithInt_;
+(id)__annotations_setMinutesWithInt_;
+(id)__annotations_setMonthWithInt_;
+(id)__annotations_setSecondsWithInt_;
+(id)__annotations_setYearWithInt_;
+(id)__annotations_toGMTString;
+(id)__annotations_toLocaleString;
+(id)__annotations_UTCWithInt_withInt_withInt_withInt_withInt_withInt_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif