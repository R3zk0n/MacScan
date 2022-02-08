// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHMULTITERMQUERY_TOPTERMSBLENDEDFREQSCORINGREWRITE_H
#define ORGAPACHELUCENESEARCHMULTITERMQUERY_TOPTERMSBLENDEDFREQSCORINGREWRITE_H



#import "OrgApacheLuceneSearchTopTermsRewrite.h"

@interface OrgApacheLuceneSearchMultiTermQuery_TopTermsBlendedFreqScoringRewrite : OrgApacheLuceneSearchTopTermsRewrite



-(id)initWithInt:(int)arg0 ;
-(int)getMaxSize;
-(id)getTopLevelBuilder;
-(id)buildWithId:(id)arg0 ;
-(void)addClauseWithId:(id)arg0 withOrgApacheLuceneIndexTerm:(id)arg1 withInt:(int)arg2 withFloat:(float)arg3 withOrgApacheLuceneIndexTermContext:(id)arg4 ;


@end


#endif