// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILTIMEZONE_H
#define JAVAUTILTIMEZONE_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@interface JavaUtilTimeZone : NSObject <JavaIoSerializable, NSCopying>

 {
    NSString *ID_;
    id *nativeTimeZone_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithId:(id)arg0 ;
-(id)clone;
-(id)getDisplayName;
-(id)getDisplayNameWithJavaUtilLocale:(id)arg0 ;
-(id)getDisplayNameWithBoolean:(BOOL)arg0 withInt:(int)arg1 ;
-(id)getDisplayNameWithBoolean:(BOOL)arg0 withInt:(int)arg1 withJavaUtilLocale:(id)arg2 ;
-(id)displayNameWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 withJavaUtilLocale:(id)arg2 ;
-(id)getID;
-(int)getDSTSavings;
-(int)getOffsetWithLong:(NSInteger)arg0 ;
-(int)getOffsetWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
-(int)getRawOffset;
-(BOOL)hasSameRulesWithJavaUtilTimeZone:(id)arg0 ;
-(BOOL)inDaylightTimeWithJavaUtilDate:(id)arg0 ;
-(void)setIDWithNSString:(id)arg0 ;
-(void)setRawOffsetWithInt:(int)arg0 ;
-(BOOL)useDaylightTime;
-(void)dealloc;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)getAvailableIDs;
+(id)getAvailableIDsWithInt:(int)arg0 ;
+(id)getDefault;
+(id)getDefaultNativeTimeZone;
+(id)createGmtOffsetStringWithBoolean:(BOOL)arg0 withBoolean:(BOOL)arg1 withInt:(int)arg2 ;
+(void)appendNumberWithJavaLangStringBuilder:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)getTimeZoneWithNSString:(id)arg0 ;
+(id)getNativeTimeZoneWithNSString:(id)arg0 ;
+(id)getCustomTimeZoneWithNSString:(id)arg0 ;
+(void)setDefaultWithJavaUtilTimeZone:(id)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif