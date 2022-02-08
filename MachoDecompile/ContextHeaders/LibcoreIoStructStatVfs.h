// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTSTATVFS_H
#define LIBCOREIOSTRUCTSTATVFS_H


#import <Foundation/Foundation.h>


@interface LibcoreIoStructStatVfs : NSObject {
    NSInteger f_bsize_;
    NSInteger f_frsize_;
    NSInteger f_blocks_;
    NSInteger f_bfree_;
    NSInteger f_bavail_;
    NSInteger f_files_;
    NSInteger f_ffree_;
    NSInteger f_favail_;
    NSInteger f_fsid_;
    NSInteger f_flag_;
    NSInteger f_namemax_;
}




-(id)initWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 withLong:(NSInteger)arg4 withLong:(NSInteger)arg5 withLong:(NSInteger)arg6 withLong:(NSInteger)arg7 withLong:(NSInteger)arg8 withLong:(NSInteger)arg9 withLong:(NSInteger)arg10 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif