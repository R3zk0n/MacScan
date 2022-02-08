// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSERVERSOCKETCHANNELIMPL_H
#define JAVANIOSERVERSOCKETCHANNELIMPL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsServerSocketChannel.h"
#import "JavaNioServerSocketChannelImpl_ServerSocketAdapter.h"
#import "JavaNioFileDescriptorChannel-Protocol.h"

@interface JavaNioServerSocketChannelImpl : JavaNioChannelsServerSocketChannel <JavaNioFileDescriptorChannel>

 {
    JavaNioServerSocketChannelImpl_ServerSocketAdapter *socket_;
    id *acceptLock_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(id)socket;
-(id)bindWithJavaNetSocketAddress:(id)arg0 withInt:(int)arg1 ;
-(id)getLocalAddress;
-(id)getOptionWithJavaNetSocketOption:(id)arg0 ;
-(id)setOptionWithJavaNetSocketOption:(id)arg0 withId:(id)arg1 ;
-(id)supportedOptions;
-(id)accept;
-(BOOL)shouldThrowSocketTimeoutExceptionFromAcceptWithJavaNetSocketTimeoutException:(id)arg0 ;
-(void)implConfigureBlockingWithBoolean:(BOOL)arg0 ;
-(void)implCloseSelectableChannel;
-(id)getFD;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif