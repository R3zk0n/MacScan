// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_$1_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_$1_H



#import "OrgApacheLuceneIndexNumericDocValues.h"
#import "IOSIntArray.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneIndexMultiDocValues_$1 : OrgApacheLuceneIndexNumericDocValues {
    IOSIntArray *val$starts_;
    IOSObjectArray *val$values_;
}




-(NSInteger)getWithInt:(int)arg0 ;
-(id)initWithIntArray:(id)arg0 withOrgApacheLuceneIndexNumericDocValuesArray:(id)arg1 ;
-(void)dealloc;


@end


#endif