// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTERMCOLLECTINGREWRITE_H
#define ORGAPACHELUCENESEARCHTERMCOLLECTINGREWRITE_H

@class RewriteMethod;



@interface OrgApacheLuceneSearchTermCollectingRewrite : RewriteMethod



-(void)addClauseWithId:(id)arg0 withOrgApacheLuceneIndexTerm:(id)arg1 withInt:(int)arg2 withFloat:(float)arg3 ;
-(void)collectTermsWithOrgApacheLuceneIndexIndexReader:(id)arg0 withOrgApacheLuceneSearchMultiTermQuery:(id)arg1 withOrgApacheLuceneSearchTermCollectingRewrite_TermCollector:(id)arg2 ;
-(id)init;


@end


#endif