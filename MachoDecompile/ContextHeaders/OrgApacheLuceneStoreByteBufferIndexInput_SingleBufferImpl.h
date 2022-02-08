// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBYTEBUFFERINDEXINPUT_SINGLEBUFFERIMPL_H
#define ORGAPACHELUCENESTOREBYTEBUFFERINDEXINPUT_SINGLEBUFFERIMPL_H



#import "OrgApacheLuceneStoreByteBufferIndexInput.h"

@interface OrgApacheLuceneStoreByteBufferIndexInput_SingleBufferImpl : OrgApacheLuceneStoreByteBufferIndexInput



-(id)initWithNSString:(id)arg0 withJavaNioByteBuffer:(id)arg1 withLong:(NSInteger)arg2 withInt:(int)arg3 withOrgApacheLuceneStoreByteBufferIndexInput_BufferCleaner:(id)arg4 withOrgApacheLuceneUtilWeakIdentityMap:(id)arg5 ;
-(void)seekWithLong:(NSInteger)arg0 ;
-(NSInteger)getFilePointer;
-(char)readByteWithLong:(NSInteger)arg0 ;
-(short)readShortWithLong:(NSInteger)arg0 ;
-(int)readIntWithLong:(NSInteger)arg0 ;
-(NSInteger)readLongWithLong:(NSInteger)arg0 ;


@end


#endif