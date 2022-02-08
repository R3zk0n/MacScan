// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTDATEFORMAT_FIELD_H
#define JAVATEXTDATEFORMAT_FIELD_H

@class Field;



@interface JavaTextDateFormat_Field : Field {
    int calendarField_;
}




-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(int)getCalendarField;
+(id)ofCalendarFieldWithInt:(int)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif