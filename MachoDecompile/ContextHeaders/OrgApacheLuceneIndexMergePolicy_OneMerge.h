// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMERGEPOLICY_ONEMERGE_H
#define ORGAPACHELUCENEINDEXMERGEPOLICY_ONEMERGE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexSegmentCommitInfo.h"
#import "OrgApacheLuceneIndexMergeRateLimiter.h"
#import "JavaLangThrowable.h"
#import "JavaUtilList-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneIndexMergePolicy_OneMerge : NSObject {
    OrgApacheLuceneIndexSegmentCommitInfo *info_;
    BOOL registerDone_;
    NSInteger mergeGen_;
    BOOL isExternal_;
    int maxNumSegments_;
    uint8_t estimatedMergeBytes_;
    uint8_t totalMergeBytes_;
    id<JavaUtilList> *readers_;
    id<JavaUtilList> *segments_;
    OrgApacheLuceneIndexMergeRateLimiter *rateLimiter_;
    uint8_t mergeStartNS_;
    int totalMaxDoc_;
    JavaLangThrowable *error_;
}




-(id)initWithJavaUtilList:(id)arg0 ;
-(void)mergeFinished;
-(id)getMergeReaders;
-(void)setMergeInfoWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 ;
-(id)getMergeInfo;
-(id)getDocMapWithOrgApacheLuceneIndexMergeState:(id)arg0 ;
-(void)setExceptionWithJavaLangThrowable:(id)arg0 ;
-(id)getException;
-(id)segString;
-(NSInteger)totalBytesSize;
-(int)totalNumDocs;
-(id)getStoreMergeInfo;
-(void)dealloc;


@end


#endif