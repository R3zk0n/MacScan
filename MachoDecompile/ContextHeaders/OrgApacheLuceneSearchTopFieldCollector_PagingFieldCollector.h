// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_PAGINGFIELDCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_PAGINGFIELDCOLLECTOR_H



#import "OrgApacheLuceneSearchTopFieldCollector.h"
#import "OrgApacheLuceneSearchFieldValueHitQueue.h"
#import "OrgApacheLuceneSearchFieldDoc.h"

@interface OrgApacheLuceneSearchTopFieldCollector_PagingFieldCollector : OrgApacheLuceneSearchTopFieldCollector {
    int collectedHits_;
    OrgApacheLuceneSearchFieldValueHitQueue *queue_;
    BOOL trackDocScores_;
    BOOL trackMaxScore_;
    OrgApacheLuceneSearchFieldDoc *after_;
}




-(id)initWithOrgApacheLuceneSearchSort:(id)arg0 withOrgApacheLuceneSearchFieldValueHitQueue:(id)arg1 withOrgApacheLuceneSearchFieldDoc:(id)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5 withBoolean:(BOOL)arg6 ;
-(id)getLeafCollectorWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)dealloc;


@end


#endif