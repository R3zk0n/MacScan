// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPSCOREDOCCOLLECTOR_PAGINGTOPSCOREDOCCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPSCOREDOCCOLLECTOR_PAGINGTOPSCOREDOCCOLLECTOR_H



#import "OrgApacheLuceneSearchTopScoreDocCollector.h"
#import "OrgApacheLuceneSearchScoreDoc.h"

@interface OrgApacheLuceneSearchTopScoreDocCollector_PagingTopScoreDocCollector : OrgApacheLuceneSearchTopScoreDocCollector {
    OrgApacheLuceneSearchScoreDoc *after_;
    int collectedHits_;
}




-(id)initWithInt:(int)arg0 withOrgApacheLuceneSearchScoreDoc:(id)arg1 ;
-(int)topDocsSize;
-(id)newTopDocsWithOrgApacheLuceneSearchScoreDocArray:(id)arg0 withInt:(int)arg1 ;
-(id)getLeafCollectorWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)dealloc;


@end


#endif