// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSPIABSTRACTSELECTOR_H
#define JAVANIOCHANNELSSPIABSTRACTSELECTOR_H



#import "JavaNioChannelsSelector.h"
#import "JavaUtilConcurrentAtomicAtomicBoolean.h"
#import "JavaNioChannelsSpiSelectorProvider.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaLangRunnable-Protocol.h"

@interface JavaNioChannelsSpiAbstractSelector : JavaNioChannelsSelector {
    JavaUtilConcurrentAtomicAtomicBoolean *isOpen_;
    JavaNioChannelsSpiSelectorProvider *provider_;
    id<JavaUtilSet> *cancelledKeysSet_;
    id<JavaLangRunnable> *wakeupRunnable_;
}




-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(void)close;
-(void)implCloseSelector;
-(BOOL)isOpen;
-(id)provider;
-(id)cancelledKeys;
-(id)register__WithJavaNioChannelsSpiAbstractSelectableChannel:(id)arg0 withInt:(int)arg1 withId:(id)arg2 ;
-(void)deregisterWithJavaNioChannelsSpiAbstractSelectionKey:(id)arg0 ;
-(void)begin;
-(void)end;
-(void)cancelWithJavaNioChannelsSelectionKey:(id)arg0 ;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif