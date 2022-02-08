// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBLENDEDTERMQUERY_DISJUNCTIONMAXREWRITE_H
#define ORGAPACHELUCENESEARCHBLENDEDTERMQUERY_DISJUNCTIONMAXREWRITE_H

@class RewriteMethod;



@interface OrgApacheLuceneSearchBlendedTermQuery_DisjunctionMaxRewrite : RewriteMethod {
    float tieBreakerMultiplier_;
}




-(id)initWithFloat:(float)arg0 ;
-(id)rewriteWithOrgApacheLuceneSearchQueryArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif