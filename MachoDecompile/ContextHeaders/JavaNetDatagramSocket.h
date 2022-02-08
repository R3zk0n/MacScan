// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETDATAGRAMSOCKET_H
#define JAVANETDATAGRAMSOCKET_H


#import <Foundation/Foundation.h>

#import "JavaNetDatagramSocketImpl.h"
#import "JavaNetInetAddress.h"
#import "JavaNetSocketException.h"
#import "JavaIoCloseable-Protocol.h"

@interface JavaNetDatagramSocket : NSObject <JavaIoCloseable>

 {
    JavaNetDatagramSocketImpl *impl_;
    JavaNetInetAddress *address_;
    int port_;
    BOOL isBound_;
    BOOL isConnected_;
    JavaNetSocketException *pendingConnectException_;
    BOOL isClosed_;
    id *lock_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withJavaNetInetAddress:(id)arg1 ;
-(void)checkPortWithInt:(int)arg0 ;
-(void)close;
-(void)onClose;
-(void)disconnect;
-(void)onDisconnect;
-(void)createSocketWithInt:(int)arg0 withJavaNetInetAddress:(id)arg1 ;
-(id)getInetAddress;
-(id)getLocalAddress;
-(int)getLocalPort;
-(int)getPort;
-(BOOL)isMulticastSocket;
-(int)getReceiveBufferSize;
-(int)getSendBufferSize;
-(int)getSoTimeout;
-(void)receiveWithJavaNetDatagramPacket:(id)arg0 ;
-(void)sendWithJavaNetDatagramPacket:(id)arg0 ;
-(void)setNetworkInterfaceWithJavaNetNetworkInterface:(id)arg0 ;
-(void)setSendBufferSizeWithInt:(int)arg0 ;
-(void)setReceiveBufferSizeWithInt:(int)arg0 ;
-(void)setSoTimeoutWithInt:(int)arg0 ;
-(id)initWithJavaNetDatagramSocketImpl:(id)arg0 ;
-(id)initWithJavaNetSocketAddress:(id)arg0 ;
-(void)checkOpen;
-(void)ensureBound;
-(void)bindWithJavaNetSocketAddress:(id)arg0 ;
-(void)onBindWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)connectWithJavaNetSocketAddress:(id)arg0 ;
-(void)onConnectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)connectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(BOOL)isBound;
-(BOOL)isConnected;
-(id)getRemoteSocketAddress;
-(id)getLocalSocketAddress;
-(void)setReuseAddressWithBoolean:(BOOL)arg0 ;
-(BOOL)getReuseAddress;
-(void)setBroadcastWithBoolean:(BOOL)arg0 ;
-(BOOL)getBroadcast;
-(void)setTrafficClassWithInt:(int)arg0 ;
-(int)getTrafficClass;
-(BOOL)isClosed;
-(id)getChannel;
-(id)getFileDescriptor$;
-(void)dealloc;
+(void)setDatagramSocketImplFactoryWithJavaNetDatagramSocketImplFactory:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif