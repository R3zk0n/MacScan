// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSERVERSOCKETCHANNELIMPL_SERVERSOCKETADAPTER_H
#define JAVANIOSERVERSOCKETCHANNELIMPL_SERVERSOCKETADAPTER_H



#import "JavaNetServerSocket.h"
#import "JavaNioServerSocketChannelImpl.h"

@interface JavaNioServerSocketChannelImpl_ServerSocketAdapter : JavaNetServerSocket {
    JavaNioServerSocketChannelImpl *channelImpl_;
}




-(id)initWithJavaNioServerSocketChannelImpl:(id)arg0 ;
-(id)accept;
-(id)implAcceptWithJavaNioSocketChannelImpl:(id)arg0 ;
-(id)getChannel;
-(void)close;
-(id)getFD$;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif