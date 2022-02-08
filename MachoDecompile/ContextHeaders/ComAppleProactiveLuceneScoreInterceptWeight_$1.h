// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef COMAPPLEPROACTIVELUCENESCOREINTERCEPTWEIGHT_$1_H
#define COMAPPLEPROACTIVELUCENESCOREINTERCEPTWEIGHT_$1_H



#import "OrgApacheLuceneSearchFilterScorer.h"
#import "ComAppleProactiveLuceneScoreInterceptWeight.h"
#import "OrgApacheLuceneIndexLeafReaderContext.h"
#import "OrgApacheLuceneSearchScorer.h"
#import "AutoreleaseLiteSupport-Protocol.h"

@interface ComAppleProactiveLuceneScoreInterceptWeight_$1 : OrgApacheLuceneSearchFilterScorer <AutoreleaseLiteSupport>

 {
    ComAppleProactiveLuceneScoreInterceptWeight *this$0_;
    OrgApacheLuceneIndexLeafReaderContext *val$context_;
    OrgApacheLuceneSearchScorer *val$scorer_;
    uint8_t _autoreleaseLiteLastPoolId;
}




-(id)autorelease;
-(float)score;
-(id)initWithComAppleProactiveLuceneScoreInterceptWeight:(id)arg0 withOrgApacheLuceneIndexLeafReaderContext:(id)arg1 withOrgApacheLuceneSearchScorer:(id)arg2 withOrgApacheLuceneSearchScorer:(id)arg3 withOrgApacheLuceneSearchWeight:(id)arg4 ;
-(void)dealloc;


@end


#endif