// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTADDRINFO_H
#define LIBCOREIOSTRUCTADDRINFO_H


#import <Foundation/Foundation.h>

#import "JavaNetInetAddress.h"
#import "LibcoreIoStructAddrinfo.h"

@interface LibcoreIoStructAddrinfo : NSObject {
    int ai_flags_;
    int ai_family_;
    int ai_socktype_;
    int ai_protocol_;
    JavaNetInetAddress *ai_addr_;
    LibcoreIoStructAddrinfo *ai_next_;
}




-(id)init;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif