// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSOCKETCHANNEL_H
#define JAVANIOCHANNELSSOCKETCHANNEL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractSelectableChannel.h"
#import "JavaNioChannelsByteChannel-Protocol.h"
#import "JavaNioChannelsScatteringByteChannel-Protocol.h"
#import "JavaNioChannelsGatheringByteChannel-Protocol.h"
#import "JavaNioChannelsNetworkChannel-Protocol.h"

@interface JavaNioChannelsSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel <JavaNioChannelsByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsGatheringByteChannel, JavaNioChannelsNetworkChannel>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(int)validOps;
-(id)socket;
-(id)bindWithJavaNetSocketAddress:(id)arg0 ;
-(id)getLocalAddress;
-(id)getOptionWithJavaNetSocketOption:(id)arg0 ;
-(id)setOptionWithJavaNetSocketOption:(id)arg0 withId:(id)arg1 ;
-(id)supportedOptions;
-(BOOL)isConnected;
-(BOOL)isConnectionPending;
-(BOOL)connectWithJavaNetSocketAddress:(id)arg0 ;
-(BOOL)finishConnect;
-(int)readWithJavaNioByteBuffer:(id)arg0 ;
-(NSInteger)readWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)readWithJavaNioByteBufferArray:(id)arg0 ;
-(int)writeWithJavaNioByteBuffer:(id)arg0 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 ;
+(id)open;
+(id)openWithJavaNetSocketAddress:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif