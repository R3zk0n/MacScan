// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFILTERLEAFREADER_FILTERTERMSENUM_H
#define ORGAPACHELUCENEINDEXFILTERLEAFREADER_FILTERTERMSENUM_H



#import "OrgApacheLuceneIndexTermsEnum.h"

@interface OrgApacheLuceneIndexFilterLeafReader_FilterTermsEnum : OrgApacheLuceneIndexTermsEnum {
    OrgApacheLuceneIndexTermsEnum *in_;
}




-(id)initWithOrgApacheLuceneIndexTermsEnum:(id)arg0 ;
-(id)attributes;
-(id)seekCeilWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)seekExactWithLong:(NSInteger)arg0 ;
-(id)next;
-(id)term;
-(NSInteger)ord;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif