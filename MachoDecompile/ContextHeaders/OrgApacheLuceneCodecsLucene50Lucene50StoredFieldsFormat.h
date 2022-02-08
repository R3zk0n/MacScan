// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50STOREDFIELDSFORMAT_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50STOREDFIELDSFORMAT_H



#import "OrgApacheLuceneCodecsStoredFieldsFormat.h"
#import "OrgApacheLuceneCodecsLucene50Lucene50StoredFieldsFormat_ModeEnum.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50StoredFieldsFormat : OrgApacheLuceneCodecsStoredFieldsFormat {
    OrgApacheLuceneCodecsLucene50Lucene50StoredFieldsFormat_ModeEnum *mode_;
}




-(id)init;
-(id)initWithOrgApacheLuceneCodecsLucene50Lucene50StoredFieldsFormat_ModeEnum:(id)arg0 ;
-(id)fieldsReaderWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withOrgApacheLuceneIndexFieldInfos:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 ;
-(id)fieldsWriterWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withOrgApacheLuceneStoreIOContext:(id)arg2 ;
-(id)implWithOrgApacheLuceneCodecsLucene50Lucene50StoredFieldsFormat_ModeEnum:(id)arg0 ;
-(void)dealloc;


@end


#endif