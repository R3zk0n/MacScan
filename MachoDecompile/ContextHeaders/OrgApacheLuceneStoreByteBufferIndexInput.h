// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBYTEBUFFERINDEXINPUT_H
#define ORGAPACHELUCENESTOREBYTEBUFFERINDEXINPUT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexInput.h"
#import "IOSObjectArray.h"
#import "JavaNioByteBuffer.h"
#import "OrgApacheLuceneUtilWeakIdentityMap.h"
#import "OrgApacheLuceneStoreRandomAccessInput-Protocol.h"
#import "OrgApacheLuceneStoreByteBufferIndexInput_BufferCleaner-Protocol.h"

@interface OrgApacheLuceneStoreByteBufferIndexInput : OrgApacheLuceneStoreIndexInput <OrgApacheLuceneStoreRandomAccessInput>

 {
    id<OrgApacheLuceneStoreByteBufferIndexInput_BufferCleaner> *cleaner_;
    NSInteger length_;
    NSInteger chunkSizeMask_;
    int chunkSizePower_;
    IOSObjectArray *buffers_;
    int curBufIndex_;
    JavaNioByteBuffer *curBuf_;
    BOOL isClone_;
    OrgApacheLuceneUtilWeakIdentityMap *clones_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithNSString:(id)arg0 withJavaNioByteBufferArray:(id)arg1 withLong:(NSInteger)arg2 withInt:(int)arg3 withOrgApacheLuceneStoreByteBufferIndexInput_BufferCleaner:(id)arg4 withOrgApacheLuceneUtilWeakIdentityMap:(id)arg5 ;
-(char)readByte;
-(void)readBytesWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(short)readShort;
-(int)readInt;
-(NSInteger)readLong;
-(NSInteger)getFilePointer;
-(void)seekWithLong:(NSInteger)arg0 ;
-(char)readByteWithLong:(NSInteger)arg0 ;
-(void)setPosWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
-(short)readShortWithLong:(NSInteger)arg0 ;
-(int)readIntWithLong:(NSInteger)arg0 ;
-(NSInteger)readLongWithLong:(NSInteger)arg0 ;
-(NSInteger)length;
-(id)clone;
-(id)sliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(id)buildSliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(id)newCloneInstanceWithNSString:(id)arg0 withJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(id)buildSliceWithJavaNioByteBufferArray:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;
-(void)close;
-(void)unsetBuffers;
-(void)freeBufferWithJavaNioByteBuffer:(id)arg0 ;
-(void)dealloc;
+(id)newInstanceWithNSString:(id)arg0 withJavaNioByteBufferArray:(id)arg1 withLong:(NSInteger)arg2 withInt:(int)arg3 withOrgApacheLuceneStoreByteBufferIndexInput_BufferCleaner:(id)arg4 withBoolean:(BOOL)arg5 ;


@end


#endif