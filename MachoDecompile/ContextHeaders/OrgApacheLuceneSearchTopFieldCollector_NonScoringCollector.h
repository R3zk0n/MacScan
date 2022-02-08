// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_NONSCORINGCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_NONSCORINGCOLLECTOR_H



#import "OrgApacheLuceneSearchTopFieldCollector.h"
#import "OrgApacheLuceneSearchFieldValueHitQueue.h"

@interface OrgApacheLuceneSearchTopFieldCollector_NonScoringCollector : OrgApacheLuceneSearchTopFieldCollector {
    OrgApacheLuceneSearchFieldValueHitQueue *queue_;
}




-(id)initWithOrgApacheLuceneSearchSort:(id)arg0 withOrgApacheLuceneSearchFieldValueHitQueue:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3 ;
-(id)getLeafCollectorWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)dealloc;


@end


#endif