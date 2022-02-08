// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORENATIVEFSLOCKFACTORY_NATIVEFSLOCK_H
#define ORGAPACHELUCENESTORENATIVEFSLOCKFACTORY_NATIVEFSLOCK_H



#import "OrgApacheLuceneStoreLock.h"
#import "JavaNioChannelsFileLock.h"
#import "JavaNioChannelsFileChannel.h"
#import "OrgLukhnosPortmobileFilePath.h"
#import "OrgLukhnosPortmobileFileAttributeFileTime.h"

@interface OrgApacheLuceneStoreNativeFSLockFactory_NativeFSLock : OrgApacheLuceneStoreLock {
    JavaNioChannelsFileLock *lock_;
    JavaNioChannelsFileChannel *channel_;
    OrgLukhnosPortmobileFilePath *path_;
    OrgLukhnosPortmobileFileAttributeFileTime *creationTime_;
    uint8_t closed_;
}




-(id)initWithJavaNioChannelsFileLock:(id)arg0 withJavaNioChannelsFileChannel:(id)arg1 withOrgLukhnosPortmobileFilePath:(id)arg2 withOrgLukhnosPortmobileFileAttributeFileTime:(id)arg3 ;
-(void)ensureValid;
-(void)close;
-(id)description;
-(void)dealloc;


@end


#endif