// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVASECURITYACCESSCONTROLLER_H
#define JAVASECURITYACCESSCONTROLLER_H


#import <Foundation/Foundation.h>


@interface JavaSecurityAccessController : NSObject



-(id)init;
+(id)doPrivilegedWithJavaSecurityPrivilegedAction:(id)arg0 ;
+(id)doPrivilegedWithJavaSecurityPrivilegedAction:(id)arg0 withJavaSecurityAccessControlContext:(id)arg1 ;
+(id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id)arg0 ;
+(id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id)arg0 withJavaSecurityAccessControlContext:(id)arg1 ;
+(id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedAction:(id)arg0 ;
+(id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedExceptionAction:(id)arg0 ;
+(void)checkPermissionWithJavaSecurityPermission:(id)arg0 ;
+(id)getContext;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif