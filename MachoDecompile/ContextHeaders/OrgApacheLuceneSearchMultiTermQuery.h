// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHMULTITERMQUERY_H
#define ORGAPACHELUCENESEARCHMULTITERMQUERY_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneSearchQuery.h"
#import "OrgApacheLuceneSearchMultiTermQuery_RewriteMethod.h"

@interface OrgApacheLuceneSearchMultiTermQuery : OrgApacheLuceneSearchQuery {
    NSString *field_;
    OrgApacheLuceneSearchMultiTermQuery_RewriteMethod *rewriteMethod_;
}




-(id)initWithNSString:(id)arg0 ;
-(id)getField;
-(id)getTermsEnumWithOrgApacheLuceneIndexTerms:(id)arg0 ;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 ;
-(id)getRewriteMethod;
-(void)setRewriteMethodWithOrgApacheLuceneSearchMultiTermQuery_RewriteMethod:(id)arg0 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
-(void)dealloc;
+(void)initialize;


@end


#endif