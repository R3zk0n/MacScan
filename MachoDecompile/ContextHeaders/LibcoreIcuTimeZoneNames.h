// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREICUTIMEZONENAMES_H
#define LIBCOREICUTIMEZONENAMES_H


#import <Foundation/Foundation.h>


@interface LibcoreIcuTimeZoneNames : NSObject



-(id)init;
+(id)getDisplayNameWithNSStringArray2:(id)arg0 withNSString:(id)arg1 withBoolean:(BOOL)arg2 withInt:(int)arg3 ;
+(id)getZoneStringsWithJavaUtilLocale:(id)arg0 ;
+(void)fillZoneStringsWithNSString:(id)arg0 withNSStringArray2:(id)arg1 ;
+(void)fillZoneStringNamesWithNSString:(id)arg0 withNSStringArray:(id)arg1 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif