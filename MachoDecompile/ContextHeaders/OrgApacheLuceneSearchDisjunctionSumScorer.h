// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHDISJUNCTIONSUMSCORER_H
#define ORGAPACHELUCENESEARCHDISJUNCTIONSUMSCORER_H



#import "OrgApacheLuceneSearchDisjunctionScorer.h"
#import "IOSFloatArray.h"

@interface OrgApacheLuceneSearchDisjunctionSumScorer : OrgApacheLuceneSearchDisjunctionScorer {
    IOSFloatArray *coord_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withJavaUtilList:(id)arg1 withFloatArray:(id)arg2 withBoolean:(BOOL)arg3 ;
-(float)scoreWithOrgApacheLuceneSearchDisiWrapper:(id)arg0 ;
-(void)dealloc;


@end


#endif