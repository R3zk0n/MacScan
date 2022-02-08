// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSIMPLEFIELDCOMPARATOR_H
#define ORGAPACHELUCENESEARCHSIMPLEFIELDCOMPARATOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchFieldComparator.h"
#import "OrgApacheLuceneSearchLeafFieldComparator-Protocol.h"

@interface OrgApacheLuceneSearchSimpleFieldComparator : OrgApacheLuceneSearchFieldComparator <OrgApacheLuceneSearchLeafFieldComparator>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)getLeafComparatorWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(id)init;


@end


#endif