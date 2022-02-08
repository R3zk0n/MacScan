// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIODATAGRAMCHANNELIMPL_H
#define JAVANIODATAGRAMCHANNELIMPL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsDatagramChannel.h"
#import "JavaNetInetSocketAddress.h"
#import "JavaNetInetAddress.h"
#import "JavaIoFileDescriptor.h"
#import "JavaNetDatagramSocket.h"
#import "JavaNioFileDescriptorChannel-Protocol.h"

@interface JavaNioDatagramChannelImpl : JavaNioChannelsDatagramChannel <JavaNioFileDescriptorChannel>

 {
    JavaNetInetSocketAddress *connectAddress_;
    JavaNetInetAddress *localAddress_;
    BOOL connected_;
    BOOL isBound_;
    JavaIoFileDescriptor *fd_;
    JavaNetDatagramSocket *socket_;
    int localPort_;
    id *readLock_;
    id *writeLock_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(id)init;
-(id)socket;
-(id)bindWithJavaNetSocketAddress:(id)arg0 ;
-(void)onBindWithBoolean:(BOOL)arg0 ;
-(id)getLocalAddress;
-(id)getOptionWithJavaNetSocketOption:(id)arg0 ;
-(id)setOptionWithJavaNetSocketOption:(id)arg0 withId:(id)arg1 ;
-(id)supportedOptions;
-(BOOL)isConnected;
-(id)connectWithJavaNetSocketAddress:(id)arg0 ;
-(void)onConnectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(id)disconnect;
-(void)onDisconnectWithBoolean:(BOOL)arg0 ;
-(id)receiveWithJavaNioByteBuffer:(id)arg0 ;
-(id)receiveImplWithJavaNioByteBuffer:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)receiveDirectImplWithJavaNioByteBuffer:(id)arg0 withBoolean:(BOOL)arg1 ;
-(int)sendWithJavaNioByteBuffer:(id)arg0 withJavaNetSocketAddress:(id)arg1 ;
-(int)readWithJavaNioByteBuffer:(id)arg0 ;
-(NSInteger)readWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)readImplWithJavaNioByteBuffer:(id)arg0 ;
-(int)writeWithJavaNioByteBuffer:(id)arg0 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)writeImplWithJavaNioByteBuffer:(id)arg0 ;
-(void)implCloseSelectableChannel;
-(void)implConfigureBlockingWithBoolean:(BOOL)arg0 ;
-(void)checkOpen;
-(void)checkOpenConnected;
-(void)checkNotNullWithJavaNioByteBuffer:(id)arg0 ;
-(id)getFD;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif