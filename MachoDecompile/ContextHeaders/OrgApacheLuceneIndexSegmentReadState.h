// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTREADSTATE_H
#define ORGAPACHELUCENEINDEXSEGMENTREADSTATE_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDirectory.h"
#import "OrgApacheLuceneIndexSegmentInfo.h"
#import "OrgApacheLuceneIndexFieldInfos.h"
#import "OrgApacheLuceneStoreIOContext.h"

@interface OrgApacheLuceneIndexSegmentReadState : NSObject {
    OrgApacheLuceneStoreDirectory *directory_;
    OrgApacheLuceneIndexSegmentInfo *segmentInfo_;
    OrgApacheLuceneIndexFieldInfos *fieldInfos_;
    OrgApacheLuceneStoreIOContext *context_;
    NSString *segmentSuffix_;
}




-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withOrgApacheLuceneIndexFieldInfos:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 ;
-(id)initWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withOrgApacheLuceneIndexFieldInfos:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 withNSString:(id)arg4 ;
-(id)initWithOrgApacheLuceneIndexSegmentReadState:(id)arg0 withNSString:(id)arg1 ;
-(void)dealloc;


@end


#endif