// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVASECURITYALLPERMISSION_H
#define JAVASECURITYALLPERMISSION_H



#import "JavaSecurityPermission.h"

@interface JavaSecurityAllPermission : JavaSecurityPermission



-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 ;
-(id)init;
-(id)getActions;
-(BOOL)impliesWithJavaSecurityPermission:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif