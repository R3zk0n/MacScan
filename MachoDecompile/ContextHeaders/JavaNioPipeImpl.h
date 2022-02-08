// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOPIPEIMPL_H
#define JAVANIOPIPEIMPL_H



#import "JavaNioChannelsPipe.h"
#import "JavaNioPipeImpl_PipeSinkChannel.h"
#import "JavaNioPipeImpl_PipeSourceChannel.h"

@interface JavaNioPipeImpl : JavaNioChannelsPipe {
    JavaNioPipeImpl_PipeSinkChannel *sink_;
    JavaNioPipeImpl_PipeSourceChannel *source_;
}




-(id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg0 ;
-(id)sink;
-(id)source;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif