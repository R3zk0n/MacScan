// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSSPISELECTORPROVIDER_H
#define JAVANIOCHANNELSSPISELECTORPROVIDER_H


#import <Foundation/Foundation.h>


@interface JavaNioChannelsSpiSelectorProvider : NSObject



-(id)init;
-(id)openDatagramChannel;
-(id)openPipe;
-(id)openSelector;
-(id)openServerSocketChannel;
-(id)openSocketChannel;
-(id)inheritedChannel;
+(id)provider;
+(id)loadProviderByJar;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif