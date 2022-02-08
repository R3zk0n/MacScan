// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONSTANTSCOREQUERY_$1_H
#define ORGAPACHELUCENESEARCHCONSTANTSCOREQUERY_$1_H



#import "OrgApacheLuceneSearchConstantScoreWeight.h"
#import "OrgApacheLuceneSearchConstantScoreQuery.h"
#import "OrgApacheLuceneSearchWeight.h"

@interface OrgApacheLuceneSearchConstantScoreQuery_$1 : OrgApacheLuceneSearchConstantScoreWeight {
    OrgApacheLuceneSearchConstantScoreQuery *this$0_;
    OrgApacheLuceneSearchWeight *val$innerWeight_;
}




-(id)bulkScorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)initWithOrgApacheLuceneSearchConstantScoreQuery:(id)arg0 withOrgApacheLuceneSearchWeight:(id)arg1 withOrgApacheLuceneSearchQuery:(id)arg2 ;
-(void)dealloc;


@end


#endif