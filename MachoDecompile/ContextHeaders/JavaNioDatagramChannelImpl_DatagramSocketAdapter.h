// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIODATAGRAMCHANNELIMPL_DATAGRAMSOCKETADAPTER_H
#define JAVANIODATAGRAMCHANNELIMPL_DATAGRAMSOCKETADAPTER_H



#import "JavaNetDatagramSocket.h"
#import "JavaNioDatagramChannelImpl.h"

@interface JavaNioDatagramChannelImpl_DatagramSocketAdapter : JavaNetDatagramSocket {
    JavaNioDatagramChannelImpl *channelImpl_;
}




-(id)initWithJavaNetDatagramSocketImpl:(id)arg0 withJavaNioDatagramChannelImpl:(id)arg1 ;
-(id)getChannel;
-(void)bindWithJavaNetSocketAddress:(id)arg0 ;
-(void)connectWithJavaNetSocketAddress:(id)arg0 ;
-(void)connectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)receiveWithJavaNetDatagramPacket:(id)arg0 ;
-(void)sendWithJavaNetDatagramPacket:(id)arg0 ;
-(void)close;
-(void)disconnect;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif