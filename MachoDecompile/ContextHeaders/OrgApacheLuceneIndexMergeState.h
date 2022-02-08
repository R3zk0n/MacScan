// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXMERGESTATE_H
#define ORGAPACHELUCENEINDEXMERGESTATE_H

@class OrgApacheLuceneUtilInfoStream;

#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexSegmentInfo.h"
#import "OrgApacheLuceneIndexFieldInfos.h"
#import "IOSObjectArray.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneIndexMergeState : NSObject {
    OrgApacheLuceneIndexSegmentInfo *segmentInfo_;
    OrgApacheLuceneIndexFieldInfos *mergeFieldInfos_;
    IOSObjectArray *storedFieldsReaders_;
    IOSObjectArray *termVectorsReaders_;
    IOSObjectArray *normsProducers_;
    IOSObjectArray *docValuesProducers_;
    IOSObjectArray *fieldInfos_;
    IOSObjectArray *liveDocs_;
    IOSObjectArray *docMaps_;
    IOSObjectArray *fieldsProducers_;
    IOSIntArray *docBase_;
    IOSIntArray *maxDocs_;
    OrgApacheLuceneUtilInfoStream *infoStream_;
}




-(id)initWithJavaUtilList:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withOrgApacheLuceneUtilInfoStream:(id)arg2 ;
-(void)setDocMapsWithJavaUtilList:(id)arg0 ;
-(void)dealloc;


@end


#endif