// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTITERMS_H
#define ORGAPACHELUCENEINDEXMULTITERMS_H



#import "OrgApacheLuceneIndexTerms.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneIndexMultiTerms : OrgApacheLuceneIndexTerms {
    IOSObjectArray *subs_;
    IOSObjectArray *subSlices_;
    BOOL hasFreqs_;
    BOOL hasOffsets_;
    BOOL hasPositions_;
    BOOL hasPayloads_;
}




-(id)initWithOrgApacheLuceneIndexTermsArray:(id)arg0 withOrgApacheLuceneIndexReaderSliceArray:(id)arg1 ;
-(id)getSubTerms;
-(id)getSubSlices;
-(id)intersectWithOrgApacheLuceneUtilAutomatonCompiledAutomaton:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(id)getMin;
-(id)getMax;
-(id)iterator;
-(NSInteger)size;
-(NSInteger)getSumTotalTermFreq;
-(NSInteger)getSumDocFreq;
-(int)getDocCount;
-(BOOL)hasFreqs;
-(BOOL)hasOffsets;
-(BOOL)hasPositions;
-(BOOL)hasPayloads;
-(void)dealloc;


@end


#endif