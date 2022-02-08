// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSINGLETERMSENUM_H
#define ORGAPACHELUCENEINDEXSINGLETERMSENUM_H



#import "OrgApacheLuceneIndexFilteredTermsEnum.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneIndexSingleTermsEnum : OrgApacheLuceneIndexFilteredTermsEnum {
    OrgApacheLuceneUtilBytesRef *singleRef_;
}




-(id)initWithOrgApacheLuceneIndexTermsEnum:(id)arg0 withOrgApacheLuceneUtilBytesRef:(id)arg1 ;
-(id)acceptWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)dealloc;


@end


#endif