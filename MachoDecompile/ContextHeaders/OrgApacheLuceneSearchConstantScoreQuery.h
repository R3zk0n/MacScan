// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONSTANTSCOREQUERY_H
#define ORGAPACHELUCENESEARCHCONSTANTSCOREQUERY_H



#import "OrgApacheLuceneSearchQuery.h"

@interface OrgApacheLuceneSearchConstantScoreQuery : OrgApacheLuceneSearchQuery {
    OrgApacheLuceneSearchQuery *query_;
}




-(id)initWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(id)getQuery;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)toStringWithNSString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif