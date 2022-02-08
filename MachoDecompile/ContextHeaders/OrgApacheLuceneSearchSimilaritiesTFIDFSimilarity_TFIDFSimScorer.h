// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSIMILARITIESTFIDFSIMILARITY_TFIDFSIMSCORER_H
#define ORGAPACHELUCENESEARCHSIMILARITIESTFIDFSIMILARITY_TFIDFSIMSCORER_H

@class SimScorer;


#import "OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity.h"
#import "OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity_IDFStats.h"
#import "OrgApacheLuceneIndexNumericDocValues.h"

@interface OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity_TFIDFSimScorer : SimScorer {
    OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity *this$0_;
    OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity_IDFStats *stats_;
    float weightValue_;
    OrgApacheLuceneIndexNumericDocValues *norms_;
}




-(id)initWithOrgApacheLuceneSearchSimilaritiesTFIDFSimilarity:(id)arg0 withOrgApacheLuceneSearchSimilaritiesTFIDFSimilarity_IDFStats:(id)arg1 withOrgApacheLuceneIndexNumericDocValues:(id)arg2 ;
-(float)scoreWithInt:(int)arg0 withFloat:(float)arg1 ;
-(float)computeSlopFactorWithInt:(int)arg0 ;
-(float)computePayloadFactorWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneUtilBytesRef:(id)arg3 ;
-(id)explainWithInt:(int)arg0 withOrgApacheLuceneSearchExplanation:(id)arg1 ;
-(void)dealloc;


@end


#endif