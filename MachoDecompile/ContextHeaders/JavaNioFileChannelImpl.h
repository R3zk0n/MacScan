// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef JAVANIOFILECHANNELIMPL_H
#define JAVANIOFILECHANNELIMPL_H



#import "JavaNioChannelsFileChannel.h"
#import "JavaIoFileDescriptor.h"
#import "JavaUtilSortedSet-Protocol.h"

@interface JavaNioFileChannelImpl : JavaNioChannelsFileChannel {
    id *stream_;
    JavaIoFileDescriptor *fd_;
    int mode_;
    id<JavaUtilSortedSet> *locks_;
}




-(id)initWithId:(id)arg0 withJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2 ;
-(void)checkOpen;
-(void)checkReadable;
-(void)checkWritable;
-(void)implCloseChannel;
-(id)basicLockWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 ;
-(id)lockWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withBoolean:(BOOL)arg2 ;
-(id)tryLockWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withBoolean:(BOOL)arg2 ;
-(void)release__WithJavaNioChannelsFileLock:(id)arg0 ;
-(void)forceWithBoolean:(BOOL)arg0 ;
-(id)mapWithJavaNioChannelsFileChannel_MapMode:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(NSInteger)position;
-(id)positionWithLong:(NSInteger)arg0 ;
-(int)readWithJavaNioByteBuffer:(id)arg0 withLong:(NSInteger)arg1 ;
-(int)readWithJavaNioByteBuffer:(id)arg0 ;
-(int)readImplWithJavaNioByteBuffer:(id)arg0 withLong:(NSInteger)arg1 ;
-(int)transferIoVecWithJavaNioIoVec:(id)arg0 ;
-(NSInteger)readWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(NSInteger)size;
-(NSInteger)transferFromWithJavaNioChannelsReadableByteChannel:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(NSInteger)transferToWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withJavaNioChannelsWritableByteChannel:(id)arg2 ;
-(id)truncateWithLong:(NSInteger)arg0 ;
-(int)writeWithJavaNioByteBuffer:(id)arg0 withLong:(NSInteger)arg1 ;
-(int)writeWithJavaNioByteBuffer:(id)arg0 ;
-(int)writeImplWithJavaNioByteBuffer:(id)arg0 withLong:(NSInteger)arg1 ;
-(NSInteger)writeWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(id)getFD;
-(void)addLockWithJavaNioChannelsFileLock:(id)arg0 ;
-(void)removeLockWithJavaNioChannelsFileLock:(id)arg0 ;
-(void)dealloc;
-(void)__javaClone;
+(NSInteger)translateLockLengthWithLong:(NSInteger)arg0 ;
+(int)calculateTotalRemainingWithJavaNioByteBufferArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
+(void)initialize;
+(struct J2ObjcClassInfo *)__metadata;


@end


#endif