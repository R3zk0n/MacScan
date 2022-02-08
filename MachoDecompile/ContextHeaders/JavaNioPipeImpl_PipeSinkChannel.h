// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOPIPEIMPL_PIPESINKCHANNEL_H
#define JAVANIOPIPEIMPL_PIPESINKCHANNEL_H

@class SinkChannel;

#import <Foundation/Foundation.h>

#import "JavaIoFileDescriptor.h"
#import "JavaNioChannelsSocketChannel.h"
#import "JavaNioFileDescriptorChannel-Protocol.h"

@interface JavaNioPipeImpl_PipeSinkChannel : SinkChannel <JavaNioFileDescriptorChannel>

 {
    JavaIoFileDescriptor *fd_;
    JavaNioChannelsSocketChannel *channel_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioPipeImpl:(id)arg0 withJavaNioChannelsSpiSelectorProvider:(id)arg1 withJavaIoFileDescriptor:(id)arg2 ;
-(void)implCloseSelectableChannel;
-(void)implConfigureBlockingWithBoolean:(BOOL)arg0 ;
-(int)writeWithJavaNioByteBuffer:(id)arg0 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)getFD;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif