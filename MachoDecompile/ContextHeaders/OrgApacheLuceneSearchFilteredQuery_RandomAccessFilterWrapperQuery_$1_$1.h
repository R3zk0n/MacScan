// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFILTEREDQUERY_RANDOMACCESSFILTERWRAPPERQUERY_$1_$1_H
#define ORGAPACHELUCENESEARCHFILTEREDQUERY_RANDOMACCESSFILTERWRAPPERQUERY_$1_$1_H



#import "OrgApacheLuceneSearchTwoPhaseIterator.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneSearchFilteredQuery_RandomAccessFilterWrapperQuery_$1_$1 : OrgApacheLuceneSearchTwoPhaseIterator {
    id<OrgApacheLuceneUtilBits> *val$bits_;
}




-(BOOL)matches;
-(id)initWithOrgApacheLuceneUtilBits:(id)arg0 withOrgApacheLuceneSearchDocIdSetIterator:(id)arg1 ;
-(void)dealloc;


@end


#endif