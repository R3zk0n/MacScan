// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPSCOREDOCCOLLECTOR_PAGINGTOPSCOREDOCCOLLECTOR_$1_H
#define ORGAPACHELUCENESEARCHTOPSCOREDOCCOLLECTOR_PAGINGTOPSCOREDOCCOLLECTOR_$1_H

@class ScorerLeafCollector;


#import "OrgApacheLuceneSearchTopScoreDocCollector_PagingTopScoreDocCollector.h"

@interface OrgApacheLuceneSearchTopScoreDocCollector_PagingTopScoreDocCollector_$1 : ScorerLeafCollector {
    OrgApacheLuceneSearchTopScoreDocCollector_PagingTopScoreDocCollector *this$0_;
    int val$afterDoc_;
    int val$docBase_;
}




-(void)collectWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneSearchTopScoreDocCollector_PagingTopScoreDocCollector:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)dealloc;


@end


#endif