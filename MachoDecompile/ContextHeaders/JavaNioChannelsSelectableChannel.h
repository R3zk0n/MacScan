// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSELECTABLECHANNEL_H
#define JAVANIOCHANNELSSELECTABLECHANNEL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractInterruptibleChannel.h"
#import "JavaNioChannelsChannel-Protocol.h"

@interface JavaNioChannelsSelectableChannel : JavaNioChannelsSpiAbstractInterruptibleChannel <JavaNioChannelsChannel>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(id)blockingLock;
-(id)configureBlockingWithBoolean:(BOOL)arg0 ;
-(BOOL)isBlocking;
-(BOOL)isRegistered;
-(id)keyForWithJavaNioChannelsSelector:(id)arg0 ;
-(id)provider;
-(id)register__WithJavaNioChannelsSelector:(id)arg0 withInt:(int)arg1 ;
-(id)register__WithJavaNioChannelsSelector:(id)arg0 withInt:(int)arg1 withId:(id)arg2 ;
-(int)validOps;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif