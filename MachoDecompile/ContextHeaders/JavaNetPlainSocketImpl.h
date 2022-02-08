// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANETPLAINSOCKETIMPL_H
#define JAVANETPLAINSOCKETIMPL_H



#import "JavaNetSocketImpl.h"
#import "JavaNetProxy.h"
#import "DalvikSystemCloseGuard.h"

@interface JavaNetPlainSocketImpl : JavaNetSocketImpl {
    BOOL streaming_;
    BOOL shutdownInput_;
    JavaNetProxy *proxy_;
    DalvikSystemCloseGuard *guard_;
}




-(id)initWithJavaIoFileDescriptor:(id)arg0 ;
-(id)initWithJavaNetProxy:(id)arg0 ;
-(id)init;
-(id)initWithJavaIoFileDescriptor:(id)arg0 withInt:(int)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 ;
-(void)acceptWithJavaNetSocketImpl:(id)arg0 ;
-(BOOL)usingSocks;
-(void)initLocalPortWithInt:(int)arg0 ;
-(void)initRemoteAddressAndPortWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)checkNotClosed;
-(int)available;
-(void)bindWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)close;
-(void)connectWithNSString:(id)arg0 withInt:(int)arg1 ;
-(void)connectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)connectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)createWithBoolean:(BOOL)arg0 ;
-(void)dealloc;
-(id)getInputStream;
-(id)getOptionWithInt:(int)arg0 ;
-(id)getOutputStream;
-(void)listenWithInt:(int)arg0 ;
-(void)setOptionWithInt:(int)arg0 withId:(id)arg1 ;
-(int)socksGetServerPort;
-(id)socksGetServerAddress;
-(void)socksConnectWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)socksRequestConnectionWithJavaNetInetAddress:(id)arg0 withInt:(int)arg1 ;
-(void)socksAccept;
-(void)shutdownInput;
-(void)shutdownOutput;
-(void)socksBind;
-(void)socksSendRequestWithInt:(int)arg0 withJavaNetInetAddress:(id)arg1 withInt:(int)arg2 ;
-(id)socksReadReply;
-(void)connectWithJavaNetSocketAddress:(id)arg0 withInt:(int)arg1 ;
-(BOOL)supportsUrgentData;
-(void)sendUrgentDataWithInt:(int)arg0 ;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif