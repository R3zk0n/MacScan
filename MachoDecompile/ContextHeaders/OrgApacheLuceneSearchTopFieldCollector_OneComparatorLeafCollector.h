// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_ONECOMPARATORLEAFCOLLECTOR_H
#define ORGAPACHELUCENESEARCHTOPFIELDCOLLECTOR_ONECOMPARATORLEAFCOLLECTOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"
#import "OrgApacheLuceneSearchLeafFieldComparator-Protocol.h"

@interface OrgApacheLuceneSearchTopFieldCollector_OneComparatorLeafCollector : NSObject <OrgApacheLuceneSearchLeafCollector>

 {
    id<OrgApacheLuceneSearchLeafFieldComparator> *comparator_;
    int reverseMul_;
    OrgApacheLuceneSearchScorer *scorer_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneSearchLeafFieldComparator:(id)arg0 withInt:(int)arg1 ;
-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(void)dealloc;


@end


#endif