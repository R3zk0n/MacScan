// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSPERFIELDPERFIELDPOSTINGSFORMAT_FIELDSWRITER_$1_H
#define ORGAPACHELUCENECODECSPERFIELDPERFIELDPOSTINGSFORMAT_FIELDSWRITER_$1_H

@class FilterFields;


#import "OrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat_FieldsGroup.h"

@interface OrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat_FieldsWriter_$1 : FilterFields {
    OrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat_FieldsGroup *val$group_;
}




-(id)iterator;
-(id)initWithOrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat_FieldsGroup:(id)arg0 withOrgApacheLuceneIndexFields:(id)arg1 ;
-(void)dealloc;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;


@end


#endif