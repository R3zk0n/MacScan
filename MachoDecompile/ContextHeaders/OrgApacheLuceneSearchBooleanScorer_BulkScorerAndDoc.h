// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANSCORER_BULKSCORERANDDOC_H
#define ORGAPACHELUCENESEARCHBOOLEANSCORER_BULKSCORERANDDOC_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchBulkScorer.h"
#import "OrgApacheLuceneSearchBooleanScorer.h"

@interface OrgApacheLuceneSearchBooleanScorer_BulkScorerAndDoc : NSObject {
    OrgApacheLuceneSearchBulkScorer *scorer_;
    NSInteger cost_;
    int next_;
    OrgApacheLuceneSearchBooleanScorer *this$0_;
}




-(id)initWithOrgApacheLuceneSearchBooleanScorer:(id)arg0 withOrgApacheLuceneSearchBulkScorer:(id)arg1 ;
-(void)advanceWithInt:(int)arg0 ;
-(void)scoreWithOrgApacheLuceneUtilBits:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
-(void)__javaClone;


@end


#endif