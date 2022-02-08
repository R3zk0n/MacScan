// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDBULKOPERATIONPACKED_H
#define ORGAPACHELUCENEUTILPACKEDBULKOPERATIONPACKED_H



#import "OrgApacheLuceneUtilPackedBulkOperation.h"

@interface OrgApacheLuceneUtilPackedBulkOperationPacked : OrgApacheLuceneUtilPackedBulkOperation {
    int bitsPerValue_;
    int longBlockCount_;
    int longValueCount_;
    int byteBlockCount_;
    int byteValueCount_;
    NSInteger mask_;
    int intMask_;
}




-(id)initWithInt:(int)arg0 ;
-(int)longBlockCount;
-(int)longValueCount;
-(int)byteBlockCount;
-(int)byteValueCount;
-(void)decodeWithLongArray:(id)arg0 withInt:(int)arg1 withLongArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(void)decodeWithByteArray:(id)arg0 withInt:(int)arg1 withLongArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(void)decodeWithLongArray:(id)arg0 withInt:(int)arg1 withIntArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(void)decodeWithByteArray:(id)arg0 withInt:(int)arg1 withIntArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(void)encodeWithLongArray:(id)arg0 withInt:(int)arg1 withLongArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(void)encodeWithIntArray:(id)arg0 withInt:(int)arg1 withLongArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(void)encodeWithLongArray:(id)arg0 withInt:(int)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
-(void)encodeWithIntArray:(id)arg0 withInt:(int)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 ;


@end


#endif