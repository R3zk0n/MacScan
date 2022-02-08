// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOCHANNELSFILECHANNEL_H
#define JAVANIOCHANNELSFILECHANNEL_H


#import <Foundation/Foundation.h>

#import "JavaNioChannelsSpiAbstractInterruptibleChannel.h"
#import "JavaNioChannelsGatheringByteChannel-Protocol.h"
#import "JavaNioChannelsScatteringByteChannel-Protocol.h"
#import "JavaNioChannelsByteChannel-Protocol.h"
#import "JavaNioChannelsSeekableByteChannel-Protocol.h"

@interface JavaNioChannelsFileChannel : JavaNioChannelsSpiAbstractInterruptibleChannel <JavaNioChannelsGatheringByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsByteChannel, JavaNioChannelsSeekableByteChannel>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)init;
-(void)forceWithBoolean:(BOOL)arg0 ;
-(id)lock;
-(id)lockWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withBoolean:(BOOL)arg2 ;
-(id)mapWithJavaNioChannelsFileChannel_MapMode:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(NSInteger)position;
-(id)positionWithLong:(NSInteger)arg0 ;
-(int)readWithJavaNioByteBuffer:(id)arg0 ;
-(int)readWithJavaNioByteBuffer:(id)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)readWithJavaNioByteBufferArray:(id)arg0 ;
-(NSInteger)readWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)size;
-(NSInteger)transferFromWithJavaNioChannelsReadableByteChannel:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(NSInteger)transferToWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withJavaNioChannelsWritableByteChannel:(id)arg2 ;
-(id)truncateWithLong:(NSInteger)arg0 ;
-(id)tryLock;
-(id)tryLockWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withBoolean:(BOOL)arg2 ;
-(int)writeWithJavaNioByteBuffer:(id)arg0 ;
-(int)writeWithJavaNioByteBuffer:(id)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif