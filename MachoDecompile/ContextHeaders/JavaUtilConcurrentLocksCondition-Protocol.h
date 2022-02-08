// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0



@protocol JavaUtilConcurrentLocksCondition


-(void)await;
-(void)awaitUninterruptibly;
-(NSInteger)awaitNanosWithLong:(NSInteger)arg0 ;
-(BOOL)awaitWithLong:(NSInteger)arg0 withJavaUtilConcurrentTimeUnitEnum:(id)arg1 ;
-(BOOL)awaitUntilWithJavaUtilDate:(id)arg0 ;
-(void)signal;
-(void)signalAll;

@end

