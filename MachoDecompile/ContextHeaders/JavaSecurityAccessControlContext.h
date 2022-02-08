// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVASECURITYACCESSCONTROLCONTEXT_H
#define JAVASECURITYACCESSCONTROLCONTEXT_H


#import <Foundation/Foundation.h>


@interface JavaSecurityAccessControlContext : NSObject



-(id)initWithJavaSecurityAccessControlContext:(id)arg0 withJavaSecurityDomainCombiner:(id)arg1 ;
-(id)initWithJavaSecurityProtectionDomainArray:(id)arg0 ;
-(void)checkPermissionWithJavaSecurityPermission:(id)arg0 ;
-(id)getDomainCombiner;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif