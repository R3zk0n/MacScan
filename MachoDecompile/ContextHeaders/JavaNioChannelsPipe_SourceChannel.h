// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSPIPE_SOURCECHANNEL_H
#define JAVANIOCHANNELSPIPE_SOURCECHANNEL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractSelectableChannel.h"
#import "JavaNioChannelsReadableByteChannel-Protocol.h"
#import "JavaNioChannelsScatteringByteChannel-Protocol.h"

@interface JavaNioChannelsPipe_SourceChannel : JavaNioChannelsSpiAbstractSelectableChannel <JavaNioChannelsReadableByteChannel, JavaNioChannelsScatteringByteChannel>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(int)validOps;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif