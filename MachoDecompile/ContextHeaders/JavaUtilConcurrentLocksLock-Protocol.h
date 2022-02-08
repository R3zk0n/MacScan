// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0



@protocol JavaUtilConcurrentLocksLock


-(void)lock;
-(void)lockInterruptibly;
-(BOOL)tryLock;
-(BOOL)tryLockWithLong:(NSInteger)arg0 withJavaUtilConcurrentTimeUnitEnum:(id)arg1 ;
-(void)unlock;
-(id)newCondition;

@end

