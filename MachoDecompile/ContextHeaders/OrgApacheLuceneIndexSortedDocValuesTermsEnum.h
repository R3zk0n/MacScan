// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSORTEDDOCVALUESTERMSENUM_H
#define ORGAPACHELUCENEINDEXSORTEDDOCVALUESTERMSENUM_H



#import "OrgApacheLuceneIndexTermsEnum.h"
#import "OrgApacheLuceneIndexSortedDocValues.h"
#import "OrgApacheLuceneUtilBytesRefBuilder.h"

@interface OrgApacheLuceneIndexSortedDocValuesTermsEnum : OrgApacheLuceneIndexTermsEnum {
    OrgApacheLuceneIndexSortedDocValues *values_;
    int currentOrd_;
    OrgApacheLuceneUtilBytesRefBuilder *scratch_;
}




-(id)initWithOrgApacheLuceneIndexSortedDocValues:(id)arg0 ;
-(id)seekCeilWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(BOOL)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)seekExactWithLong:(NSInteger)arg0 ;
-(id)next;
-(id)term;
-(NSInteger)ord;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)seekExactWithOrgApacheLuceneUtilBytesRef:(id)arg0 withOrgApacheLuceneIndexTermState:(id)arg1 ;
-(id)termState;
-(void)dealloc;


@end


#endif