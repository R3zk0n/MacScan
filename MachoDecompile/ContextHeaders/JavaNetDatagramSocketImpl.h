// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETDATAGRAMSOCKETIMPL_H
#define JAVANETDATAGRAMSOCKETIMPL_H


#import <Foundation/Foundation.h>

#import "JavaIoFileDescriptor.h"
#import "JavaNetSocketOptions-Protocol.h"

@interface JavaNetDatagramSocketImpl : NSObject <JavaNetSocketOptions>

 {
    JavaIoFileDescriptor *fd_;
    int localPort_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)bindWithInt:(int)arg0 withJavaNetInetAddress:(id)arg1 ;
-(void)close;
-(void)create;
-(id)getFileDescriptor;
-(int)getLocalPort;
-(char)getTTL;
-(int)getTimeToLive;
-(void)joinWithJavaNetInetAddress:(id)arg0 ;
-(void)joinGroupWithJavaNetSocketAddress:(id)arg0 withJavaNetNetworkInterface:(id)arg1 ;
-(void)leaveWithJavaNetInetAddress:(id)arg0 ;
-(void)leaveGroupWithJavaNetSocketAddress:(id)arg0 withJavaNetNetworkInterface:(id)arg1 ;
-(int)peekWithJavaNetInetAddress:(id)arg0 ;
-(void)receiveWithJavaNetDatagramPacket:(id)arg0 ;
-(void)sendWithJavaNetDatagramPacket:(id)arg0 ;
-(void)setTimeToLiveWithInt:(int)arg0 ;
-(void)setTTLWithByte:(char)arg0 ;
-(void)connectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)disconnect;
-(int)peekDataWithJavaNetDatagramPacket:(id)arg0 ;
-(void)onBindWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)onConnectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)onDisconnect;
-(void)onClose;
-(void)dealloc;
+(id)__annotations_getTTL;
+(id)__annotations_setTTLWithByte_;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif