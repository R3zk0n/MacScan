// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETINETADDRESS_$1_H
#define JAVANETINETADDRESS_$1_H



#import "JavaLangThread.h"
#import "JavaNetInetAddress.h"
#import "JavaUtilConcurrentAtomicAtomicBoolean.h"
#import "JavaUtilConcurrentCountDownLatch.h"

@interface JavaNetInetAddress_$1 : JavaLangThread {
    JavaNetInetAddress *this$0_;
    JavaNetInetAddress *val$destinationAddress_;
    JavaNetInetAddress *val$sourceAddress_;
    int val$timeout_;
    JavaUtilConcurrentAtomicAtomicBoolean *val$isReachable_;
    JavaUtilConcurrentCountDownLatch *val$latch_;
}




-(void)run;
-(id)initWithJavaNetInetAddress:(id)arg0 withJavaNetInetAddress:(id)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 withJavaUtilConcurrentAtomicAtomicBoolean:(id)arg4 withJavaUtilConcurrentCountDownLatch:(id)arg5 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif