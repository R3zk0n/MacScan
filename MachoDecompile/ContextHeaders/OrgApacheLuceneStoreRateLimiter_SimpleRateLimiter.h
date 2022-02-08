// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESTORERATELIMITER_SIMPLERATELIMITER_H
#define ORGAPACHELUCENESTORERATELIMITER_SIMPLERATELIMITER_H



#import "OrgApacheLuceneStoreRateLimiter.h"

@interface OrgApacheLuceneStoreRateLimiter_SimpleRateLimiter : OrgApacheLuceneStoreRateLimiter {
    uint8_t mbPerSec_;
    uint8_t minPauseCheckBytes_;
    NSInteger lastNS_;
}




-(id)initWithDouble:(CGFloat)arg0 ;
-(void)setMBPerSecWithDouble:(CGFloat)arg0 ;
-(NSInteger)getMinPauseCheckBytes;
-(CGFloat)getMBPerSec;
-(NSInteger)pauseWithLong:(NSInteger)arg0 ;


@end


#endif