// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTGROUPSOURCEREQ_H
#define LIBCOREIOSTRUCTGROUPSOURCEREQ_H


#import <Foundation/Foundation.h>

#import "JavaNetInetAddress.h"

@interface LibcoreIoStructGroupSourceReq : NSObject {
    int gsr_interface_;
    JavaNetInetAddress *gsr_group_;
    JavaNetInetAddress *gsr_source_;
}




-(id)initWithInt:(int)arg0 withJavaNetInetAddress:(id)arg1 withJavaNetInetAddress:(id)arg2 ;
-(id)description;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif