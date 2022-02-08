// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_H



#import "OrgApacheLuceneSearchTopDocsCollector.h"
#import "OrgApacheLuceneSearchFieldValueHitQueue_Entry.h"

@interface OrgApacheLuceneSearchTopFieldCollector : OrgApacheLuceneSearchTopDocsCollector {
    float maxScore_;
    int numHits_;
    OrgApacheLuceneSearchFieldValueHitQueue_Entry *bottom_;
    BOOL queueFull_;
    int docBase_;
    BOOL needsScores_;
    BOOL fillFields_;
}




-(id)initWithOrgApacheLuceneUtilPriorityQueue:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 ;
-(BOOL)needsScores;
-(void)addWithInt:(int)arg0 withInt:(int)arg1 withFloat:(float)arg2 ;
-(void)updateBottomWithInt:(int)arg0 ;
-(void)updateBottomWithInt:(int)arg0 withFloat:(float)arg1 ;
-(void)populateResultsWithOrgApacheLuceneSearchScoreDocArray:(id)arg0 withInt:(int)arg1 ;
-(id)newTopDocsWithOrgApacheLuceneSearchScoreDocArray:(id)arg0 withInt:(int)arg1 ;
-(id)topDocs;
-(void)dealloc;
+(id)createWithOrgApacheLuceneSearchSort:(id)arg0 withInt:(int)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 ;
+(id)createWithOrgApacheLuceneSearchSort:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneSearchFieldDoc:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4 withBoolean:(BOOL)arg5 ;
+(void)initialize;


@end


#endif