// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSOCKETCHANNELIMPL_BLOCKINGCHECKOUTPUTSTREAM_H
#define JAVANIOSOCKETCHANNELIMPL_BLOCKINGCHECKOUTPUTSTREAM_H



#import "JavaIoFilterOutputStream.h"
#import "JavaNioChannelsSocketChannel.h"

@interface JavaNioSocketChannelImpl_BlockingCheckOutputStream : JavaIoFilterOutputStream {
    JavaNioChannelsSocketChannel *channel_;
}




-(id)initWithJavaIoOutputStream:(id)arg0 withJavaNioChannelsSocketChannel:(id)arg1 ;
-(void)writeWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)writeWithInt:(int)arg0 ;
-(void)writeWithByteArray:(id)arg0 ;
-(void)close;
-(void)checkBlocking;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif