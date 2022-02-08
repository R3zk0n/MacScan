// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXCOMPOSITEREADER_H
#define ORGAPACHELUCENEINDEXCOMPOSITEREADER_H



#import "OrgApacheLuceneIndexIndexReader.h"

@interface OrgApacheLuceneIndexCompositeReader : OrgApacheLuceneIndexIndexReader {
    uint8_t readerContext_;
}




-(id)init;
-(id)description;
-(id)getContext;


@end


#endif