// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSPERFIELDPERFIELDPOSTINGSFORMAT_FIELDSWRITER_H
#define ORGAPACHELUCENECODECSPERFIELDPERFIELDPOSTINGSFORMAT_FIELDSWRITER_H



#import "OrgApacheLuceneCodecsFieldsConsumer.h"
#import "OrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat.h"
#import "OrgApacheLuceneIndexSegmentWriteState.h"
#import "JavaUtilList-Protocol.h"

@interface OrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat_FieldsWriter : OrgApacheLuceneCodecsFieldsConsumer {
    OrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat *this$0_;
    OrgApacheLuceneIndexSegmentWriteState *writeState_;
    id<JavaUtilList> *toClose_;
}




-(id)initWithOrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat:(id)arg0 withOrgApacheLuceneIndexSegmentWriteState:(id)arg1 ;
-(void)writeWithOrgApacheLuceneIndexFields:(id)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif