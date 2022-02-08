// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTFLOCK_H
#define LIBCOREIOSTRUCTFLOCK_H


#import <Foundation/Foundation.h>


@interface LibcoreIoStructFlock : NSObject {
    short l_type_;
    short l_whence_;
    NSInteger l_start_;
    NSInteger l_len_;
    int l_pid_;
}




-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif