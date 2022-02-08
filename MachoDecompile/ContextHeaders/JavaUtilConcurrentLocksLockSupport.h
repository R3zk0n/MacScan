// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTLOCKSLOCKSUPPORT_H
#define JAVAUTILCONCURRENTLOCKSLOCKSUPPORT_H


#import <Foundation/Foundation.h>


@interface JavaUtilConcurrentLocksLockSupport : NSObject



-(id)init;
+(void)setBlockerWithJavaLangThread:(id)arg0 withId:(id)arg1 ;
+(void)unparkWithJavaLangThread:(id)arg0 ;
+(void)parkWithId:(id)arg0 ;
+(void)parkNanosWithId:(id)arg0 withLong:(NSInteger)arg1 ;
+(void)parkUntilWithId:(id)arg0 withLong:(NSInteger)arg1 ;
+(id)getBlockerWithJavaLangThread:(id)arg0 ;
+(void)park;
+(void)parkNanosWithLong:(NSInteger)arg0 ;
+(void)parkUntilWithLong:(NSInteger)arg0 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif