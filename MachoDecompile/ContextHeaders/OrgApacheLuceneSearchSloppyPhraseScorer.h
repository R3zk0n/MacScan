// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSLOPPYPHRASESCORER_H
#define ORGAPACHELUCENESEARCHSLOPPYPHRASESCORER_H



#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchConjunctionDISI.h"
#import "IOSObjectArray.h"
#import "OrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer.h"
#import "OrgApacheLuceneSearchPhraseQueue.h"

@interface OrgApacheLuceneSearchSloppyPhraseScorer : OrgApacheLuceneSearchScorer {
    BOOL needsScores_;
    OrgApacheLuceneSearchConjunctionDISI *conjunction_;
    IOSObjectArray *phrasePositions_;
    float sloppyFreq_;
    OrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer *docScorer_;
    int slop_;
    int numPostings_;
    OrgApacheLuceneSearchPhraseQueue *pq_;
    int end_;
    BOOL hasRpts_;
    BOOL checkedRpts_;
    BOOL hasMultiTermRpts_;
    IOSObjectArray *rptGroups_;
    IOSObjectArray *rptStack_;
    int numMatches_;
}




-(id)initWithOrgApacheLuceneSearchWeight:(id)arg0 withOrgApacheLuceneSearchPhraseQuery_PostingsAndFreqArray:(id)arg1 withInt:(int)arg2 withOrgApacheLuceneSearchSimilaritiesSimilarity_SimScorer:(id)arg3 withBoolean:(BOOL)arg4 ;
-(float)phraseFreq;
-(BOOL)advancePPWithOrgApacheLuceneSearchPhrasePositions:(id)arg0 ;
-(BOOL)advanceRptsWithOrgApacheLuceneSearchPhrasePositions:(id)arg0 ;
-(id)lesserWithOrgApacheLuceneSearchPhrasePositions:(id)arg0 withOrgApacheLuceneSearchPhrasePositions:(id)arg1 ;
-(int)collideWithOrgApacheLuceneSearchPhrasePositions:(id)arg0 ;
-(BOOL)initPhrasePositions;
-(void)initSimple;
-(BOOL)initComplex;
-(void)placeFirstPositions;
-(void)fillQueue;
-(BOOL)advanceRepeatGroups;
-(BOOL)initFirstTime;
-(void)sortRptGroupsWithJavaUtilArrayList:(id)arg0 ;
-(id)gatherRptGroupsWithJavaUtilLinkedHashMap:(id)arg0 ;
-(int)tpPosWithOrgApacheLuceneSearchPhrasePositions:(id)arg0 ;
-(id)repeatingTerms;
-(id)repeatingPPsWithJavaUtilHashMap:(id)arg0 ;
-(id)ppTermsBitSetsWithOrgApacheLuceneSearchPhrasePositionsArray:(id)arg0 withJavaUtilHashMap:(id)arg1 ;
-(void)unionTermGroupsWithJavaUtilArrayList:(id)arg0 ;
-(id)termGroupsWithJavaUtilLinkedHashMap:(id)arg0 withJavaUtilArrayList:(id)arg1 ;
-(int)freq;
-(float)sloppyFreq;
-(int)docID;
-(int)nextDoc;
-(float)score;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(id)description;
-(id)asTwoPhaseIterator;
-(void)dealloc;


@end


#endif