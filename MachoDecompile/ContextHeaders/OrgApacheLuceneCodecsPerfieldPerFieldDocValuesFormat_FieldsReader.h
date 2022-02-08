// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSPERFIELDPERFIELDDOCVALUESFORMAT_FIELDSREADER_H
#define ORGAPACHELUCENECODECSPERFIELDPERFIELDDOCVALUESFORMAT_FIELDSREADER_H



#import "OrgApacheLuceneCodecsDocValuesProducer.h"
#import "OrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat_FieldsReader : OrgApacheLuceneCodecsDocValuesProducer {
    OrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat *this$0_;
    id<JavaUtilMap> *fields_;
    id<JavaUtilMap> *formats_;
}




-(id)initWithOrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat:(id)arg0 withOrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat_FieldsReader:(id)arg1 ;
-(id)initWithOrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat:(id)arg0 withOrgApacheLuceneIndexSegmentReadState:(id)arg1 ;
-(id)getNumericWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getBinaryWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedNumericWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getSortedSetWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(id)getDocsWithFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(void)close;
-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(void)checkIntegrity;
-(id)getMergeInstance;
-(id)description;
-(void)dealloc;


@end


#endif