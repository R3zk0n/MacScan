// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMERGERATELIMITER_H
#define ORGAPACHELUCENEINDEXMERGERATELIMITER_H



#import "OrgApacheLuceneStoreRateLimiter.h"
#import "OrgApacheLuceneIndexMergePolicy_OneMerge.h"

@interface OrgApacheLuceneIndexMergeRateLimiter : OrgApacheLuceneStoreRateLimiter {
    uint8_t totalBytesWritten_;
    CGFloat mbPerSec_;
    NSInteger totalPausedNS_;
    NSInteger totalStoppedNS_;
    OrgApacheLuceneIndexMergePolicy_OneMerge *merge_;
    NSInteger lastNS_;
    NSInteger minPauseCheckBytes_;
    BOOL abort_;
}




-(id)initWithOrgApacheLuceneIndexMergePolicy_OneMerge:(id)arg0 ;
-(void)setMBPerSecWithDouble:(CGFloat)arg0 ;
-(CGFloat)getMBPerSec;
-(NSInteger)getTotalBytesWritten;
-(NSInteger)pauseWithLong:(NSInteger)arg0 ;
-(NSInteger)getTotalStoppedNS;
-(NSInteger)getTotalPausedNS;
-(id)maybePauseWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)checkAbort;
-(void)setAbort;
-(BOOL)getAbort;
-(NSInteger)getMinPauseCheckBytes;
-(void)dealloc;


@end


#endif