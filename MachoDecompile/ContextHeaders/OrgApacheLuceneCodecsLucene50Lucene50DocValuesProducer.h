// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsDocValuesProducer.h"
#import "JavaUtilConcurrentAtomicAtomicLong.h"
#import "OrgApacheLuceneStoreIndexInput.h"
#import "JavaIoCloseable-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer : OrgApacheLuceneCodecsDocValuesProducer <JavaIoCloseable>

 {
    id<JavaUtilMap> *numerics_;
    id<JavaUtilMap> *binaries_;
    id<JavaUtilMap> *sortedSets_;
    id<JavaUtilMap> *sortedNumerics_;
    id<JavaUtilMap> *ords_;
    id<JavaUtilMap> *ordIndexes_;
    int numFields_;
    JavaUtilConcurrentAtomicAtomicLong *ramBytesUsed_;
    OrgApacheLuceneStoreIndexInput *data_;
    int maxDoc_;
    id<JavaUtilMap> *addressInstances_;
    id<JavaUtilMap> *ordIndexInstances_;
    id<JavaUtilMap> *reverseIndexInstances_;
    BOOL merging_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(id)initWithOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer:(id)arg0 ;
-(id)initWithOrgApacheLuceneIndexSegmentReadState:(id)arg0 withNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 ;
-(void)readSortedFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneStoreIndexInput:(id)arg1 ;
-(void)readSortedSetFieldWithAddressesWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneStoreIndexInput:(id)arg1 ;
-(void)readSortedSetFieldWithTableWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneStoreIndexInput:(id)arg1 ;
-(int)readFieldsWithOrgApacheLuceneStoreIndexInput:(id)arg0 withOrgApacheLuceneIndexFieldInfos:(id)arg1 ;
-(id)readNumericEntryWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
-(id)readSortedSetEntryWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
-(id)getNumericWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(id)getNumericWithOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_NumericEntry:(id)arg0 ;
-(id)getBinaryWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getFixedBinaryWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_BinaryEntry:(id)arg1 ;
-(id)getAddressInstanceWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_BinaryEntry:(id)arg1 ;
-(id)getVariableBinaryWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_BinaryEntry:(id)arg1 ;
-(id)getIntervalInstanceWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_BinaryEntry:(id)arg1 ;
-(id)getReverseIndexInstanceWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_BinaryEntry:(id)arg1 ;
-(id)getCompressedBinaryWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_BinaryEntry:(id)arg1 ;
-(id)getSortedWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getOrdIndexInstanceWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_NumericEntry:(id)arg1 ;
-(id)getSortedNumericWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedSetWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedSetWithAddressesWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedSetTableWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withOrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_SortedSetEntry:(id)arg1 ;
-(id)getLiveBitsWithLong:(NSInteger)arg0 withInt:(int)arg1 ;
-(id)getDocsWithFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getMergeInstance;
-(void)close;
-(void)dealloc;
+(id)readBinaryEntryWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;


@end


#endif