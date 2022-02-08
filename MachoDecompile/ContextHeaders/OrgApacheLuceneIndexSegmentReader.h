// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTREADER_H
#define ORGAPACHELUCENEINDEXSEGMENTREADER_H



#import "OrgApacheLuceneIndexCodecReader.h"
#import "OrgApacheLuceneIndexSegmentCoreReaders.h"
#import "OrgApacheLuceneIndexSegmentDocValues.h"
#import "OrgApacheLuceneCodecsDocValuesProducer.h"
#import "OrgApacheLuceneIndexFieldInfos.h"
#import "OrgApacheLuceneIndexSegmentCommitInfo.h"
#import "AutoreleaseLiteSupport-Protocol.h"
#import "OrgApacheLuceneUtilBits-Protocol.h"

@interface OrgApacheLuceneIndexSegmentReader : OrgApacheLuceneIndexCodecReader <AutoreleaseLiteSupport>

 {
    OrgApacheLuceneIndexSegmentCoreReaders *core_;
    OrgApacheLuceneIndexSegmentDocValues *segDocValues_;
    OrgApacheLuceneCodecsDocValuesProducer *docValuesProducer_;
    OrgApacheLuceneIndexFieldInfos *fieldInfos_;
    uint8_t _autoreleaseLiteLastPoolId;
    OrgApacheLuceneIndexSegmentCommitInfo *si_;
    id<OrgApacheLuceneUtilBits> *liveDocs_;
    int numDocs_;
}




-(id)autorelease;
-(id)initWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 withOrgApacheLuceneStoreIOContext:(id)arg1 ;
-(id)initWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 withOrgApacheLuceneIndexSegmentReader:(id)arg1 ;
-(id)initWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 withOrgApacheLuceneIndexSegmentReader:(id)arg1 withOrgApacheLuceneUtilBits:(id)arg2 withInt:(int)arg3 ;
-(id)initDocValuesProducer;
-(id)initFieldInfos;
-(id)getLiveDocs;
-(void)doClose;
-(id)getFieldInfos;
-(int)numDocs;
-(int)maxDoc;
-(id)getTermVectorsReader;
-(id)getFieldsReader;
-(id)getNormsReader;
-(id)getDocValuesReader;
-(id)getPostingsReader;
-(id)description;
-(id)getSegmentName;
-(id)getSegmentInfo;
-(id)directory;
-(id)getCoreCacheKey;
-(id)getCombinedCoreAndDeletesKey;
-(void)addCoreClosedListenerWithOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg0 ;
-(void)removeCoreClosedListenerWithOrgApacheLuceneIndexLeafReader_CoreClosedListener:(id)arg0 ;
-(void)dealloc;


@end


#endif