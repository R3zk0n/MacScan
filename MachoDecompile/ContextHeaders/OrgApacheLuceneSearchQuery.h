// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHQUERY_H
#define ORGAPACHELUCENESEARCHQUERY_H


#import <Foundation/Foundation.h>

#import "NSCopying-Protocol.h"

@interface OrgApacheLuceneSearchQuery : NSObject <NSCopying>

 {
    float boost_;
}




-(void)setBoostWithFloat:(float)arg0 ;
-(float)getBoost;
-(id)description;
-(id)createWeightWithOrgApacheLuceneSearchIndexSearcher:(id)arg0 withBoolean:(BOOL)arg1 ;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)clone;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif