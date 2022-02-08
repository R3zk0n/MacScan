// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSIMPLECOLLECTOR_H
#define ORGAPACHELUCENESEARCHSIMPLECOLLECTOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchCollector-Protocol.h"
#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"

@interface OrgApacheLuceneSearchSimpleCollector : NSObject <OrgApacheLuceneSearchCollector, OrgApacheLuceneSearchLeafCollector>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)getLeafCollectorWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)doSetNextReaderWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(id)init;


@end


#endif