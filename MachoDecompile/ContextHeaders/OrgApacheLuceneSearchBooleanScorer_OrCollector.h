// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBOOLEANSCORER_ORCOLLECTOR_H
#define ORGAPACHELUCENESEARCHBOOLEANSCORER_ORCOLLECTOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchScorer.h"
#import "OrgApacheLuceneSearchBooleanScorer.h"
#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"

@interface OrgApacheLuceneSearchBooleanScorer_OrCollector : NSObject <OrgApacheLuceneSearchLeafCollector>

 {
    OrgApacheLuceneSearchScorer *scorer_;
    OrgApacheLuceneSearchBooleanScorer *this$0_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(void)collectWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneSearchBooleanScorer:(id)arg0 ;
-(void)__javaClone;


@end


#endif