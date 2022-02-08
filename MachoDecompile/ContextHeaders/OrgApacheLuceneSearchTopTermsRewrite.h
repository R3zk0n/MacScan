// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHTOPTERMSREWRITE_H
#define ORGAPACHELUCENESEARCHTOPTERMSREWRITE_H



#import "OrgApacheLuceneSearchTermCollectingRewrite.h"

@interface OrgApacheLuceneSearchTopTermsRewrite : OrgApacheLuceneSearchTermCollectingRewrite {
    int size_;
}




-(id)initWithInt:(int)arg0 ;
-(int)getSize;
-(id)rewriteWithOrgApacheLuceneIndexIndexReader:(id)arg0 withOrgApacheLuceneSearchMultiTermQuery:(id)arg1 ;
-(NSUInteger)hash;
-(BOOL)isEqual:(id)arg0 ;
+(void)initialize;


@end


#endif