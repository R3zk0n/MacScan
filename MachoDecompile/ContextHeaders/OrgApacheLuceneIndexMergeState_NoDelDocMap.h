// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMERGESTATE_NODELDOCMAP_H
#define ORGAPACHELUCENEINDEXMERGESTATE_NODELDOCMAP_H

@class DocMap;



@interface OrgApacheLuceneIndexMergeState_NoDelDocMap : DocMap {
    int maxDoc_;
}




-(id)initWithInt:(int)arg0 ;
-(int)getWithInt:(int)arg0 ;
-(int)maxDoc;
-(int)numDeletedDocs;


@end


#endif