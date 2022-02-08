// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANSCORER_$1_$1_H
#define ORGAPACHELUCENESEARCHBOOLEANSCORER_$1_$1_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchFakeScorer.h"
#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"
#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"

@interface OrgApacheLuceneSearchBooleanScorer_$1_$1 : NSObject <OrgApacheLuceneSearchLeafCollector>

 {
    OrgApacheLuceneSearchFakeScorer *fake_;
    id<OrgApacheLuceneSearchLeafCollector> *val$collector_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(void)collectWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneSearchLeafCollector:(id)arg0 ;
-(void)dealloc;


@end


#endif