// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPSCOREDOCCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPSCOREDOCCOLLECTOR_H



#import "OrgApacheLuceneSearchTopDocsCollector.h"
#import "OrgApacheLuceneSearchScoreDoc.h"

@interface OrgApacheLuceneSearchTopScoreDocCollector : OrgApacheLuceneSearchTopDocsCollector {
    OrgApacheLuceneSearchScoreDoc *pqTop_;
}




-(id)initWithInt:(int)arg0 ;
-(id)newTopDocsWithOrgApacheLuceneSearchScoreDocArray:(id)arg0 withInt:(int)arg1 ;
-(BOOL)needsScores;
-(void)dealloc;
+(id)createWithInt:(int)arg0 ;
+(id)createWithInt:(int)arg0 withOrgApacheLuceneSearchScoreDoc:(id)arg1 ;


@end


#endif