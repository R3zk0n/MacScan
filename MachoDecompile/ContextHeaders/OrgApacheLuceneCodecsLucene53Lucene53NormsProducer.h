// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE53LUCENE53NORMSPRODUCER_H
#define ORGAPACHELUCENECODECSLUCENE53LUCENE53NORMSPRODUCER_H



#import "OrgApacheLuceneCodecsNormsProducer.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneCodecsLucene53Lucene53NormsProducer : OrgApacheLuceneCodecsNormsProducer {
    id<JavaUtilMap> *norms_;
    OrgApacheLuceneStoreIndexInput *data_;
    int maxDoc_;
}




-(id)initWithOrgApacheLuceneIndexSegmentReadState:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(void)readFieldsWithOrgApacheLuceneStoreIndexInput:(id)arg0 withOrgApacheLuceneIndexFieldInfos:(id)arg1 ;
-(id)getNormsWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(void)close;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(id)description;
-(void)dealloc;


@end


#endif