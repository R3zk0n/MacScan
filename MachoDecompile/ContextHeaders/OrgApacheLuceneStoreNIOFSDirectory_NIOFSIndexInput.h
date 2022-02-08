// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORENIOFSDIRECTORY_NIOFSINDEXINPUT_H
#define ORGAPACHELUCENESTORENIOFSDIRECTORY_NIOFSINDEXINPUT_H



#import "OrgApacheLuceneStoreBufferedIndexInput.h"
#import "JavaNioChannelsFileChannel.h"
#import "JavaNioByteBuffer.h"

@interface OrgApacheLuceneStoreNIOFSDirectory_NIOFSIndexInput : OrgApacheLuceneStoreBufferedIndexInput {
    JavaNioChannelsFileChannel *channel_;
    BOOL isClone_;
    NSInteger off_;
    NSInteger end_;
    JavaNioByteBuffer *byteBuf_;
}




-(id)initWithNSString:(id)arg0 withJavaNioChannelsFileChannel:(id)arg1 withOrgApacheLuceneStoreIOContext:(id)arg2 ;
-(id)initWithNSString:(id)arg0 withJavaNioChannelsFileChannel:(id)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 withInt:(int)arg4 ;
-(void)close;
-(id)clone;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(NSInteger)length;
-(void)newBufferWithByteArray:(id)arg0 ;
-(void)readInternalWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)seekInternalWithLong:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif