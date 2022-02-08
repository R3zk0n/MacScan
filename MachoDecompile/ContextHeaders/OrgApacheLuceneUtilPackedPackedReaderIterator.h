// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDREADERITERATOR_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDREADERITERATOR_H

@class ReaderIteratorImpl;


#import "OrgApacheLuceneUtilPackedPackedInts_FormatEnum.h"
#import "OrgApacheLuceneUtilPackedBulkOperation.h"
#import "IOSByteArray.h"
#import "OrgApacheLuceneUtilLongsRef.h"

@interface OrgApacheLuceneUtilPackedPackedReaderIterator : ReaderIteratorImpl {
    int packedIntsVersion_;
    OrgApacheLuceneUtilPackedPackedInts_FormatEnum *format_;
    OrgApacheLuceneUtilPackedBulkOperation *bulkOperation_;
    IOSByteArray *nextBlocks_;
    OrgApacheLuceneUtilLongsRef *nextValues_;
    int iterations_;
    int position_;
}




-(id)initWithOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withOrgApacheLuceneStoreDataInput:(id)arg4 withInt:(int)arg5 ;
-(int)iterationsWithInt:(int)arg0 ;
-(id)nextWithInt:(int)arg0 ;
-(int)ord;
-(void)dealloc;


@end


#endif