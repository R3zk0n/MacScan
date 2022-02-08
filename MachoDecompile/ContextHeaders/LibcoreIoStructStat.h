// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTSTAT_H
#define LIBCOREIOSTRUCTSTAT_H


#import <Foundation/Foundation.h>


@interface LibcoreIoStructStat : NSObject {
    NSInteger st_dev_;
    NSInteger st_ino_;
    int st_mode_;
    NSInteger st_nlink_;
    int st_uid_;
    int st_gid_;
    NSInteger st_rdev_;
    NSInteger st_size_;
    NSInteger st_atime_;
    NSInteger st_mtime_;
    NSInteger st_ctime_;
    NSInteger st_blksize_;
    NSInteger st_blocks_;
}




-(id)initWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 withInt:(int)arg4 withInt:(int)arg5 withLong:(NSInteger)arg6 withLong:(NSInteger)arg7 withLong:(NSInteger)arg8 withLong:(NSInteger)arg9 withLong:(NSInteger)arg10 withLong:(NSInteger)arg11 withLong:(NSInteger)arg12 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif