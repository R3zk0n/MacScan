// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTLOCKSREENTRANTLOCK_SYNC_H
#define JAVAUTILCONCURRENTLOCKSREENTRANTLOCK_SYNC_H



#import "JavaUtilConcurrentLocksAbstractQueuedSynchronizer.h"

@interface JavaUtilConcurrentLocksReentrantLock_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer



-(void)lock;
-(BOOL)nonfairTryAcquireWithInt:(int)arg0 ;
-(BOOL)tryReleaseWithInt:(int)arg0 ;
-(BOOL)isHeldExclusively;
-(id)newCondition;
-(id)getOwner;
-(int)getHoldCount;
-(BOOL)isLocked;
-(void)readObjectWithJavaIoObjectInputStream:(id)arg0 ;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif