// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCALENDAR_H
#define JAVAUTILCALENDAR_H


#import <Foundation/Foundation.h>

#import "IOSIntArray.h"
#import "IOSBooleanArray.h"
#import "JavaUtilTimeZone.h"
#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@interface JavaUtilCalendar : NSObject <JavaIoSerializable, NSCopying, JavaLangComparable>

 {
    BOOL areFieldsSet_;
    IOSIntArray *fields_;
    IOSBooleanArray *isSet_;
    BOOL isTimeSet_;
    NSInteger time_;
    int lastTimeFieldSet_;
    int lastDateFieldSet_;
    BOOL lenient_;
    int firstDayOfWeek_;
    int minimalDaysInFirstWeek_;
    JavaUtilTimeZone *zone_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithJavaUtilTimeZone:(id)arg0 ;
-(id)initWithJavaUtilTimeZone:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(void)addWithInt:(int)arg0 withInt:(int)arg1 ;
-(BOOL)afterWithId:(id)arg0 ;
-(BOOL)beforeWithId:(id)arg0 ;
-(void)clear;
-(void)clearWithInt:(int)arg0 ;
-(id)clone;
-(void)complete;
-(void)computeFields;
-(void)computeTime;
-(BOOL)isEqual:(id)arg0 ;
-(int)getWithInt:(int)arg0 ;
-(int)getActualMaximumWithInt:(int)arg0 ;
-(int)getActualMinimumWithInt:(int)arg0 ;
-(int)getFirstDayOfWeek;
-(int)getGreatestMinimumWithInt:(int)arg0 ;
-(int)getLeastMaximumWithInt:(int)arg0 ;
-(int)getMaximumWithInt:(int)arg0 ;
-(int)getMinimalDaysInFirstWeek;
-(int)getMinimumWithInt:(int)arg0 ;
-(id)getTime;
-(NSInteger)getTimeInMillis;
-(id)getTimeZone;
-(int)internalGetWithInt:(int)arg0 ;
-(BOOL)isLenient;
-(BOOL)isSetWithInt:(int)arg0 ;
-(void)rollWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)rollWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(void)setWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)setWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)setWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(void)setWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
-(void)setFirstDayOfWeekWithInt:(int)arg0 ;
-(void)setLenientWithBoolean:(BOOL)arg0 ;
-(void)setMinimalDaysInFirstWeekWithInt:(int)arg0 ;
-(void)setTimeWithJavaUtilDate:(id)arg0 ;
-(void)setTimeInMillisWithLong:(NSInteger)arg0 ;
-(void)setTimeZoneWithJavaUtilTimeZone:(id)arg0 ;
-(int)compareToWithId:(id)arg0 ;
-(id)getDisplayNameWithInt:(int)arg0 withInt:(int)arg1 withJavaUtilLocale:(id)arg2 ;
-(id)getDisplayNameArrayWithInt:(int)arg0 withInt:(int)arg1 withJavaUtilLocale:(id)arg2 ;
-(id)getDisplayNamesWithInt:(int)arg0 withInt:(int)arg1 withJavaUtilLocale:(id)arg2 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)getAvailableLocales;
+(id)getInstance;
+(id)getInstanceWithJavaUtilLocale:(id)arg0 ;
+(id)getInstanceWithJavaUtilTimeZone:(id)arg0 ;
+(id)getInstanceWithJavaUtilTimeZone:(id)arg0 withJavaUtilLocale:(id)arg1 ;
+(void)checkStyleWithInt:(int)arg0 ;
+(void)insertValuesInMapWithJavaUtilMap:(id)arg0 withNSStringArray:(id)arg1 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif