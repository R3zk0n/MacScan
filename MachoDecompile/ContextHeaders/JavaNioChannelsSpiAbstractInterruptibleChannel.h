// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSPIABSTRACTINTERRUPTIBLECHANNEL_H
#define JAVANIOCHANNELSSPIABSTRACTINTERRUPTIBLECHANNEL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractInterruptibleChannel_ChannelCloser.h"
#import "JavaNioChannelsChannel-Protocol.h"
#import "JavaNioChannelsInterruptibleChannel-Protocol.h"

@interface JavaNioChannelsSpiAbstractInterruptibleChannel : NSObject <JavaNioChannelsChannel, JavaNioChannelsInterruptibleChannel>

 {
    uint8_t interrupted_;
    uint8_t closed_;
    JavaNioChannelsSpiAbstractInterruptibleChannel_ChannelCloser *interruptAndCloseRunnable_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(BOOL)isOpen;
-(void)close;
-(void)begin;
-(void)endWithBoolean:(BOOL)arg0 ;
-(void)implCloseChannel;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif