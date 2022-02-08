// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSPERFIELDPERFIELDPOSTINGSFORMAT_FIELDSGROUP_H
#define ORGAPACHELUCENECODECSPERFIELDPERFIELDPOSTINGSFORMAT_FIELDSGROUP_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneIndexSegmentWriteState.h"
#import "JavaUtilSet-Protocol.h"

@interface OrgApacheLuceneCodecsPerfieldPerFieldPostingsFormat_FieldsGroup : NSObject {
    id<JavaUtilSet> *fields_;
    int suffix_;
    OrgApacheLuceneIndexSegmentWriteState *state_;
}




-(id)init;
-(void)dealloc;


@end


#endif