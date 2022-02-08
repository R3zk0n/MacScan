// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSPIABSTRACTSELECTABLECHANNEL_H
#define JAVANIOCHANNELSSPIABSTRACTSELECTABLECHANNEL_H



#import "JavaNioChannelsSelectableChannel.h"
#import "JavaNioChannelsSpiSelectorProvider.h"
#import "JavaUtilList-Protocol.h"

@interface JavaNioChannelsSpiAbstractSelectableChannel : JavaNioChannelsSelectableChannel {
    BOOL isBlocking_;
    JavaNioChannelsSpiSelectorProvider *provider_;
    id<JavaUtilList> *keyList_;
    id *blockingLock_;
}




-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(id)provider;
-(BOOL)isRegistered;
-(id)keyForWithJavaNioChannelsSelector:(id)arg0 ;
-(id)register__WithJavaNioChannelsSelector:(id)arg0 withInt:(int)arg1 withId:(id)arg2 ;
-(void)implCloseChannel;
-(void)implCloseSelectableChannel;
-(BOOL)isBlocking;
-(id)blockingLock;
-(id)configureBlockingWithBoolean:(BOOL)arg0 ;
-(void)implConfigureBlockingWithBoolean:(BOOL)arg0 ;
-(void)deregisterWithJavaNioChannelsSelectionKey:(id)arg0 ;
-(BOOL)containsValidKeys;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif