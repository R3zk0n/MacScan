// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef SCOREINTERCEPTTARGETWITHCALLBACK_H
#define SCOREINTERCEPTTARGETWITHCALLBACK_H



#import "ComAppleProactiveLuceneScoreInterceptTargetBase.h"

@interface ScoreInterceptTargetWithCallback : ComAppleProactiveLuceneScoreInterceptTargetBase {
    id *_callback;
}




-(id)initWithCallback:(id)arg0 ;
-(float)scoreMatchWithOrgApacheLuceneSearchWeight:(id)arg0 withOrgApacheLuceneIndexLeafReaderContext:(id)arg1 withOrgApacheLuceneSearchScorer:(id)arg2 ;


@end


#endif