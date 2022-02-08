// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETSOCKET_H
#define JAVANETSOCKET_H


#import <Foundation/Foundation.h>

#import "JavaNetSocketImpl.h"
#import "JavaNetProxy.h"
#import "JavaNetInetAddress.h"
#import "JavaIoCloseable-Protocol.h"

@interface JavaNetSocket : NSObject <JavaIoCloseable>

 {
    JavaNetSocketImpl *impl_;
    uint8_t isCreated_;
    JavaNetProxy *proxy_;
    BOOL isBound_;
    BOOL isConnected_;
    BOOL isClosed_;
    BOOL isInputShutdown_;
    BOOL isOutputShutdown_;
    JavaNetInetAddress *localAddress_;
    id *connectLock_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)initWithJavaNetProxy:(id)arg0 ;
-(void)tryAllAddressesWithNSString:(id)arg0 withInt:(int)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 ;
-(id)initWithNSString:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(id)initWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(id)initWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 ;
-(id)initWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 ;
-(id)initWithJavaNetSocketImpl:(id)arg0 ;
-(void)checkDestinationWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)close;
-(void)onClose;
-(id)getInetAddress;
-(id)getInputStream;
-(BOOL)getKeepAlive;
-(id)getLocalAddress;
-(int)getLocalPort;
-(id)getOutputStream;
-(int)getPort;
-(int)getSoLinger;
-(int)getReceiveBufferSize;
-(int)getSendBufferSize;
-(int)getSoTimeout;
-(BOOL)getTcpNoDelay;
-(void)setKeepAliveWithBoolean:(BOOL)arg0 ;
-(void)setSendBufferSizeWithInt:(int)arg0 ;
-(void)setReceiveBufferSizeWithInt:(int)arg0 ;
-(void)setSoLingerWithBoolean:(BOOL)arg0 withInt:(int)arg1 ;
-(void)setSoTimeoutWithInt:(int)arg0 ;
-(void)setTcpNoDelayWithBoolean:(BOOL)arg0 ;
-(void)startupSocketWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 ;
-(BOOL)usingSocks;
-(void)shutdownInput;
-(void)shutdownOutput;
-(void)checkOpenAndCreateWithBoolean:(BOOL)arg0 ;
-(id)getLocalSocketAddress;
-(id)getRemoteSocketAddress;
-(BOOL)isBound;
-(BOOL)isConnected;
-(BOOL)isClosed;
-(void)bindWithJavaNetSocketAddress:(id)arg0 ;
-(void)onBindWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)connectWithJavaNetSocketAddress:(id)arg0 ;
-(void)connectWithJavaNetSocketAddress:(id)arg0 withInt:(int)arg1 ;
-(void)onConnectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(BOOL)isInputShutdown;
-(BOOL)isOutputShutdown;
-(void)setReuseAddressWithBoolean:(BOOL)arg0 ;
-(BOOL)getReuseAddress;
-(void)setOOBInlineWithBoolean:(BOOL)arg0 ;
-(BOOL)getOOBInline;
-(void)setTrafficClassWithInt:(int)arg0 ;
-(int)getTrafficClass;
-(void)sendUrgentDataWithInt:(int)arg0 ;
-(void)accepted;
-(void)cacheLocalAddress;
-(id)getChannel;
-(id)getFileDescriptor$;
-(void)setPerformancePreferencesWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(void)setSocketImplFactoryWithJavaNetSocketImplFactory:(id)arg0 ;
+(id)__annotations_initWithNSString_withInt_withBoolean_;
+(id)__annotations_initWithJavaNetInetAddress_withInt_withBoolean_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif