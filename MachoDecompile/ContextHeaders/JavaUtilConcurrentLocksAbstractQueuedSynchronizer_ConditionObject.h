// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTLOCKSABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT_H
#define JAVAUTILCONCURRENTLOCKSABSTRACTQUEUEDSYNCHRONIZER_CONDITIONOBJECT_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentLocksAbstractQueuedSynchronizer.h"
#import "JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node.h"
#import "JavaUtilConcurrentLocksCondition-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentLocksAbstractQueuedSynchronizer_ConditionObject : NSObject <JavaUtilConcurrentLocksCondition, JavaIoSerializable>

 {
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer *this$0_;
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *firstWaiter_;
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *lastWaiter_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer:(id)arg0 ;
-(id)addConditionWaiter;
-(void)doSignalWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(void)doSignalAllWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(void)unlinkCancelledWaiters;
-(void)signal;
-(void)signalAll;
-(void)awaitUninterruptibly;
-(int)checkInterruptWhileWaitingWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg0 ;
-(void)reportInterruptAfterWaitWithInt:(int)arg0 ;
-(void)await;
-(NSInteger)awaitNanosWithLong:(NSInteger)arg0 ;
-(BOOL)awaitUntilWithJavaUtilDate:(id)arg0 ;
-(BOOL)awaitWithLong:(NSInteger)arg0 withJavaUtilConcurrentTimeUnitEnum:(id)arg1 ;
-(BOOL)isOwnedByWithJavaUtilConcurrentLocksAbstractQueuedSynchronizer:(id)arg0 ;
-(BOOL)hasWaiters;
-(int)getWaitQueueLength;
-(id)getWaitingThreads;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif