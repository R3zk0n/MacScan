// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESCONSUMER_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESCONSUMER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsDocValuesConsumer.h"
#import "OrgApacheLuceneStoreIndexOutput.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesConsumer : OrgApacheLuceneCodecsDocValuesConsumer <JavaIoCloseable>

 {
    OrgApacheLuceneStoreIndexOutput *data_;
    OrgApacheLuceneStoreIndexOutput *meta_;
    int maxDoc_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneIndexSegmentWriteState:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(void)addNumericFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)addNumericFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 withBoolean:(BOOL)arg2 ;
-(void)writeMissingBitsetWithJavaLangIterable:(id)arg0 ;
-(void)addBinaryFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)addTermsDictWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)flushTermsDictBlockWithOrgApacheLuceneStoreRAMOutputStream:(id)arg0 withOrgApacheLuceneStoreRAMOutputStream:(id)arg1 withIntArray:(id)arg2 ;
-(void)addReverseTermIndexWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 withInt:(int)arg2 ;
-(void)addSortedFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 withJavaLangIterable:(id)arg2 ;
-(void)addSortedNumericFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 withJavaLangIterable:(id)arg2 ;
-(void)addSortedSetFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 withJavaLangIterable:(id)arg2 withJavaLangIterable:(id)arg3 ;
-(id)uniqueValueSetsWithJavaLangIterable:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)writeDictionaryWithJavaUtilSortedSet:(id)arg0 ;
-(id)docToSetIdWithJavaUtilSortedSet:(id)arg0 withJavaLangIterable:(id)arg1 withJavaLangIterable:(id)arg2 ;
-(void)addAddressesWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)close;
-(void)dealloc;


@end


#endif