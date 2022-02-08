// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSOCKETCHANNELIMPL_SOCKETADAPTER_H
#define JAVANIOSOCKETCHANNELIMPL_SOCKETADAPTER_H



#import "JavaNetSocket.h"
#import "JavaNioSocketChannelImpl.h"
#import "JavaNetPlainSocketImpl.h"

@interface JavaNioSocketChannelImpl_SocketAdapter : JavaNetSocket {
    JavaNioSocketChannelImpl *channel_;
    JavaNetPlainSocketImpl *socketImpl_;
}




-(id)initWithJavaNetPlainSocketImpl:(id)arg0 withJavaNioSocketChannelImpl:(id)arg1 ;
-(id)getChannel;
-(void)connectWithJavaNetSocketAddress:(id)arg0 withInt:(int)arg1 ;
-(void)bindWithJavaNetSocketAddress:(id)arg0 ;
-(void)close;
-(id)getOutputStream;
-(id)getInputStream;
-(id)getFileDescriptor$;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif