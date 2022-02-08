// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVATEXTDATEFORMATSYMBOLS_H
#define JAVATEXTDATEFORMATSYMBOLS_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "LibcoreIcuLocaleData.h"
#import "JavaUtilLocale.h"
#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface JavaTextDateFormatSymbols : NSObject <JavaIoSerializable, NSCopying>

 {
    IOSObjectArray *ampms_;
    IOSObjectArray *eras_;
    IOSObjectArray *months_;
    IOSObjectArray *shortMonths_;
    IOSObjectArray *shortWeekdays_;
    IOSObjectArray *weekdays_;
    LibcoreIcuLocaleData *localeData_;
    IOSObjectArray *zoneStrings_;
    BOOL customZoneStrings_;
    JavaUtilLocale *locale_;
    NSString *localPatternChars_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)internalZoneStrings;
-(id)init;
-(id)initWithJavaUtilLocale:(id)arg0 ;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(void)writeObjectWithJavaIoObjectOutputStream:(id)arg0 ;
-(id)clone;
-(BOOL)isEqual:(id)arg0 ;
-(id)getAmPmStrings;
-(id)getEras;
-(id)getLocalPatternChars;
-(id)getMonths;
-(id)getShortMonths;
-(id)getShortWeekdays;
-(id)getWeekdays;
-(id)getZoneStrings;
-(void)setAmPmStringsWithNSStringArray:(id)arg0 ;
-(void)setErasWithNSStringArray:(id)arg0 ;
-(void)setLocalPatternCharsWithNSString:(id)arg0 ;
-(void)setMonthsWithNSStringArray:(id)arg0 ;
-(void)setShortMonthsWithNSStringArray:(id)arg0 ;
-(void)setShortWeekdaysWithNSStringArray:(id)arg0 ;
-(void)setWeekdaysWithNSStringArray:(id)arg0 ;
-(void)setZoneStringsWithNSStringArray2:(id)arg0 ;
-(id)getTimeZoneDisplayNameWithJavaUtilTimeZone:(id)arg0 withBoolean:(BOOL)arg1 withInt:(int)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)getInstance;
+(id)getInstanceWithJavaUtilLocale:(id)arg0 ;
+(id)getAvailableLocales;
+(BOOL)timeZoneStringsEqualWithJavaTextDateFormatSymbols:(id)arg0 withJavaTextDateFormatSymbols:(id)arg1 ;
+(id)clone2dStringArrayWithNSStringArray2:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif