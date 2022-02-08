// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETURLSTREAMHANDLER_H
#define JAVANETURLSTREAMHANDLER_H


#import <Foundation/Foundation.h>


@interface JavaNetURLStreamHandler : NSObject



-(id)openConnectionWithJavaNetURL:(id)arg0 ;
-(id)openConnectionWithJavaNetURL:(id)arg0 withJavaNetProxy:(id)arg1 ;
-(void)parseURLWithJavaNetURL:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)setURLWithJavaNetURL:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withNSString:(id)arg4 withNSString:(id)arg5 ;
-(void)setURLWithJavaNetURL:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withNSString:(id)arg4 withNSString:(id)arg5 withNSString:(id)arg6 withNSString:(id)arg7 withNSString:(id)arg8 ;
-(id)toExternalFormWithJavaNetURL:(id)arg0 ;
-(id)toExternalFormWithJavaNetURL:(id)arg0 withBoolean:(BOOL)arg1 ;
-(BOOL)equalsWithJavaNetURL:(id)arg0 withJavaNetURL:(id)arg1 ;
-(int)getDefaultPort;
-(id)getHostAddressWithJavaNetURL:(id)arg0 ;
-(int)hashCodeWithJavaNetURL:(id)arg0 ;
-(BOOL)hostsEqualWithJavaNetURL:(id)arg0 withJavaNetURL:(id)arg1 ;
-(BOOL)sameFileWithJavaNetURL:(id)arg0 withJavaNetURL:(id)arg1 ;
-(id)init;
+(id)relativePathWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(id)__annotations_setURLWithJavaNetURL_withNSString_withNSString_withInt_withNSString_withNSString_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif