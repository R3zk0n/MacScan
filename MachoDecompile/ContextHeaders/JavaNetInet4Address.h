// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETINET4ADDRESS_H
#define JAVANETINET4ADDRESS_H



#import "JavaNetInetAddress.h"

@interface JavaNetInet4Address : JavaNetInetAddress



-(id)initWithByteArray:(id)arg0 withNSString:(id)arg1 ;
-(BOOL)isAnyLocalAddress;
-(BOOL)isLinkLocalAddress;
-(BOOL)isLoopbackAddress;
-(BOOL)isMCGlobal;
-(BOOL)isMCLinkLocal;
-(BOOL)isMCNodeLocal;
-(BOOL)isMCOrgLocal;
-(BOOL)isMCSiteLocal;
-(BOOL)isMulticastAddress;
-(BOOL)isSiteLocalAddress;
-(id)writeReplace;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif