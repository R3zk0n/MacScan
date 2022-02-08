// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFILTEREDQUERY_RANDOMACCESSFILTERWRAPPERQUERY_H
#define ORGAPACHELUCENESEARCHFILTEREDQUERY_RANDOMACCESSFILTERWRAPPERQUERY_H



#import "OrgApacheLuceneSearchQuery.h"
#import "OrgApacheLuceneSearchFilter.h"
#import "OrgApacheLuceneSearchFilteredQuery_RandomAccessFilterStrategy.h"

@interface OrgApacheLuceneSearchFilteredQuery_RandomAccessFilterWrapperQuery : OrgApacheLuceneSearchQuery {
    OrgApacheLuceneSearchFilter *filter_;
    OrgApacheLuceneSearchFilteredQuery_RandomAccessFilterStrategy *strategy_;
}




-(id)initWithOrgApacheLuceneSearchFilter:(id)arg0 withOrgApacheLuceneSearchFilteredQuery_RandomAccessFilterStrategy:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)toStringWithNSString:(id)arg0 ;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif