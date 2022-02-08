// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_MULTICOMPARATORLEAFCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_MULTICOMPARATORLEAFCOLLECTOR_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSIntArray.h"
#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"
#import "OrgApacheLuceneSearchLeafFieldComparator-Protocol.h"

@interface OrgApacheLuceneSearchTopFieldCollector_MultiComparatorLeafCollector : NSObject <OrgApacheLuceneSearchLeafCollector>

 {
    IOSObjectArray *comparators_;
    IOSIntArray *reverseMul_;
    id<OrgApacheLuceneSearchLeafFieldComparator> *firstComparator_;
    int firstReverseMul_;
    OrgApacheLuceneSearchScorer *scorer_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneSearchLeafFieldComparatorArray:(id)arg0 withIntArray:(id)arg1 ;
-(int)compareBottomWithInt:(int)arg0 ;
-(void)copy__WithInt:(int)arg0 withInt:(int)arg1 ;
-(void)setBottomWithInt:(int)arg0 ;
-(int)compareTopWithInt:(int)arg0 ;
-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(void)dealloc;


@end


#endif