// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHWEIGHT_H
#define ORGAPACHELUCENESEARCHWEIGHT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQuery.h"

@interface OrgApacheLuceneSearchWeight : NSObject {
    OrgApacheLuceneSearchQuery *parentQuery_;
}




-(id)initWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(id)getQuery;
-(id)bulkScorerWithOrgApacheLuceneIndexLeafReaderContext:(id)arg0 ;
-(void)dealloc;


@end


#endif