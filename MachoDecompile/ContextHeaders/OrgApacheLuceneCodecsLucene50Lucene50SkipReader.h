// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50SKIPREADER_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50SKIPREADER_H



#import "OrgApacheLuceneCodecsMultiLevelSkipListReader.h"
#import "IOSLongArray.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50SkipReader : OrgApacheLuceneCodecsMultiLevelSkipListReader {
    IOSLongArray *docPointer_;
    IOSLongArray *posPointer_;
    IOSLongArray *payPointer_;
    IOSIntArray *posBufferUpto_;
    IOSIntArray *payloadByteUpto_;
    NSInteger lastPosPointer_;
    NSInteger lastPayPointer_;
    int lastPayloadByteUpto_;
    NSInteger lastDocPointer_;
    int lastPosBufferUpto_;
}




-(id)initWithOrgApacheLuceneStoreIndexInput:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 ;
-(int)trimWithInt:(int)arg0 ;
-(void)init__WithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 withLong:(NSInteger)arg2 withLong:(NSInteger)arg3 withInt:(int)arg4 ;
-(NSInteger)getDocPointer;
-(NSInteger)getPosPointer;
-(int)getPosBufferUpto;
-(NSInteger)getPayPointer;
-(int)getPayloadByteUpto;
-(int)getNextSkipDoc;
-(void)seekChildWithInt:(int)arg0 ;
-(void)setLastSkipDataWithInt:(int)arg0 ;
-(int)readSkipDataWithInt:(int)arg0 withOrgApacheLuceneStoreIndexInput:(id)arg1 ;
-(void)dealloc;


@end


#endif