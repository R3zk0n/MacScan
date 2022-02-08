// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFILTERSCORER_H
#define ORGAPACHELUCENESEARCHFILTERSCORER_H



#import "OrgApacheLuceneSearchScorer.h"

@interface OrgApacheLuceneSearchFilterScorer : OrgApacheLuceneSearchScorer {
    OrgApacheLuceneSearchScorer *in_;
}




-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(id)initWithOrgApacheLuceneSearchScorer:(id)arg0 withOrgApacheLuceneSearchWeight:(id)arg1 ;
-(float)score;
-(int)freq;
-(int)docID;
-(int)nextDoc;
-(int)advanceWithInt:(int)arg0 ;
-(NSInteger)cost;
-(id)asTwoPhaseIterator;
-(void)dealloc;


@end


#endif