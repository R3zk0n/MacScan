// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANSCORER_H
#define ORGAPACHELUCENESEARCHBOOLEANSCORER_H



#import "OrgApacheLuceneSearchBulkScorer.h"
#import "IOSObjectArray.h"
#import "IOSLongArray.h"
#import "IOSFloatArray.h"
#import "OrgApacheLuceneSearchBooleanScorer_HeadPriorityQueue.h"
#import "OrgApacheLuceneSearchBooleanScorer_TailPriorityQueue.h"
#import "OrgApacheLuceneSearchFakeScorer.h"
#import "OrgApacheLuceneSearchBooleanScorer_OrCollector.h"

@interface OrgApacheLuceneSearchBooleanScorer : OrgApacheLuceneSearchBulkScorer {
    IOSObjectArray *buckets_;
    IOSLongArray *matching_;
    IOSFloatArray *coordFactors_;
    IOSObjectArray *leads_;
    OrgApacheLuceneSearchBooleanScorer_HeadPriorityQueue *head_;
    OrgApacheLuceneSearchBooleanScorer_TailPriorityQueue *tail_;
    OrgApacheLuceneSearchFakeScorer *fakeScorer_;
    int minShouldMatch_;
    NSInteger cost_;
    OrgApacheLuceneSearchBooleanScorer_OrCollector *orCollector_;
}




-(id)initWithOrgApacheLuceneSearchBooleanWeight:(id)arg0 withBoolean:(BOOL)arg1 withInt:(int)arg2 withJavaUtilCollection:(id)arg3 withInt:(int)arg4 withBoolean:(BOOL)arg5 ;
-(NSInteger)cost;
-(void)scoreDocumentWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)scoreMatchesWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withInt:(int)arg1 ;
-(void)scoreWindowWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withOrgApacheLuceneSearchBooleanScorer_BulkScorerAndDocArray:(id)arg5 withInt:(int)arg6 ;
-(id)advanceWithInt:(int)arg0 ;
-(void)scoreWindowWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(int)scoreWithOrgApacheLuceneSearchLeafCollector:(id)arg0 withOrgApacheLuceneUtilBits:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)dealloc;


@end


#endif