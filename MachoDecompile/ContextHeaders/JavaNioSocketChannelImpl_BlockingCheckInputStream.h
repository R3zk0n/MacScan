// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOSOCKETCHANNELIMPL_BLOCKINGCHECKINPUTSTREAM_H
#define JAVANIOSOCKETCHANNELIMPL_BLOCKINGCHECKINPUTSTREAM_H



#import "JavaIoFilterInputStream.h"
#import "JavaNioChannelsSocketChannel.h"

@interface JavaNioSocketChannelImpl_BlockingCheckInputStream : JavaIoFilterInputStream {
    JavaNioChannelsSocketChannel *channel_;
}




-(id)initWithJavaIoInputStream:(id)arg0 withJavaNioChannelsSocketChannel:(id)arg1 ;
-(int)read;
-(int)readWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(int)readWithByteArray:(id)arg0 ;
-(void)close;
-(void)checkBlocking;
-(void)dealloc;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif