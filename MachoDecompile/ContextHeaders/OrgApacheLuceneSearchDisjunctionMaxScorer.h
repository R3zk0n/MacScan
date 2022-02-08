// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISJUNCTIONMAXSCORER_H
#define ORGAPACHELUCENESEARCHDISJUNCTIONMAXSCORER_H



#import "OrgApacheLuceneSearchDisjunctionScorer.h"

@interface OrgApacheLuceneSearchDisjunctionMaxScorer : OrgApacheLuceneSearchDisjunctionScorer {
    float tieBreakerMultiplier_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withFloat:(float)arg1 withJavaUtilList:(id)arg2 withBoolean:(BOOL)arg3 ;
-(float)scoreWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 ;


@end


#endif