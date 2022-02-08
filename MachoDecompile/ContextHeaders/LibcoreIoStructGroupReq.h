// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTGROUPREQ_H
#define LIBCOREIOSTRUCTGROUPREQ_H


#import <Foundation/Foundation.h>

#import "JavaNetInetAddress.h"

@interface LibcoreIoStructGroupReq : NSObject {
    int gr_interface_;
    JavaNetInetAddress *gr_group_;
}




-(id)initWithInt:(int)arg0 withJavaNetInetAddress:(id)arg1 ;
-(id)description;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif