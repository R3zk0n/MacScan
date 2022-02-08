// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPDOCS_SHARDREF_H
#define ORGAPACHELUCENESEARCHTOPDOCS_SHARDREF_H


#import <Foundation/Foundation.h>

#import "AutoreleaseLiteSupport-Protocol.h"

@interface OrgApacheLuceneSearchTopDocs_ShardRef : NSObject <AutoreleaseLiteSupport>

 {
    int shardIndex_;
    int hitIndex_;
    uint8_t _autoreleaseLiteLastPoolId;
}




-(id)autorelease;
-(id)initWithInt:(int)arg0 ;
-(id)description;


@end


#endif