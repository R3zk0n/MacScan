// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFAKESCORER_H
#define ORGAPACHELUCENESEARCHFAKESCORER_H



#import "OrgApacheLuceneSearchScorer.h"

@interface OrgApacheLuceneSearchFakeScorer : OrgApacheLuceneSearchScorer {
    float score_;
    int doc_;
    int freq_;
}




-(id)init;
-(int)advanceWithInt:(int)arg0 ;
-(int)docID;
-(int)freq;
-(int)nextDoc;
-(float)score;
-(NSInteger)cost;
-(id)getWeight;
-(id)getChildren;


@end


#endif