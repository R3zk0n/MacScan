// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILGREGO_H
#define JAVAUTILGREGO_H


#import <Foundation/Foundation.h>


@interface JavaUtilGrego : NSObject



-(id)init;
+(BOOL)isLeapYearWithInt:(int)arg0 ;
+(int)monthLengthWithInt:(int)arg0 withInt:(int)arg1 ;
+(int)previousMonthLengthWithInt:(int)arg0 withInt:(int)arg1 ;
+(NSInteger)fieldsToDayWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)dayOfWeekWithLong:(NSInteger)arg0 ;
+(id)dayToFieldsWithLong:(NSInteger)arg0 withIntArray:(id)arg1 ;
+(id)timeToFieldsWithLong:(NSInteger)arg0 withIntArray:(id)arg1 ;
+(NSInteger)floorDivideWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
+(NSInteger)floorDivideWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withLongArray:(id)arg2 ;
+(int)getDayOfWeekInMonthWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif