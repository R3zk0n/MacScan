// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTCOUNTDOWNLATCH_SYNC_H
#define JAVAUTILCONCURRENTCOUNTDOWNLATCH_SYNC_H



#import "JavaUtilConcurrentLocksAbstractQueuedSynchronizer.h"

@interface JavaUtilConcurrentCountDownLatch_Sync : JavaUtilConcurrentLocksAbstractQueuedSynchronizer



-(id)initWithInt:(int)arg0 ;
-(int)getCount;
-(int)tryAcquireSharedWithInt:(int)arg0 ;
-(BOOL)tryReleaseSharedWithInt:(int)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif