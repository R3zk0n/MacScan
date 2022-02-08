// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXTERMSENUM_$1_H
#define ORGAPACHELUCENEINDEXTERMSENUM_$1_H



#import "OrgApacheLuceneIndexTermsEnum.h"

@interface OrgApacheLuceneIndexTermsEnum_$1 : OrgApacheLuceneIndexTermsEnum



-(id)seekCeilWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)seekExactWithLong:(NSInteger)arg0 ;
-(id)term;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(NSInteger)ord;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(id)next;
-(id)attributes;
-(id)termState;
-(void)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneIndexTermState:(id)arg1 ;
-(id)init;


@end


#endif