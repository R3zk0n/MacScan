// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDWRITER_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDWRITER_H

@class Writer;


#import "OrgApacheLuceneUtilPackedPackedInts_FormatEnum.h"
#import "OrgApacheLuceneUtilPackedBulkOperation.h"
#import "IOSByteArray.h"
#import "IOSLongArray.h"

@interface OrgApacheLuceneUtilPackedPackedWriter : Writer {
    BOOL finished_;
    OrgApacheLuceneUtilPackedPackedInts_FormatEnum *format_;
    OrgApacheLuceneUtilPackedBulkOperation *encoder_;
    IOSByteArray *nextBlocks_;
    IOSLongArray *nextValues_;
    int iterations_;
    int off_;
    int written_;
}




-(id)initWithOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg0 withOrgApacheLuceneStoreDataOutput:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(id)getFormat;
-(void)addWithLong:(NSInteger)arg0 ;
-(void)finish;
-(void)flush;
-(int)ord;
-(void)dealloc;


@end


#endif