// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMERGESTATE_DOCMAP_$1_H
#define ORGAPACHELUCENEINDEXMERGESTATE_DOCMAP_$1_H

@class DocMap;


#import "OrgApacheLuceneUtilPackedPackedLongValues.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneIndexMergeState_DocMap_$1 : DocMap {
    id<OrgApacheLuceneUtilBits> *val$liveDocs_;
    OrgApacheLuceneUtilPackedPackedLongValues *val$docMap_;
    int val$maxDoc_;
    int val$numDeletedDocs_;
}




-(int)getWithInt:(int)arg0 ;
-(int)maxDoc;
-(int)numDeletedDocs;
-(id)initWithOrgApacheLuceneUtilBits:(id)arg0 withOrgApacheLuceneUtilPackedPackedLongValues:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
-(void)dealloc;


@end


#endif