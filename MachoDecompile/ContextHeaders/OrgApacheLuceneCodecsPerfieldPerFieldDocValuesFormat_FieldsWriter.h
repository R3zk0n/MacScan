// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSPERFIELDPERFIELDDOCVALUESFORMAT_FIELDSWRITER_H
#define ORGAPACHELUCENECODECSPERFIELDPERFIELDDOCVALUESFORMAT_FIELDSWRITER_H



#import "OrgApacheLuceneCodecsDocValuesConsumer.h"
#import "OrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat.h"
#import "OrgApacheLuceneIndexSegmentWriteState.h"
#import "JavaUtilMap-Protocol.h"
#import "JavaUtilMap-Protocol.h"

@interface OrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat_FieldsWriter : OrgApacheLuceneCodecsDocValuesConsumer {
    OrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat *this$0_;
    id<JavaUtilMap> *formats_;
    id<JavaUtilMap> *suffixes_;
    OrgApacheLuceneIndexSegmentWriteState *segmentWriteState_;
}




-(id)initWithOrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat:(id)arg0 withOrgApacheLuceneIndexSegmentWriteState:(id)arg1 ;
-(void)addNumericFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)addBinaryFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 ;
-(void)addSortedFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 withJavaLangIterable:(id)arg2 ;
-(void)addSortedNumericFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 withJavaLangIterable:(id)arg2 ;
-(void)addSortedSetFieldWithOrgApacheLuceneIndexFieldInfo:(id)arg0 withJavaLangIterable:(id)arg1 withJavaLangIterable:(id)arg2 withJavaLangIterable:(id)arg3 ;
-(id)getInstanceWithOrgApacheLuceneIndexFieldInfo:(id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif