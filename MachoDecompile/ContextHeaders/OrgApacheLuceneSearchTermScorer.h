// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTERMSCORER_H
#define ORGAPACHELUCENESEARCHTERMSCORER_H



#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer.h"
#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneSearchTermScorer : OrgApacheLuceneSearchScorer <AutoreleaseLiteSupport>

 {
    uint8_t _autoreleaseLiteLastPoolId;
    OrgApacheLuceneIndexPostingsEnum *postingsEnum_;
    OrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer *docScorer_;
}




-(id)autorelease;
-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withOrgApacheLuceneIndexPostingsEnum:(id)arg1 withOrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer:(id)arg2 ;
-(int)docID;
-(int)freq;
-(int)nextDoc;
-(float)score;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(id)description;
-(void)dealloc;


@end


#endif