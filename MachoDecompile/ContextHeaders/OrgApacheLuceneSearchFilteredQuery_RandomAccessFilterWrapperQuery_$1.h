// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFILTEREDQUERY_RANDOMACCESSFILTERWRAPPERQUERY_$1_H
#define ORGAPACHELUCENESEARCHFILTEREDQUERY_RANDOMACCESSFILTERWRAPPERQUERY_$1_H



#import "OrgApacheLuceneSearchWeight.h"
#import "OrgApacheLuceneSearchFilteredQuery_RandomAccessFilterWrapperQuery.h"

@interface OrgApacheLuceneSearchFilteredQuery_RandomAccessFilterWrapperQuery_$1 : OrgApacheLuceneSearchWeight {
    OrgApacheLuceneSearchFilteredQuery_RandomAccessFilterWrapperQuery *this$0_;
}




-(void)extractTermsWithJavaUtilSet:(id)arg0 ;
-(float)getValueForNormalization;
-(void)normalizeWithFloat:(float)arg0 withFloat:(float)arg1 ;
-(id)explainWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 withInt:(int)arg1 ;
-(id)scorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(id)initWithOrgApacheLuceneSearchFilteredQuery_RandomAccessFilterWrapperQuery:(id)arg0 withOrgApacheLuceneSearchQuery:(id)arg1 ;
-(void)dealloc;


@end


#endif