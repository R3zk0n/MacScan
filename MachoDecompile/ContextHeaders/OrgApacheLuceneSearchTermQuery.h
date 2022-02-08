// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTERMQUERY_H
#define ORGAPACHELUCENESEARCHTERMQUERY_H



#import "OrgApacheLuceneSearchQuery.h"
#import "OrgApacheLuceneIndexTerm.h"
#import "OrgApacheLuceneIndexTermContext.h"

@interface OrgApacheLuceneSearchTermQuery : OrgApacheLuceneSearchQuery {
    OrgApacheLuceneIndexTerm *term_;
    OrgApacheLuceneIndexTermContext *perReaderTermState_;
}




-(id)initWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(id)initWithOrgApacheLuceneIndexTerm:(id)arg0 withOrgApacheLuceneIndexTermContext:(id)arg1 ;
-(id)getTerm;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)toStringWithNSString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;


@end


#endif