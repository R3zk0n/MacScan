// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTCOREREADERS_H
#define ORGAPACHELUCENEINDEXSEGMENTCOREREADERS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsFieldsProducer.h"
#import "OrgApacheLuceneCodecsNormsProducer.h"
#import "OrgApacheLuceneCodecsStoredFieldsReader.h"
#import "OrgApacheLuceneCodecsTermVectorsReader.h"
#import "OrgApacheLuceneStoreDirectory.h"
#import "OrgApacheLuceneIndexFieldInfos.h"
#import "OrgApacheLuceneUtilCloseableThreadLocal.h"
#import "JavaUtilConcurrentAtomicAtomicInteger.h"
#import "JavaUtilSet-Protocol.h"

@interface OrgApacheLuceneIndexSegmentCoreReaders : NSObject {
    OrgApacheLuceneCodecsFieldsProducer *fields_;
    OrgApacheLuceneCodecsNormsProducer *normsProducer_;
    OrgApacheLuceneCodecsStoredFieldsReader *fieldsReaderOrig_;
    OrgApacheLuceneCodecsTermVectorsReader *termVectorsReaderOrig_;
    OrgApacheLuceneStoreDirectory *cfsReader_;
    OrgApacheLuceneIndexFieldInfos *coreFieldInfos_;
    OrgApacheLuceneUtilCloseableThreadLocal *fieldsReaderLocal_;
    OrgApacheLuceneUtilCloseableThreadLocal *termVectorsLocal_;
    JavaUtilConcurrentAtomicAtomicInteger *ref_;
    id<JavaUtilSet> *coreClosedListeners_;
}




-(id)initWithOrgApacheLuceneIndexSegmentReader:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 withOrgApacheLuceneIndexSegmentCommitInfo:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 ;
-(int)getRefCount;
-(void)incRef;
-(void)decRef;
-(void)notifyCoreClosedListenersWithJavaLangThrowable:(id)arg0 ;
-(void)addCoreClosedListenerWithOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg0 ;
-(void)removeCoreClosedListenerWithOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg0 ;
-(void)dealloc;


@end


#endif