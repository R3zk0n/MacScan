// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDPACKEDINTS_H
#define ORGAPACHELUCENEUTILPACKEDPACKEDINTS_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneUtilPackedPackedInts : NSObject



-(id)init;
+(void)checkVersionWithInt:(int)arg0 ;
+(id)fastestFormatAndBitsWithInt:(int)arg0 withInt:(int)arg1 withFloat:(float)arg2 ;
+(id)getDecoderWithOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)getEncoderWithOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(id)getReaderNoHeaderWithOrgApacheLuceneStoreDataInput:(id)arg0 withOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(id)getReaderWithOrgApacheLuceneStoreDataInput:(id)arg0 ;
+(id)getReaderIteratorNoHeaderWithOrgApacheLuceneStoreDataInput:(id)arg0 withOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
+(id)getReaderIteratorWithOrgApacheLuceneStoreDataInput:(id)arg0 withInt:(int)arg1 ;
+(id)getDirectReaderNoHeaderWithOrgApacheLuceneStoreIndexInput:(id)arg0 withOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(id)getDirectReaderWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
+(id)getMutableWithInt:(int)arg0 withInt:(int)arg1 withFloat:(float)arg2 ;
+(id)getMutableWithInt:(int)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg2 ;
+(id)getWriterNoHeaderWithOrgApacheLuceneStoreDataOutput:(id)arg0 withOrgApacheLuceneUtilPackedPackedInts_FormatEnum:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 ;
+(id)getWriterWithOrgApacheLuceneStoreDataOutput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withFloat:(float)arg3 ;
+(int)bitsRequiredWithLong:(NSInteger)arg0 ;
+(int)unsignedBitsRequiredWithLong:(NSInteger)arg0 ;
+(NSInteger)maxValueWithInt:(int)arg0 ;
+(void)copy__WithOrgApacheLuceneUtilPackedPackedInts_Reader:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilPackedPackedInts_Mutable:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 ;
+(void)copy__WithOrgApacheLuceneUtilPackedPackedInts_Reader:(id)arg0 withInt:(int)arg1 withOrgApacheLuceneUtilPackedPackedInts_Mutable:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withLongArray:(id)arg5 ;
+(int)checkBlockSizeWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 ;
+(int)numBlocksWithLong:(NSInteger)arg0 withInt:(int)arg1 ;


@end


#endif