// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHCONJUNCTIONSCORER_H
#define ORGAPACHELUCENESEARCHCONJUNCTIONSCORER_H



#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchConjunctionDISI.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneSearchConjunctionScorer : OrgApacheLuceneSearchScorer {
    OrgApacheLuceneSearchConjunctionDISI *disi_;
    IOSObjectArray *scorers_;
    float coord_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 ;
-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withJavaUtilList:(id)arg1 withJavaUtilList:(id)arg2 withFloat:(float)arg3 ;
-(id)asTwoPhaseIterator;
-(int)advanceWithInt:(int)arg0 ;
-(int)docID;
-(int)nextDoc;
-(float)score;
-(int)freq;
-(NSInteger)cost;
-(id)getChildren;
-(void)dealloc;


@end


#endif