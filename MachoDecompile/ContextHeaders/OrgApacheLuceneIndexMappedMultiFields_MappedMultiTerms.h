// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMAPPEDMULTIFIELDS_MAPPEDMULTITERMS_H
#define ORGAPACHELUCENEINDEXMAPPEDMULTIFIELDS_MAPPEDMULTITERMS_H

@class FilterTerms;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexMergeState.h"

@interface OrgApacheLuceneIndexMappedMultiFields_MappedMultiTerms : FilterTerms {
    OrgApacheLuceneIndexMergeState *mergeState_;
    NSString *field_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withOrgApacheLuceneIndexMultiTerms:(id)arg2 ;
-(id)iterator;
-(NSInteger)size;
-(NSInteger)getSumTotalTermFreq;
-(NSInteger)getSumDocFreq;
-(int)getDocCount;
-(void)dealloc;


@end


#endif