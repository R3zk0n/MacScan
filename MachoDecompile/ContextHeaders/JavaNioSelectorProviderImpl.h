// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSELECTORPROVIDERIMPL_H
#define JAVANIOSELECTORPROVIDERIMPL_H



#import "JavaNioChannelsSpiSelectorProvider.h"

@interface JavaNioSelectorProviderImpl : JavaNioChannelsSpiSelectorProvider



-(id)openDatagramChannel;
-(id)openPipe;
-(id)openSelector;
-(id)openServerSocketChannel;
-(id)openSocketChannel;
-(id)init;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif