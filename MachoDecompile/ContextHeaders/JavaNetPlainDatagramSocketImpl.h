// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETPLAINDATAGRAMSOCKETIMPL_H
#define JAVANETPLAINDATAGRAMSOCKETIMPL_H



#import "JavaNetDatagramSocketImpl.h"
#import "DalvikSystemCloseGuard.h"
#import "JavaNetInetAddress.h"

@interface JavaNetPlainDatagramSocketImpl : JavaNetDatagramSocketImpl {
    uint8_t isNativeConnected_;
    DalvikSystemCloseGuard *guard_;
    JavaNetInetAddress *connectedAddress_;
    int connectedPort_;
}




-(id)initWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 ;
-(id)init;
-(void)bindWithInt:(int)arg0 withJavaNetInetAddress:(id)arg1 ;
-(void)close;
-(void)create;
-(void)dealloc;
-(id)getOptionWithInt:(int)arg0 ;
-(int)getTimeToLive;
-(char)getTTL;
-(void)joinWithJavaNetInetAddress:(id)arg0 ;
-(void)joinGroupWithJavaNetSocketAddress:(id)arg0 withJavaNetNetworkInterface:(id)arg1 ;
-(void)leaveWithJavaNetInetAddress:(id)arg0 ;
-(void)leaveGroupWithJavaNetSocketAddress:(id)arg0 withJavaNetNetworkInterface:(id)arg1 ;
-(int)peekWithJavaNetInetAddress:(id)arg0 ;
-(void)doRecvWithJavaNetDatagramPacket:(id)arg0 withInt:(int)arg1 ;
-(void)receiveWithJavaNetDatagramPacket:(id)arg0 ;
-(int)peekDataWithJavaNetDatagramPacket:(id)arg0 ;
-(void)sendWithJavaNetDatagramPacket:(id)arg0 ;
-(void)setOptionWithInt:(int)arg0 withId:(id)arg1 ;
-(void)setTimeToLiveWithInt:(int)arg0 ;
-(void)setTTLWithByte:(char)arg0 ;
-(void)connectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)disconnect;
-(void)updatePacketRecvAddressWithJavaNetDatagramPacket:(id)arg0 ;
+(id)makeGroupReqWithJavaNetInetAddress:(id)arg0 withJavaNetNetworkInterface:(id)arg1 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif