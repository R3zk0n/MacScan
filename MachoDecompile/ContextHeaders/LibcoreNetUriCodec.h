// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCORENETURICODEC_H
#define LIBCORENETURICODEC_H


#import <Foundation/Foundation.h>


@interface LibcoreNetUriCodec : NSObject



-(BOOL)isRetainedWithChar:(unsigned short)arg0 ;
-(id)validateWithNSString:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3 ;
-(void)appendEncodedWithJavaLangStringBuilder:(id)arg0 withNSString:(id)arg1 withJavaNioCharsetCharset:(id)arg2 withBoolean:(BOOL)arg3 ;
-(id)encodeWithNSString:(id)arg0 withJavaNioCharsetCharset:(id)arg1 ;
-(void)appendEncodedWithJavaLangStringBuilder:(id)arg0 withNSString:(id)arg1 ;
-(void)appendPartiallyEncodedWithJavaLangStringBuilder:(id)arg0 withNSString:(id)arg1 ;
-(id)init;
+(void)validateSimpleWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)decodeWithNSString:(id)arg0 withBoolean:(BOOL)arg1 withJavaNioCharsetCharset:(id)arg2 withBoolean:(BOOL)arg3 ;
+(int)hexToIntWithChar:(unsigned short)arg0 ;
+(id)decodeWithNSString:(id)arg0 ;
+(void)appendHexWithJavaLangStringBuilder:(id)arg0 withNSString:(id)arg1 withJavaNioCharsetCharset:(id)arg2 ;
+(void)appendHexWithJavaLangStringBuilder:(id)arg0 withByte:(char)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif