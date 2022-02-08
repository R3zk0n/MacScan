// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef LIBCOREIOASYNCHRONOUSCLOSEMONITOR_H
#define LIBCOREIOASYNCHRONOUSCLOSEMONITOR_H


#import <Foundation/Foundation.h>


@interface LibcoreIoAsynchronousCloseMonitor : NSObject



-(id)init;
+(void)signalBlockedThreadsWithJavaIoFileDescriptor:(id)arg0 ;
+(id)newAsynchronousSocketCloseMonitorWithInt:(int)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif