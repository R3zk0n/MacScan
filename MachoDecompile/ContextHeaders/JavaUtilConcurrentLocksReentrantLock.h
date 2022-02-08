// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTLOCKSREENTRANTLOCK_H
#define JAVAUTILCONCURRENTLOCKSREENTRANTLOCK_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentLocksReentrantLock_Sync.h"
#import "JavaUtilConcurrentLocksLock-Protocol.h"
#import "JavaIoSerializable-Protocol.h"

@interface JavaUtilConcurrentLocksReentrantLock : NSObject <JavaUtilConcurrentLocksLock, JavaIoSerializable>

 {
    JavaUtilConcurrentLocksReentrantLock_Sync *sync_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithBoolean:(BOOL)arg0 ;
-(void)lock;
-(void)lockInterruptibly;
-(BOOL)tryLock;
-(BOOL)tryLockWithLong:(NSInteger)arg0 withJavaUtilConcurrentTimeUnitEnum:(id)arg1 ;
-(void)unlock;
-(id)newCondition;
-(int)getHoldCount;
-(BOOL)isHeldByCurrentThread;
-(BOOL)isLocked;
-(BOOL)isFair;
-(id)getOwner;
-(BOOL)hasQueuedThreads;
-(BOOL)hasQueuedThreadWithJavaLangThread:(id)arg0 ;
-(int)getQueueLength;
-(id)getQueuedThreads;
-(BOOL)hasWaitersWithJavaUtilConcurrentLocksCondition:(id)arg0 ;
-(int)getWaitQueueLengthWithJavaUtilConcurrentLocksCondition:(id)arg0 ;
-(id)getWaitingThreadsWithJavaUtilConcurrentLocksCondition:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif