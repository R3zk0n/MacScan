// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILSIMPLETIMEZONE_H
#define JAVAUTILSIMPLETIMEZONE_H



#import "JavaUtilTimeZone.h"

@interface JavaUtilSimpleTimeZone : JavaUtilTimeZone {
    int rawOffset_;
    int startYear_;
    int startMonth_;
    int startDay_;
    int startDayOfWeek_;
    int startTime_;
    int endMonth_;
    int endDay_;
    int endDayOfWeek_;
    int endTime_;
    int startMode_;
    int endMode_;
    BOOL useDaylight_;
    int dstSavings_;
}




-(id)initWithInt:(int)arg0 withNSString:(id)arg1 ;
-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withInt:(int)arg9 ;
-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withInt:(int)arg9 withInt:(int)arg10 ;
-(id)initWithInt:(int)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8 withInt:(int)arg9 withInt:(int)arg10 withInt:(int)arg11 withInt:(int)arg12 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(int)getDSTSavings;
-(int)getOffsetWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
-(int)getOffsetWithLong:(NSInteger)arg0 ;
-(int)getRawOffset;
-(NSUInteger)hash;
-(BOOL)hasSameRulesWithJavaUtilTimeZone:(id)arg0 ;
-(BOOL)inDaylightTimeWithJavaUtilDate:(id)arg0 ;
-(BOOL)isLeapYearWithInt:(int)arg0 ;
-(int)mod7WithInt:(int)arg0 ;
-(void)setDSTSavingsWithInt:(int)arg0 ;
-(void)checkRangeWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)checkDayWithInt:(int)arg0 withInt:(int)arg1 ;
-(void)setEndMode;
-(void)setEndRuleWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)setEndRuleWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)setEndRuleWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)setRawOffsetWithInt:(int)arg0 ;
-(void)setStartMode;
-(void)setStartRuleWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)setStartRuleWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)setStartRuleWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(void)setStartYearWithInt:(int)arg0 ;
-(id)description;
-(BOOL)useDaylightTime;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif