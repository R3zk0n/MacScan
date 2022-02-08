// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCODECUTIL_H
#define ORGAPACHELUCENECODECSCODECUTIL_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneCodecsCodecUtil : NSObject



-(id)init;
+(void)writeHeaderWithOrgApacheLuceneStoreDataOutput:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 ;
+(void)writeIndexHeaderWithOrgApacheLuceneStoreDataOutput:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withByteArray:(id)arg3 withNSString:(id)arg4 ;
+(int)headerLengthWithNSString:(id)arg0 ;
+(int)indexHeaderLengthWithNSString:(id)arg0 withNSString:(id)arg1 ;
+(int)checkHeaderWithOrgApacheLuceneStoreDataInput:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)checkHeaderNoMagicWithOrgApacheLuceneStoreDataInput:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 ;
+(int)checkIndexHeaderWithOrgApacheLuceneStoreDataInput:(id)arg0 withNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withByteArray:(id)arg4 withNSString:(id)arg5 ;
+(id)checkIndexHeaderIDWithOrgApacheLuceneStoreDataInput:(id)arg0 withByteArray:(id)arg1 ;
+(id)checkIndexHeaderSuffixWithOrgApacheLuceneStoreDataInput:(id)arg0 withNSString:(id)arg1 ;
+(void)writeFooterWithOrgApacheLuceneStoreIndexOutput:(id)arg0 ;
+(int)footerLength;
+(NSInteger)checkFooterWithOrgApacheLuceneStoreChecksumIndexInput:(id)arg0 ;
+(void)checkFooterWithOrgApacheLuceneStoreChecksumIndexInput:(id)arg0 withJavaLangThrowable:(id)arg1 ;
+(NSInteger)retrieveChecksumWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
+(void)checkEOFWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
+(NSInteger)checksumEntireFileWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
+(NSInteger)readCRCWithOrgApacheLuceneStoreIndexInput:(id)arg0 ;
+(void)writeCRCWithOrgApacheLuceneStoreIndexOutput:(id)arg0 ;


@end


#endif