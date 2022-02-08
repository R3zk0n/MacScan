// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSELECTIONKEYIMPL_H
#define JAVANIOSELECTIONKEYIMPL_H



#import "JavaNioChannelsSpiAbstractSelectionKey.h"
#import "JavaNioChannelsSpiAbstractSelectableChannel.h"
#import "JavaNioSelectorImpl.h"

@interface JavaNioSelectionKeyImpl : JavaNioChannelsSpiAbstractSelectionKey {
    JavaNioChannelsSpiAbstractSelectableChannel *channel_;
    int interestOps_;
    int readyOps_;
    JavaNioSelectorImpl *selector_;
}




-(id)initWithJavaNioChannelsSpiAbstractSelectableChannel:(id)arg0 withInt:(int)arg1 withId:(id)arg2 withJavaNioSelectorImpl:(id)arg3 ;
-(id)channel;
-(int)interestOps;
-(int)interestOpsNoCheck;
-(id)interestOpsWithInt:(int)arg0 ;
-(int)readyOps;
-(id)selector;
-(void)setReadyOpsWithInt:(int)arg0 ;
-(void)checkValid;
-(BOOL)isConnected;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif