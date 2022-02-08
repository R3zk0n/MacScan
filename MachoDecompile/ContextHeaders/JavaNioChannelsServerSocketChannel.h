// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSERVERSOCKETCHANNEL_H
#define JAVANIOCHANNELSSERVERSOCKETCHANNEL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractSelectableChannel.h"
#import "JavaNioChannelsNetworkChannel-Protocol.h"

@interface JavaNioChannelsServerSocketChannel : JavaNioChannelsSpiAbstractSelectableChannel <JavaNioChannelsNetworkChannel>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(int)validOps;
-(id)socket;
-(id)bindWithJavaNetSocketAddress:(id)arg0 ;
-(id)bindWithJavaNetSocketAddress:(id)arg0 withInt:(int)arg1 ;
-(id)getLocalAddress;
-(id)getOptionWithJavaNetSocketOption:(id)arg0 ;
-(id)setOptionWithJavaNetSocketOption:(id)arg0 withId:(id)arg1 ;
-(id)supportedOptions;
-(id)accept;
+(id)open;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif