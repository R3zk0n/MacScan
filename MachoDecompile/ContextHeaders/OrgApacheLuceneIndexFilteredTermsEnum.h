// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFILTEREDTERMSENUM_H
#define ORGAPACHELUCENEINDEXFILTEREDTERMSENUM_H



#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneUtilBytesRef.h"

@interface OrgApacheLuceneIndexFilteredTermsEnum : OrgApacheLuceneIndexTermsEnum {
    OrgApacheLuceneUtilBytesRef *actualTerm_;
    OrgApacheLuceneIndexTermsEnum *tenum_;
    OrgApacheLuceneUtilBytesRef *initialSeekTerm_;
    BOOL doSeek_;
}




-(id)initWithOrgApacheLuceneIndexTermsEnum:(id)arg0 ;
-(id)initWithOrgApacheLuceneIndexTermsEnum:(id)arg0 withBoolean:(BOOL)arg1 ;
-(void)setInitialSeekTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)nextSeekTermWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)attributes;
-(id)term;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(BOOL)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(id)seekCeilWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)seekExactWithLong:(NSInteger)arg0 ;
-(NSInteger)ord;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneIndexTermState:(id)arg1 ;
-(id)termState;
-(id)next;
-(void)dealloc;


@end


#endif