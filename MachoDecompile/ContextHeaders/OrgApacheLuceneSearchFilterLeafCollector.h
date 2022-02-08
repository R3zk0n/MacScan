// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHFILTERLEAFCOLLECTOR_H
#define ORGAPACHELUCENESEARCHFILTERLEAFCOLLECTOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"
#import "OrgApacheLuceneSearchLeafCollector-Protocol.h"

@interface OrgApacheLuceneSearchFilterLeafCollector : NSObject <OrgApacheLuceneSearchLeafCollector>

 {
    id<OrgApacheLuceneSearchLeafCollector> *in_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneSearchLeafCollector:(id)arg0 ;
-(void)setScorerWithOrgApacheLuceneSearchScorer:(id)arg0 ;
-(void)collectWithInt:(int)arg0 ;
-(void)dealloc;


@end


#endif