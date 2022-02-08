// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILGREGORIANCALENDAR_H
#define JAVAUTILGREGORIANCALENDAR_H



#import "JavaUtilCalendar.h"

@interface JavaUtilGregorianCalendar : JavaUtilCalendar {
    NSInteger gregorianCutover_;
    int changeYear_;
    int julianSkew_;
    int currentYearSkew_;
    int lastYearSkew_;
}




-(id)init;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
-(id)initWithLong:(NSInteger)arg0 ;
-(id)initWithJavaUtilLocale:(id)arg0 ;
-(id)initWithJavaUtilTimeZone:(id)arg0 ;
-(id)initWithJavaUtilTimeZone:(id)arg0 withJavaUtilLocale:(id)arg1 ;
-(id)initWithBoolean:(BOOL)arg0 ;
-(void)addWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)fullFieldsCalcWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
-(void)computeFields;
-(void)computeTime;
-(int)computeYearAndDayWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)daysFromBaseYearWithLong:(NSInteger)arg0 ;
-(int)daysInMonth;
-(int)daysInMonthWithBoolean:(BOOL)arg0 withInt:(int)arg1 ;
-(int)daysInYearWithInt:(int)arg0 ;
-(int)daysInYearWithBoolean:(BOOL)arg0 withInt:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(int)getActualMaximumWithInt:(int)arg0 ;
-(int)getActualMinimumWithInt:(int)arg0 ;
-(int)getGreatestMinimumWithInt:(int)arg0 ;
-(id)getGregorianChange;
-(int)getLeastMaximumWithInt:(int)arg0 ;
-(int)getMaximumWithInt:(int)arg0 ;
-(int)getMinimumWithInt:(int)arg0 ;
-(int)getOffsetWithLong:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(BOOL)isLeapYearWithInt:(int)arg0 ;
-(int)julianError;
-(int)modWithInt:(int)arg0 withInt:(int)arg1 ;
-(int)mod7WithLong:(NSInteger)arg0 ;
-(void)rollWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)rollWithInt:(int)arg0 withBoolean:(BOOL)arg1 ;
-(void)setGregorianChangeWithJavaUtilDate:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif