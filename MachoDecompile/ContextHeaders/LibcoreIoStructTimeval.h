// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOSTRUCTTIMEVAL_H
#define LIBCOREIOSTRUCTTIMEVAL_H


#import <Foundation/Foundation.h>


@interface LibcoreIoStructTimeval : NSObject {
    NSInteger tv_sec_;
    NSInteger tv_usec_;
}




-(id)initWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)toMillis;
-(id)description;
+(id)fromMillisWithLong:(NSInteger)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif