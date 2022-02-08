// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOFILECHANNELIMPL_FILELOCKIMPL_H
#define JAVANIOFILECHANNELIMPL_FILELOCKIMPL_H



#import "JavaNioChannelsFileLock.h"

@interface JavaNioFileChannelImpl_FileLockImpl : JavaNioChannelsFileLock {
    BOOL isReleased_;
}




-(id)initWithJavaNioChannelsFileChannel:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 withBoolean:(BOOL)arg3 ;
-(BOOL)isValid;
-(void)release__;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif