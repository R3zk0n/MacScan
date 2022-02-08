// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE53LUCENE53NORMSCONSUMER_H
#define ORGAPACHELUCENECODECSLUCENE53LUCENE53NORMSCONSUMER_H



#import "OrgApacheLuceneCodecsNormsConsumer.h"
#import "OrgApacheLuceneStoreIndexOutput.h"

@interface OrgApacheLuceneCodecsLucene53Lucene53NormsConsumer : OrgApacheLuceneCodecsNormsConsumer {
    OrgApacheLuceneStoreIndexOutput *data_;
    OrgApacheLuceneStoreIndexOutput *meta_;
    int maxDoc_;
}




-(id)initWithOrgApacheLuceneIndexSegmentWriteState:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(void)addNormsFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)addConstantWithLong:(NSInteger)arg0 ;
-(void)addByte1WithJavaLangIterable:(id)arg0 ;
-(void)addByte2WithJavaLangIterable:(id)arg0 ;
-(void)addByte4WithJavaLangIterable:(id)arg0 ;
-(void)addByte8WithJavaLangIterable:(id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif