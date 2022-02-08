// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_$3_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_$3_H



#import "OrgApacheLuceneIndexBinaryDocValues.h"
#import "IOSIntArray.h"
#import "IOSObjectArray.h"

@interface OrgApacheLuceneIndexMultiDocValues_$3 : OrgApacheLuceneIndexBinaryDocValues {
    IOSIntArray *val$starts_;
    IOSObjectArray *val$values_;
}




-(id)getWithInt:(int)arg0 ;
-(id)initWithIntArray:(id)arg0 withOrgApacheLuceneIndexBinaryDocValuesArray:(id)arg1 ;
-(void)dealloc;


@end


#endif