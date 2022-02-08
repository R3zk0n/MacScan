// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHEXACTPHRASESCORER_H
#define ORGAPACHELUCENESEARCHEXACTPHRASESCORER_H



#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchConjunctionDISI.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer.h"

@interface OrgApacheLuceneSearchExactPhraseScorer : OrgApacheLuceneSearchScorer {
    OrgApacheLuceneSearchConjunctionDISI *conjunction_;
    IOSObjectArray *postings_;
    int freq_;
    OrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer *docScorer_;
    BOOL needsScores_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withOrgApacheLuceneSearchPhraseQuery_PostingsAndFreqArray:(id)arg1 withOrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer:(id)arg2 withBoolean:(BOOL)arg3 ;
-(id)asTwoPhaseIterator;
-(int)doNextWithInt:(int)arg0 ;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(id)description;
-(int)freq;
-(int)docID;
-(float)score;
-(int)phraseFreq;
-(NSInteger)cost;
-(void)dealloc;


@end


#endif