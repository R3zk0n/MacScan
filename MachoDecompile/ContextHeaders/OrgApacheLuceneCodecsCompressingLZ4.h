// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSCOMPRESSINGLZ4_H
#define ORGAPACHELUCENECODECSCOMPRESSINGLZ4_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneCodecsCompressingLZ4 : NSObject



-(id)init;
+(int)decompressWithOrgApacheLuceneStoreDataInput:(id)arg0 withInt:(int)arg1 withByteArray:(id)arg2 withInt:(int)arg3 ;
+(void)compressWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneStoreDataOutput:(id)arg3 withOrgApacheLuceneCodecsCompressingLZ4_HashTable:(id)arg4 ;
+(void)compressHCWithByteArray:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneStoreDataOutput:(id)arg3 withOrgApacheLuceneCodecsCompressingLZ4_HCHashTable:(id)arg4 ;


@end


#endif