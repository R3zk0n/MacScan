// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHUSAGETRACKINGQUERYCACHINGPOLICY_H
#define ORGAPACHELUCENESEARCHUSAGETRACKINGQUERYCACHINGPOLICY_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQueryCachingPolicy_CacheOnLargeSegments.h"
#import "OrgApacheLuceneUtilFrequencyTrackingRingBuffer.h"
#import "OrgApacheLuceneSearchQueryCachingPolicy-Protocol.h"

@interface OrgApacheLuceneSearchUsageTrackingQueryCachingPolicy : NSObject <OrgApacheLuceneSearchQueryCachingPolicy>

 {
    OrgApacheLuceneSearchQueryCachingPolicy_CacheOnLargeSegments *segmentPolicy_;
    OrgApacheLuceneUtilFrequencyTrackingRingBuffer *recentlyUsedFilters_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithInt:(int)arg0 withFloat:(float)arg1 withInt:(int)arg2 ;
-(id)init;
-(id)initWithOrgApacheLuceneSearchQueryCachingPolicy_CacheOnLargeSegments:(id)arg0 withInt:(int)arg1 ;
-(int)minFrequencyToCacheWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(void)onUseWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(int)frequencyWithOrgApacheLuceneSearchQuery:(id)arg0 ;
-(BOOL)shouldCacheWithOrgApacheLuceneSearchQuery:(id)arg0 withOrgApacheLuceneIndexLeafReaderContext:(id)arg1 ;
-(void)dealloc;
+(BOOL)isCostlyWithOrgApacheLuceneSearchQuery:(id)arg0 ;
+(BOOL)isCheapWithOrgApacheLuceneSearchQuery:(id)arg0 ;


@end


#endif