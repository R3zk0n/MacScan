// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSPIPE_SINKCHANNEL_H
#define JAVANIOCHANNELSPIPE_SINKCHANNEL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractSelectableChannel.h"
#import "JavaNioChannelsWritableByteChannel-Protocol.h"
#import "JavaNioChannelsGatheringByteChannel-Protocol.h"

@interface JavaNioChannelsPipe_SinkChannel : JavaNioChannelsSpiAbstractSelectableChannel <JavaNioChannelsWritableByteChannel, JavaNioChannelsGatheringByteChannel>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(int)validOps;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif