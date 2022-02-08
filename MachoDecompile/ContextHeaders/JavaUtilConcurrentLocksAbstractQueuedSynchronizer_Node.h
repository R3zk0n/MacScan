// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVAUTILCONCURRENTLOCKSABSTRACTQUEUEDSYNCHRONIZER_NODE_H
#define JAVAUTILCONCURRENTLOCKSABSTRACTQUEUEDSYNCHRONIZER_NODE_H


#import <Foundation/Foundation.h>

#import "JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node.h"

@interface JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node : NSObject {
    uint8_t waitStatus_;
    uint8_t prev_;
    uint8_t next_;
    uint8_t thread_;
    JavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node *nextWaiter_;
}




-(BOOL)isShared;
-(id)predecessor;
-(id)init;
-(id)initWithJavaLangThread:(id)arg0 withJavaUtilConcurrentLocksAbstractQueuedSynchronizer_Node:(id)arg1 ;
-(id)initWithJavaLangThread:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;
-(void)__javaClone;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif