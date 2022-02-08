// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMULTIPOSTINGSENUM_ENUMWITHSLICE_H
#define ORGAPACHELUCENEINDEXMULTIPOSTINGSENUM_ENUMWITHSLICE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexPostingsEnum.h"
#import "OrgApacheLuceneIndexReaderSlice.h"

@interface OrgApacheLuceneIndexMultiPostingsEnum_EnumWithSlice : NSObject {
    OrgApacheLuceneIndexPostingsEnum *postingsEnum_;
    OrgApacheLuceneIndexReaderSlice *slice_;
}




-(id)init;
-(id)description;
-(void)dealloc;


@end


#endif