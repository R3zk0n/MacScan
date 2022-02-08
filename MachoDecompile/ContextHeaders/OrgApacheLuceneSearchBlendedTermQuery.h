// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBLENDEDTERMQUERY_H
#define ORGAPACHELUCENESEARCHBLENDEDTERMQUERY_H



#import "OrgApacheLuceneSearchQuery.h"
#import "IOSObjectArray.h"
#import "IOSFloatArray.h"
#import "OrgApacheLuceneSearchBlendedTermQuery_RewriteMethod.h"

@interface OrgApacheLuceneSearchBlendedTermQuery : OrgApacheLuceneSearchQuery {
    IOSObjectArray *terms_;
    IOSFloatArray *boosts_;
    IOSObjectArray *contexts_;
    OrgApacheLuceneSearchBlendedTermQuery_RewriteMethod *rewriteMethod_;
}




-(id)initWithOrgApacheLuceneIndexTermArray:(id)arg0 withFloatArray:(id)arg1 withOrgApacheLuceneIndexTermContextArray:(id)arg2 withOrgApacheLuceneSearchBlendedTermQuery_RewriteMethod:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)toStringWithNSString:(id)arg0 ;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(void)dealloc;
+(void)initialize;


@end


#endif