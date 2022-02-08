// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSCOREDOC_H
#define ORGAPACHELUCENESEARCHSCOREDOC_H


#import <Foundation/Foundation.h>

#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneSearchScoreDoc : NSObject <AutoreleaseLiteSupport>

 {
    float score_;
    int doc_;
    int shardIndex_;
    uint8_t _autoreleaseLiteLastPoolId;
}




-(id)autorelease;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 ;
-(id)initWithInt:(int)arg0 withFloat:(float)arg1 withInt:(int)arg2 ;
-(id)description;


@end


#endif