// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTPOLLFD_H
#define LIBCOREIOSTRUCTPOLLFD_H


#import <Foundation/Foundation.h>

#import "JavaIoFileDescriptor.h"

@interface LibcoreIoStructPollfd : NSObject {
    JavaIoFileDescriptor *fd_;
    short events_;
    short revents_;
    id *userData_;
}




-(id)description;
-(id)init;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif