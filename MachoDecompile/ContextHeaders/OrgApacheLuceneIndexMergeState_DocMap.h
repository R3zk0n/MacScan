// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMERGESTATE_DOCMAP_H
#define ORGAPACHELUCENEINDEXMERGESTATE_DOCMAP_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneIndexMergeState_DocMap : NSObject



-(id)init;
-(int)numDocs;
-(BOOL)hasDeletions;
+(id)buildWithOrgApacheLuceneIndexCodecReader:(id)arg0 ;
+(id)buildWithInt:(int)arg0 withOrgApacheLuceneUtilBits:(id)arg1 ;


@end


#endif