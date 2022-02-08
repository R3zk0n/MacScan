// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOMAPPEDBYTEBUFFER_H
#define JAVANIOMAPPEDBYTEBUFFER_H



#import "JavaNioByteBuffer.h"
#import "JavaNioChannelsFileChannel_MapMode.h"
#import "JavaNioMemoryBlock.h"

@interface JavaNioMappedByteBuffer : JavaNioByteBuffer {
    JavaNioChannelsFileChannel_MapMode *mapMode_;
    JavaNioMemoryBlock *block_;
}




-(id)initWithJavaNioMemoryBlock:(id)arg0 withInt:(int)arg1 withJavaNioChannelsFileChannel_MapMode:(id)arg2 withLong:(NSInteger)arg3 ;
-(BOOL)isLoaded;
-(id)load__;
-(id)force;
-(void)checkIsMapped;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif