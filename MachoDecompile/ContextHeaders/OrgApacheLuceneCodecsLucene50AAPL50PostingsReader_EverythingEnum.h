// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSREADER_EVERYTHINGENUM_H
#define ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSREADER_EVERYTHINGENUM_H



#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneCodecsLucene50AAPL50PostingsReader.h"
#import "IOSByteArray.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneCodecsLucene50Lucene50SkipReader.h"

@interface OrgApacheLuceneCodecsLucene50AAPL50PostingsReader_EverythingEnum : OrgApacheLuceneIndexPostingsEnum {
    OrgApacheLuceneStoreIndexInput *startDocIn_;
    OrgApacheLuceneStoreIndexInput *docIn_;
    OrgApacheLuceneStoreIndexInput *posIn_;
    OrgApacheLuceneStoreIndexInput *payIn_;
    OrgApacheLuceneUtilBytesRef *payload_;
    BOOL indexHasOffsets_;
    BOOL indexHasPayloads_;
    OrgApacheLuceneCodecsLucene50AAPL50PostingsReader *this$0_;
    IOSByteArray *encoded_;
    IOSIntArray *docDeltaBuffer_;
    IOSIntArray *freqBuffer_;
    IOSIntArray *freqPostingDeltaBuffer_;
    IOSIntArray *posDeltaBuffer_;
    IOSIntArray *payloadLengthBuffer_;
    IOSIntArray *offsetStartDeltaBuffer_;
    IOSIntArray *offsetLengthBuffer_;
    IOSByteArray *payloadBytes_;
    int payloadByteUpto_;
    int payloadLength_;
    int lastStartOffset_;
    int startOffset_;
    int endOffset_;
    int docBufferUpto_;
    int posBufferUpto_;
    OrgApacheLuceneCodecsLucene50Lucene50SkipReader *skipper_;
    BOOL skipped_;
    int docFreq_;
    NSInteger totalTermFreq_;
    int docUpto_;
    int doc_;
    int accum_;
    int freq_;
    int freqWithPostings_;
    int position_;
    int previousPosition_;
    int posPendingCount_;
    NSInteger posPendingFP_;
    NSInteger payPendingFP_;
    NSInteger docTermStartFP_;
    NSInteger posTermStartFP_;
    NSInteger payTermStartFP_;
    NSInteger lastPosBlockFP_;
    NSInteger skipOffset_;
    int nextSkipDoc_;
    BOOL needsOffsets_;
    BOOL needsPayloads_;
    int singletonDocID_;
    int remainingPostingsInDoc_;
}




-(id)initWithOrgApacheLuceneCodecsLucene50AAPL50PostingsReader:(id)arg0 withOrgApacheLuceneIndexFieldInfo:(id)arg1 ;
-(BOOL)canReuseWithOrgApacheLuceneStoreIndexInput:(id)arg0 withOrgApacheLuceneIndexFieldInfo:(id)arg1 ;
-(id)resetWithOrgApacheLuceneCodecsLucene50AAPL50PostingsFormatReadOnly_IntBlockTermState:(id)arg0 withInt:(int)arg1 ;
-(int)freq;
-(int)docID;
-(void)refillDocs;
-(void)refillPositions;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(void)skipPositions;
-(int)nextPosition;
-(int)startOffset;
-(int)endOffset;
-(id)getPayload;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif