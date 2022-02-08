// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONJUNCTIONDISI_TWOPHASECONJUNCTIONDISI_H
#define ORGAPACHELUCENESEARCHCONJUNCTIONDISI_TWOPHASECONJUNCTIONDISI_H



#import "OrgApacheLuceneSearchTwoPhaseIterator.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchConjunctionDISI_TwoPhaseConjunctionDISI : OrgApacheLuceneSearchTwoPhaseIterator {
    IOSObjectArray *twoPhaseIterators_;
}




-(id)initWithJavaUtilList:(id)arg0 withJavaUtilList:(id)arg1 ;
-(BOOL)matches;
-(void)dealloc;


@end


#endif