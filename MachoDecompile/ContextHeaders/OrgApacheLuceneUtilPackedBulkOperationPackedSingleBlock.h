// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDBULKOPERATIONPACKEDSINGLEBLOCK_H
#define ORGAPACHELUCENEUTILPACKEDBULKOPERATIONPACKEDSINGLEBLOCK_H



#import "OrgApacheLuceneUtilPackedBulkOperation.h"

@interface OrgApacheLuceneUtilPackedBulkOperationPackedSingleBlock : OrgApacheLuceneUtilPackedBulkOperation {
    int bitsPerValue_;
    int valueCount_;
    NSInteger mask_;
}




-(id)initWithInt:(int)arg0 ;
-(int)longBlockCount;
-(int)byteBlockCount;
-(int)longValueCount;
-(int)byteValueCount;
-(int)decodeWithLong:(NSInteger)arg0 withLongArray:(id)arg1 withInt:(int)arg2 ;
-(int)decodeWithLong:(NSInteger)arg0 withIntArray:(id)arg1 withInt:(int)arg2 ;
-(NSInteger)encodeWithLongArray:(id)arg0 withInt:(int)arg1 ;
-(NSInteger)encodeWithIntArray:(id)arg0 withInt:(int)arg1 ;
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