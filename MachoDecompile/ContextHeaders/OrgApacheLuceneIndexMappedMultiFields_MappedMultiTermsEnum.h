// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMAPPEDMULTIFIELDS_MAPPEDMULTITERMSENUM_H
#define ORGAPACHELUCENEINDEXMAPPEDMULTIFIELDS_MAPPEDMULTITERMSENUM_H

@class FilterTermsEnum;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexMergeState.h"

@interface OrgApacheLuceneIndexMappedMultiFields_MappedMultiTermsEnum : FilterTermsEnum {
    OrgApacheLuceneIndexMergeState *mergeState_;
    NSString *field_;
}




-(id)initWithNSString:(id)arg0 withOrgApacheLuceneIndexMergeState:(id)arg1 withOrgApacheLuceneIndexMultiTermsEnum:(id)arg2 ;
-(int)docFreq;
-(NSInteger)totalTermFreq;
-(id)postingsWithOrgApacheLuceneIndexPostingsEnum:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif