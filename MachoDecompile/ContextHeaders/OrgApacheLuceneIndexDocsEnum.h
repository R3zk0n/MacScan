// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXDOCSENUM_H
#define ORGAPACHELUCENEINDEXDOCSENUM_H



#import "OrgApacheLuceneIndexPostingsEnum.h"

@interface OrgApacheLuceneIndexDocsEnum : OrgApacheLuceneIndexPostingsEnum



-(id)init;
-(int)nextPosition;
-(int)startOffset;
-(int)endOffset;
-(id)getPayload;


@end


#endif