// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXSEGMENTDOCVALUESPRODUCER_H
#define ORGAPACHELUCENEINDEXSEGMENTDOCVALUESPRODUCER_H



#import "OrgApacheLuceneCodecsDocValuesProducer.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilSet-Protocol.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneIndexSegmentDocValuesProducer : OrgApacheLuceneCodecsDocValuesProducer {
    id<JavaUtilMap> *dvProducersByField_;
    id<JavaUtilSet> *dvProducers_;
    id<JavaUtilList> *dvGens_;
}




-(id)initWithOrgApacheLuceneIndexSegmentCommitInfo:(id)arg0 withOrgApacheLuceneStoreDirectory:(id)arg1 withOrgApacheLuceneIndexFieldInfos:(id)arg2 withOrgApacheLuceneIndexFieldInfos:(id)arg3 withOrgApacheLuceneIndexSegmentDocValues:(id)arg4 ;
-(id)getNumericWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getBinaryWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedNumericWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedSetWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getDocsWithFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(void)checkIntegrity;
-(void)close;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(id)description;
-(void)dealloc;
+(void)initialize;


@end


#endif