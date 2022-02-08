// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIDOCVALUES_ORDINALMAP_$2_H
#define ORGAPACHELUCENEINDEXMULTIDOCVALUES_ORDINALMAP_$2_H



#import "OrgApacheLuceneUtilLongValues.h"
#import "OrgApacheLuceneUtilPackedPackedLongValues.h"

@interface OrgApacheLuceneIndexMultiDocValues_OrdinalMap_$2 : OrgApacheLuceneUtilLongValues {
    OrgApacheLuceneUtilPackedPackedLongValues *val$deltas_;
}




-(NSInteger)getWithLong:(NSInteger)arg0 ;
-(id)initWithOrgApacheLuceneUtilPackedPackedLongValues:(id)arg0 ;
-(void)dealloc;


@end


#endif