// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHMULTITERMQUERYCONSTANTSCOREWRAPPER_$1_H
#define ORGAPACHELUCENESEARCHMULTITERMQUERYCONSTANTSCOREWRAPPER_$1_H



#import "OrgApacheLuceneSearchConstantScoreWeight.h"
#import "OrgApacheLuceneSearchMultiTermQueryConstantScoreWrapper.h"
#import "OrgApacheLuceneSearchIndexSearcher.h"

@interface OrgApacheLuceneSearchMultiTermQueryConstantScoreWrapper_$1 : OrgApacheLuceneSearchConstantScoreWeight {
    OrgApacheLuceneSearchMultiTermQueryConstantScoreWrapper *this$0_;
    OrgApacheLuceneSearchIndexSearcher *val$searcher_;
    BOOL val$needsScores_;
}




-(BOOL)collectTermsWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withOrgApacheLuceneIndexTermsEnum:(id)arg1 withJavaUtilList:(id)arg2 ;
-(id)rewriteWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)scorerWithOrgApacheLuceneSearchDocIdSet:(id)arg0 ;
-(id)bulkScorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)initWithOrgApacheLuceneSearchMultiTermQueryConstantScoreWrapper:(id)arg0 withOrgApacheLuceneSearchIndexSearcher:(id)arg1 withBoolean:(BOOL)arg2 withOrgApacheLuceneSearchQuery:(id)arg3 ;
-(void)dealloc;


@end


#endif