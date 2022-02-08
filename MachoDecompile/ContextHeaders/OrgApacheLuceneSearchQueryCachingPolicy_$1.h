// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHQUERYCACHINGPOLICY_$1_H
#define ORGAPACHELUCENESEARCHQUERYCACHINGPOLICY_$1_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQueryCachingPolicy-Protocol.h"

@interface OrgApacheLuceneSearchQueryCachingPolicy_$1 : NSObject <OrgApacheLuceneSearchQueryCachingPolicy>



@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)onUseWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(BOOL)shouldCacheWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneIndexLeafReaderContext:(id)arg1 ;
-(id)init;


@end


#endif