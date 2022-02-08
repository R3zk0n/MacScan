// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOTALHITCOUNTCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOTALHITCOUNTCOLLECTOR_H



#import "OrgApacheLuceneSearchSimpleCollector.h"

@interface OrgApacheLuceneSearchTotalHitCountCollector : OrgApacheLuceneSearchSimpleCollector {
    int totalHits_;
}




-(int)getTotalHits;
-(void)collectWithInt:(int)arg0 ;
-(BOOL)needsScores;
-(id)init;


@end


#endif