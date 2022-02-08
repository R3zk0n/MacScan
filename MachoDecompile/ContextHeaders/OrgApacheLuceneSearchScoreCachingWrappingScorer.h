// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSCORECACHINGWRAPPINGSCORER_H
#define ORGAPACHELUCENESEARCHSCORECACHINGWRAPPINGSCORER_H



#import "OrgApacheLuceneSearchFilterScorer.h"

@interface OrgApacheLuceneSearchScoreCachingWrappingScorer : OrgApacheLuceneSearchFilterScorer {
    int curDoc_;
    float curScore_;
}




-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(float)score;
-(id)getChildren;


@end


#endif