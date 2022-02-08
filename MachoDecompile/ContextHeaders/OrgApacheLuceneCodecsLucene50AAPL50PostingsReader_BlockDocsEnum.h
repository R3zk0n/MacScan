// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSREADER_BLOCKDOCSENUM_H
#define ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSREADER_BLOCKDOCSENUM_H



#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "OrgApacheLuceneCodecsLucene50AAPL50PostingsReader.h"
#import "IOSByteArray.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneCodecsLucene50Lucene50SkipReader.h"

@interface OrgApacheLuceneCodecsLucene50AAPL50PostingsReader_BlockDocsEnum : OrgApacheLuceneIndexPostingsEnum {
    OrgApacheLuceneStoreIndexInput *startDocIn_;
    OrgApacheLuceneStoreIndexInput *docIn_;
    BOOL indexHasFreq_;
    BOOL indexHasPos_;
    BOOL indexHasOffsets_;
    BOOL indexHasPayloads_;
    OrgApacheLuceneCodecsLucene50AAPL50PostingsReader *this$0_;
    IOSByteArray *encoded_;
    IOSIntArray *docDeltaBuffer_;
    IOSIntArray *freqBuffer_;
    IOSIntArray *freqPostingDeltaBuffer_;
    int docBufferUpto_;
    OrgApacheLuceneCodecsLucene50Lucene50SkipReader *skipper_;
    BOOL skipped_;
    int docFreq_;
    NSInteger totalTermFreq_;
    int docUpto_;
    int doc_;
    int accum_;
    int freq_;
    int freqWithPostings_;
    NSInteger docTermStartFP_;
    NSInteger skipOffset_;
    int nextSkipDoc_;
    BOOL needsFreq_;
    int singletonDocID_;
    int remainingPostingsInDoc_;
}




-(id)initWithOrgApacheLuceneCodecsLucene50AAPL50PostingsReader:(id)arg0 withOrgApacheLuceneIndexFieldInfo:(id)arg1 ;
-(BOOL)canReuseWithOrgApacheLuceneStoreIndexInput:(id)arg0 withOrgApacheLuceneIndexFieldInfo:(id)arg1 ;
-(id)resetWithOrgApacheLuceneCodecsLucene50AAPL50PostingsFormatReadOnly_IntBlockTermState:(id)arg0 withInt:(int)arg1 ;
-(int)freq;
-(int)nextPosition;
-(int)startOffset;
-(int)endOffset;
-(id)getPayload;
-(int)docID;
-(void)refillDocs;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif