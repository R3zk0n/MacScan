// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTOREBYTEBUFFERINDEXINPUT_MULTIBUFFERIMPL_H
#define ORGAPACHELUCENESTOREBYTEBUFFERINDEXINPUT_MULTIBUFFERIMPL_H



#import "OrgApacheLuceneStoreByteBufferIndexInput.h"

@interface OrgApacheLuceneStoreByteBufferIndexInput_MultiBufferImpl : OrgApacheLuceneStoreByteBufferIndexInput {
    int offset_;
}




-(id)initWithNSString:(id)arg0 withJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 withInt:(int)arg4 withOrgApacheLuceneStoreByteBufferIndexInput_BufferCleaner:(id)arg5 withOrgApacheLuceneUtilWeakIdentityMap:(id)arg6 ;
-(void)seekWithLong:(NSInteger)arg0 ;
-(NSInteger)getFilePointer;
-(char)readByteWithLong:(NSInteger)arg0 ;
-(short)readShortWithLong:(NSInteger)arg0 ;
-(int)readIntWithLong:(NSInteger)arg0 ;
-(NSInteger)readLongWithLong:(NSInteger)arg0 ;
-(id)buildSliceWithNSString:(id)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 ;


@end


#endif