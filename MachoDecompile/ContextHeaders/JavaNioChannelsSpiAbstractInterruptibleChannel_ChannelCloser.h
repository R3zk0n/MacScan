// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSPIABSTRACTINTERRUPTIBLECHANNEL_CHANNELCLOSER_H
#define JAVANIOCHANNELSSPIABSTRACTINTERRUPTIBLECHANNEL_CHANNELCLOSER_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractInterruptibleChannel.h"
#import "JavaLangRunnable-Protocol.h"

@interface JavaNioChannelsSpiAbstractInterruptibleChannel_ChannelCloser : NSObject <JavaLangRunnable>

 {
    JavaNioChannelsSpiAbstractInterruptibleChannel *this$0_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)run;
-(id)initWithJavaNioChannelsSpiAbstractInterruptibleChannel:(id)arg0 ;
-(void)__javaClone;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif