// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFILTEREDQUERY_H
#define ORGAPACHELUCENESEARCHFILTEREDQUERY_H



#import "OrgApacheLuceneSearchQuery.h"
#import "OrgApacheLuceneSearchFilter.h"
#import "OrgApacheLuceneSearchFilteredQuery_FilterStrategy.h"

@interface OrgApacheLuceneSearchFilteredQuery : OrgApacheLuceneSearchQuery {
    OrgApacheLuceneSearchQuery *query_;
    OrgApacheLuceneSearchFilter *filter_;
    OrgApacheLuceneSearchFilteredQuery_FilterStrategy *strategy_;
}




-(id)initWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchFilter:(id)arg1 ;
-(id)initWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneSearchFilter:(id)arg1 withOrgApacheLuceneSearchFilteredQuery_FilterStrategy:(id)arg2 ;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)getQuery;
-(id)getFilter;
-(id)getFilterStrategy;
-(id)toStringWithNSString:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)dealloc;
+(void)initialize;


@end


#endif