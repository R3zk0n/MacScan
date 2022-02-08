// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ASYNCHRONOUSSOCKETCLOSEMONITOR_H
#define ASYNCHRONOUSSOCKETCLOSEMONITOR_H


#import <Foundation/Foundation.h>

#import "AsynchronousSocketCloseMonitor.h"

@interface AsynchronousSocketCloseMonitor : NSObject {
    AsynchronousSocketCloseMonitor *mPrev;
    AsynchronousSocketCloseMonitor *mNext;
    *_opaque_pthread_t mThread;
    int mFd;
}




-(id)initWithFileDescriptor:(int)arg0 ;
-(void)dealloc;
+(void)signalBlockedThreads:(int)arg0 ;
+(void)initialize;


@end


#endif