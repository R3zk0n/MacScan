// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPSCOREDOCCOLLECTOR_SCORERLEAFCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPSCOREDOCCOLLECTOR_SCORERLEAFCOLLECTOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"

@interface OrgApacheLuceneSearchTopScoreDocCollector_ScorerLeafCollector : NSObject <OrgApacheLuceneSearchLeafCollector>

 {
    OrgApacheLuceneSearchScorer *scorer_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif