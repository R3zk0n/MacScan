// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVALANGREFREFERENCE_H
#define JAVALANGREFREFERENCE_H


#import <Foundation/Foundation.h>


@interface JavaLangRefReference : NSObject {
    uint8_t referent_;
    uint8_t queue_;
    uint8_t queueNext_;
    uint8_t pendingNext_;
}




-(id)init;
-(id)initWithId:(id)arg0 withJavaLangRefReferenceQueue:(id)arg1 ;
-(void)clear;
-(BOOL)enqueueInternal;
-(BOOL)enqueue;
-(id)get;
-(BOOL)isEnqueued;
-(void)dealloc;
-(void)initReferent;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif