// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMAPPEDMULTIFIELDS_H
#define ORGAPACHELUCENEINDEXMAPPEDMULTIFIELDS_H

@class FilterFields;


#import "OrgApacheLuceneIndexMergeState.h"

@interface OrgApacheLuceneIndexMappedMultiFields : FilterFields {
    OrgApacheLuceneIndexMergeState *mergeState_;
}




-(id)initWithOrgApacheLuceneIndexMergeState:(id)arg0 withOrgApacheLuceneIndexMultiFields:(id)arg1 ;
-(id)termsWithNSString:(id)arg0 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif