// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXTERMS_$1_H
#define ORGAPACHELUCENEINDEXTERMS_$1_H



#import "OrgApacheLuceneIndexAutomatonTermsEnum.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneIndexTerms_$1 : OrgApacheLuceneIndexAutomatonTermsEnum {
    OrgApacheLuceneUtilBytesRef *val$startTerm_;
}




-(id)nextSeekTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)initWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneIndexTermsEnum:(id)arg1 withOrgApacheLuceneUtilAutomatonCompiledAutomaton:(id)arg2 ;
-(void)dealloc;


@end


#endif