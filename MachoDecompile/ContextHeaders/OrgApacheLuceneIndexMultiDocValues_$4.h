// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_$4_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_$4_H



#import "OrgApacheLuceneIndexSortedNumericDocValues.h"
#import "IOSIntArray.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneIndexMultiDocValues_$4 : OrgApacheLuceneIndexSortedNumericDocValues {
    OrgApacheLuceneIndexSortedNumericDocValues *current_;
    IOSIntArray *val$starts_;
    IOSObjectArray *val$values_;
}




-(void)setDocumentWithInt:(int)arg0 ;
-(NSInteger)valueAtWithInt:(int)arg0 ;
-(int)count;
-(id)initWithIntArray:(id)arg0 withOrgApacheLuceneIndexSortedNumericDocValuesArray:(id)arg1 ;
-(void)dealloc;


@end


#endif