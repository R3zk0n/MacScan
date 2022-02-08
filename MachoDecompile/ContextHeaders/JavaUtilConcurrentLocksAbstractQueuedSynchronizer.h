// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTLOCKSABSTRACTQUEUEDSYNCHRONIZER_H
#define JAVAUTILCONCURRENTLOCKSABSTRACTQUEUEDSYNCHRONIZER_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentLocksAbstractOwnableSynchronizer.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentLocksAbstractQueuedSynchronizer : JavaUtilConcurrentLocksAbstractOwnableSynchronizer <JavaIoSerializable>

 {
    uint8_t head_;
    uint8_t tail_;
    uint8_t state_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(int)getState;
-(void)setStateWithInt:(int)arg0 ;
-(BOOL)compareAndSetStateWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)enqWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(id)addWaiterWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(void)setHeadWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(void)unparkSuccessorWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(void)doReleaseShared;
-(void)setHeadAndPropagateWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 withInt:(int)arg1 ;
-(void)cancelAcquireWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(BOOL)parkAndCheckInterrupt;
-(BOOL)acquireQueuedWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 withInt:(int)arg1 ;
-(void)doAcquireInterruptiblyWithInt:(int)arg0 ;
-(BOOL)doAcquireNanosWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(void)doAcquireSharedWithInt:(int)arg0 ;
-(void)doAcquireSharedInterruptiblyWithInt:(int)arg0 ;
-(BOOL)doAcquireSharedNanosWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(BOOL)tryAcquireWithInt:(int)arg0 ;
-(BOOL)tryReleaseWithInt:(int)arg0 ;
-(int)tryAcquireSharedWithInt:(int)arg0 ;
-(BOOL)tryReleaseSharedWithInt:(int)arg0 ;
-(BOOL)isHeldExclusively;
-(void)acquireWithInt:(int)arg0 ;
-(void)acquireInterruptiblyWithInt:(int)arg0 ;
-(BOOL)tryAcquireNanosWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(BOOL)release__WithInt:(int)arg0 ;
-(void)acquireSharedWithInt:(int)arg0 ;
-(void)acquireSharedInterruptiblyWithInt:(int)arg0 ;
-(BOOL)tryAcquireSharedNanosWithInt:(int)arg0 withLong:(NSInteger)arg1 ;
-(BOOL)releaseSharedWithInt:(int)arg0 ;
-(BOOL)hasQueuedThreads;
-(BOOL)hasContended;
-(id)getFirstQueuedThread;
-(id)fullGetFirstQueuedThread;
-(BOOL)isQueuedWithJavaLangThread:(id)arg0 ;
-(BOOL)apparentlyFirstQueuedIsExclusive;
-(BOOL)hasQueuedPredecessors;
-(int)getQueueLength;
-(id)getQueuedThreads;
-(id)getExclusiveQueuedThreads;
-(id)getSharedQueuedThreads;
-(BOOL)isOnSyncQueueWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(BOOL)findNodeFromTailWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(BOOL)transferForSignalWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(BOOL)transferAfterCancelledWaitWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(int)fullyReleaseWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(BOOL)ownsWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject:(id)arg0 ;
-(BOOL)hasWaitersWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject:(id)arg0 ;
-(int)getWaitQueueLengthWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject:(id)arg0 ;
-(id)getWaitingThreadsWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject:(id)arg0 ;
-(BOOL)compareAndSetHeadWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(BOOL)compareAndSetTailWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 withJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1 ;
-(void)dealloc;
-(void)__javaClone;
+(BOOL)shouldParkAfterFailedAcquireWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 withJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1 ;
+(void)selfInterrupt;
+(BOOL)compareAndSetWaitStatusWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(BOOL)compareAndSetNextWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 withJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1 withJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg2 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif