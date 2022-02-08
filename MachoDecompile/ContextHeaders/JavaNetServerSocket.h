// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETSERVERSOCKET_H
#define JAVANETSERVERSOCKET_H


#import <Foundation/Foundation.h>

#import "JavaNetSocketImpl.h"
#import "JavaNetInetAddress.h"
#import "JavaIoCloseable-Protocol.h"

@interface JavaNetServerSocket : NSObject <JavaIoCloseable>

 {
    JavaNetSocketImpl *impl_;
    BOOL isBound_;
    BOOL isClosed_;
    JavaNetInetAddress *localAddress_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)getImpl$;
-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 withJavaNetInetAddress:(id)arg2 ;
-(void)readBackBindState;
-(id)accept;
-(void)checkListenWithInt:(int)arg0 ;
-(void)close;
-(id)getInetAddress;
-(int)getLocalPort;
-(int)getSoTimeout;
-(void)implAcceptWithJavaNetSocket:(id)arg0 ;
-(void)setSoTimeoutWithInt:(int)arg0 ;
-(void)bindWithJavaNetSocketAddress:(id)arg0 ;
-(void)bindWithJavaNetSocketAddress:(id)arg0 withInt:(int)arg1 ;
-(id)getLocalSocketAddress;
-(BOOL)isBound;
-(BOOL)isClosed;
-(void)checkOpen;
-(void)setReuseAddressWithBoolean:(BOOL)arg0 ;
-(BOOL)getReuseAddress;
-(void)setReceiveBufferSizeWithInt:(int)arg0 ;
-(int)getReceiveBufferSize;
-(id)getChannel;
-(void)setPerformancePreferencesWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;
+(void)setSocketFactoryWithJavaNetSocketImplFactory:(id)arg0 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif