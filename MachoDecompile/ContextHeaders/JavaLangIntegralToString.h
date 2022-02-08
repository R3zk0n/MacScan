// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGINTEGRALTOSTRING_H
#define JAVALANGINTEGRALTOSTRING_H


#import <Foundation/Foundation.h>


@interface JavaLangIntegralToString : NSObject



-(id)init;
+(id)intToStringWithInt:(int)arg0 withInt:(int)arg1 ;
+(id)intToStringWithInt:(int)arg0 ;
+(void)appendIntWithJavaLangAbstractStringBuilder:(id)arg0 withInt:(int)arg1 ;
+(id)longToStringWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
+(id)longToStringWithLong:(NSInteger)arg0 ;
+(void)appendLongWithJavaLangAbstractStringBuilder:(id)arg0 withLong:(NSInteger)arg1 ;
+(id)intToBinaryStringWithInt:(int)arg0 ;
+(id)longToBinaryStringWithLong:(NSInteger)arg0 ;
+(id)appendByteAsHexWithJavaLangStringBuilder:(id)arg0 withByte:(char)arg1 withBoolean:(BOOL)arg2 ;
+(id)byteToHexStringWithByte:(char)arg0 withBoolean:(BOOL)arg1 ;
+(id)bytesToHexStringWithByteArray:(id)arg0 withBoolean:(BOOL)arg1 ;
+(id)intToHexStringWithInt:(int)arg0 withBoolean:(BOOL)arg1 withInt:(int)arg2 ;
+(id)longToHexStringWithLong:(NSInteger)arg0 ;
+(id)intToOctalStringWithInt:(int)arg0 ;
+(id)longToOctalStringWithLong:(NSInteger)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif