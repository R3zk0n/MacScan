// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHQUERYCACHINGPOLICY_CACHEONLARGESEGMENTS_H
#define ORGAPACHELUCENESEARCHQUERYCACHINGPOLICY_CACHEONLARGESEGMENTS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQueryCachingPolicy-Protocol.h"

@interface OrgApacheLuceneSearchQueryCachingPolicy_CacheOnLargeSegments : NSObject <OrgApacheLuceneSearchQueryCachingPolicy>

 {
    int minIndexSize_;
    float minSizeRatio_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(void)onUseWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(BOOL)shouldCacheWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneIndexLeafReaderContext:(id)arg1 ;
+(void)initialize;


@end


#endif