// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSELECTORIMPL_H
#define JAVANIOSELECTORIMPL_H



#import "JavaNioChannelsSpiAbstractSelector.h"
#import "JavaIoFileDescriptor.h"
#import "JavaUtilUnsafeArrayList.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilSet-Protocol.h"

@interface JavaNioSelectorImpl : JavaNioChannelsSpiAbstractSelector {
    id *keysLock_;
    id<JavaUtilSet> *mutableKeys_;
    id<JavaUtilSet> *unmodifiableKeys_;
    id<JavaUtilSet> *mutableSelectedKeys_;
    id<JavaUtilSet> *selectedKeys_;
    JavaIoFileDescriptor *wakeupIn_;
    JavaIoFileDescriptor *wakeupOut_;
    JavaUtilUnsafeArrayList *pollFds_;
}




-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(void)implCloseSelector;
-(id)register__WithJavaNioChannelsSpiAbstractSelectableChannel:(id)arg0 withInt:(int)arg1 withId:(id)arg2 ;
-(id)keys;
-(void)checkClosed;
-(int)select;
-(int)selectWithLong:(NSInteger)arg0 ;
-(int)selectNow;
-(int)selectInternalWithLong:(NSInteger)arg0 ;
-(void)setPollFdWithInt:(int)arg0 withJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2 withId:(id)arg3 ;
-(void)preparePollFds;
-(void)ensurePollFdsCapacity;
-(int)processPollFds;
-(id)selectedKeys;
-(int)doCancel;
-(id)wakeup;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif