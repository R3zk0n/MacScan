// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVASECURITYPERMISSION_H
#define JAVASECURITYPERMISSION_H


#import <Foundation/Foundation.h>

#import "JavaSecurityGuard-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaSecurityPermission : NSObject <JavaSecurityGuard, JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 ;
-(id)getName;
-(void)checkGuardWithId:(id)arg0 ;
-(id)newPermissionCollection;
-(id)getActions;
-(BOOL)impliesWithJavaSecurityPermission:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif