// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVASECURITYPERMISSIONCOLLECTION_H
#define JAVASECURITYPERMISSIONCOLLECTION_H


#import <Foundation/Foundation.h>

#import "JavaIoSerializable-Protocol.h"

@interface JavaSecurityPermissionCollection : NSObject <JavaIoSerializable>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)addWithJavaSecurityPermission:(id)arg0 ;
-(id)elements;
-(BOOL)impliesWithJavaSecurityPermission:(id)arg0 ;
-(BOOL)isReadOnly;
-(void)setReadOnly;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif