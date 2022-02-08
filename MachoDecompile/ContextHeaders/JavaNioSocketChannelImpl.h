// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSOCKETCHANNELIMPL_H
#define JAVANIOSOCKETCHANNELIMPL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSocketChannel.h"
#import "JavaIoFileDescriptor.h"
#import "JavaNioSocketChannelImpl_SocketAdapter.h"
#import "JavaNetInetSocketAddress.h"
#import "JavaNetInetAddress.h"
#import "JavaNioFileDescriptorChannel-Protocol.h"

@interface JavaNioSocketChannelImpl : JavaNioChannelsSocketChannel <JavaNioFileDescriptorChannel>

 {
    JavaIoFileDescriptor *fd_;
    JavaNioSocketChannelImpl_SocketAdapter *socket_;
    JavaNetInetSocketAddress *connectAddress_;
    JavaNetInetAddress *localAddress_;
    int localPort_;
    int status_;
    uint8_t isBound_;
    id *readLock_;
    id *writeLock_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 withJavaIoFileDescriptor:(id)arg1 ;
-(id)socket;
-(id)bindWithJavaNetSocketAddress:(id)arg0 ;
-(void)onBindWithBoolean:(BOOL)arg0 ;
-(id)getLocalAddress;
-(id)getOptionWithJavaNetSocketOption:(id)arg0 ;
-(id)setOptionWithJavaNetSocketOption:(id)arg0 withId:(id)arg1 ;
-(id)supportedOptions;
-(BOOL)isConnected;
-(BOOL)isConnectionPending;
-(BOOL)connectWithJavaNetSocketAddress:(id)arg0 ;
-(void)onConnectStatusChangedWithJavaNetInetSocketAddress:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(BOOL)isEINPROGRESSWithJavaIoIOException:(id)arg0 ;
-(BOOL)finishConnect;
-(int)readWithJavaNioByteBuffer:(id)arg0 ;
-(NSInteger)readWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)readImplWithJavaNioByteBuffer:(id)arg0 ;
-(int)writeWithJavaNioByteBuffer:(id)arg0 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)writeImplWithJavaNioByteBuffer:(id)arg0 ;
-(void)checkOpenConnected;
-(void)checkUnconnected;
-(void)implCloseSelectableChannel;
-(void)implConfigureBlockingWithBoolean:(BOOL)arg0 ;
-(id)getFD;
-(void)onAcceptWithJavaNetInetSocketAddress:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)dealloc;
+(id)validateAddressWithJavaNetSocketAddress:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif