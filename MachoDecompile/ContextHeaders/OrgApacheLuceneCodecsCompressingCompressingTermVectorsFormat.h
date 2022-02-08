// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSFORMAT_H
#define ORGAPACHELUCENECODECSCOMPRESSINGCOMPRESSINGTERMVECTORSFORMAT_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsTermVectorsFormat.h"
#import "OrgApacheLuceneCodecsCompressingCompressionMode.h"

@interface OrgApacheLuceneCodecsCompressingCompressingTermVectorsFormat : OrgApacheLuceneCodecsTermVectorsFormat {
    NSString *formatName_;
    NSString *segmentSuffix_;
    OrgApacheLuceneCodecsCompressingCompressionMode *compressionMode_;
    int chunkSize_;
    int blockSize_;
}




-(id)initWithNSString:(id)arg0 withNSString:(id)arg1 withOrgApacheLuceneCodecsCompressingCompressionMode:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(id)vectorsReaderWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withOrgApacheLuceneIndexFieldInfos:(id)arg2 withOrgApacheLuceneStoreIOContext:(id)arg3 ;
-(id)vectorsWriterWithOrgApacheLuceneStoreDirectory:(id)arg0 withOrgApacheLuceneIndexSegmentInfo:(id)arg1 withOrgApacheLuceneStoreIOContext:(id)arg2 ;
-(id)description;
-(void)dealloc;


@end


#endif