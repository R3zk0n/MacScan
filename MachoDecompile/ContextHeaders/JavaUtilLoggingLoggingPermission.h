// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILLOGGINGLOGGINGPERMISSION_H
#define JAVAUTILLOGGINGLOGGINGPERMISSION_H


#import <Foundation/Foundation.h>

#import "JavaSecurityBasicPermission.h"
#import "JavaSecurityGuard-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilLoggingLoggingPermission : JavaSecurityBasicPermission <JavaSecurityGuard, JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)getActions;
-(BOOL)impliesWithJavaSecurityPermission:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif