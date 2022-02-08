// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHBLENDEDTERMQUERY_BUILDER_H
#define ORGAPACHELUCENESEARCHBLENDEDTERMQUERY_BUILDER_H


#import <Foundation/Foundation.h>

#import "IOSObjectArray.h"
#import "IOSFloatArray.h"
#import "OrgApacheLuceneSearchBlendedTermQuery_RewriteMethod.h"

@interface OrgApacheLuceneSearchBlendedTermQuery_Builder : NSObject {
    int numTerms_;
    IOSObjectArray *terms_;
    IOSFloatArray *boosts_;
    IOSObjectArray *contexts_;
    OrgApacheLuceneSearchBlendedTermQuery_RewriteMethod *rewriteMethod_;
}




-(id)init;
-(id)setRewriteMethodWithOrgApacheLuceneSearchBlendedTermQuery_RewriteMethod:(id)arg0 ;
-(id)addWithOrgApacheLuceneIndexTerm:(id)arg0 ;
-(id)addWithOrgApacheLuceneIndexTerm:(id)arg0 withFloat:(float)arg1 ;
-(id)addWithOrgApacheLuceneIndexTerm:(id)arg0 withFloat:(float)arg1 withOrgApacheLuceneIndexTermContext:(id)arg2 ;
-(id)build;
-(void)dealloc;


@end


#endif