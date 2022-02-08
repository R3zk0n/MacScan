// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTWRITESTATE_H
#define ORGAPACHELUCENEINDEXSEGMENTWRITESTATE_H

@class OrgApacheLuceneUtilInfoStream, OrgApacheLuceneIndexBufferedUpdates;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDirectory.h"
#import "OrgApacheLuceneIndexSegmentInfo.h"
#import "OrgApacheLuceneIndexFieldInfos.h"
#import "OrgApacheLuceneStoreIOContext.h"
#import "OrgApacheLuceneUtilMutableBits-Protocol.h"

@interface OrgApacheLuceneIndexSegmentWriteState : NSObject {
    OrgApacheLuceneUtilInfoStream *infoStream_;
    OrgApacheLuceneStoreDirectory *directory_;
    OrgApacheLuceneIndexSegmentInfo *segmentInfo_;
    OrgApacheLuceneIndexFieldInfos *fieldInfos_;
    int delCountOnFlush_;
    OrgApacheLuceneIndexBufferedUpdates *segUpdates_;
    id<OrgApacheLuceneUtilMutableBits> *liveDocs_;
    NSString *segmentSuffix_;
    OrgApacheLuceneStoreIOContext *context_;
}




-(id)initWithOrgApacheLuceneUtilInfoStream:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 withOrgApacheLuceneIndexSegmentInfo:(id)arg2 withOrgApacheLuceneIndexFieldInfos:(id)arg3 withOrgApacheLuceneIndexBufferedUpdates:(id)arg4 withOrgApacheLuceneStoreIOContext:(id)arg5 ;
-(id)initWithOrgApacheLuceneUtilInfoStream:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 withOrgApacheLuceneIndexSegmentInfo:(id)arg2 withOrgApacheLuceneIndexFieldInfos:(id)arg3 withOrgApacheLuceneIndexBufferedUpdates:(id)arg4 withOrgApacheLuceneStoreIOContext:(id)arg5 withNSString:(id)arg6 ;
-(id)initWithOrgApacheLuceneIndexSegmentWriteState:(id)arg0 withNSString:(id)arg1 ;
-(BOOL)assertSegmentSuffixWithNSString:(id)arg0 ;
-(void)dealloc;


@end


#endif