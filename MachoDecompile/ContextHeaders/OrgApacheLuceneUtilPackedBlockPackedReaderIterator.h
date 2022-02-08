// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDBLOCKPACKEDREADERITERATOR_H
#define ORGAPACHELUCENEUTILPACKEDBLOCKPACKEDREADERITERATOR_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreDataInput.h"
#import "IOSLongArray.h"
#import "OrgApacheLuceneUtilLongsRef.h"
#import "IOSByteArray.h"

@interface OrgApacheLuceneUtilPackedBlockPackedReaderIterator : NSObject {
    OrgApacheLuceneStoreDataInput *in_;
    int packedIntsVersion_;
    NSInteger valueCount_;
    int blockSize_;
    IOSLongArray *values_;
    OrgApacheLuceneUtilLongsRef *valuesRef_;
    IOSByteArray *blocks_;
    int off_;
    NSInteger ord_;
}




-(id)initWithOrgApacheLuceneStoreDataInput:(id)arg0 withInt:(int)arg1 withInt:(int)arg2 withLong:(NSInteger)arg3 ;
-(void)resetWithOrgApacheLuceneStoreDataInput:(id)arg0 withLong:(NSInteger)arg1 ;
-(void)skipWithLong:(NSInteger)arg0 ;
-(void)skipBytesWithLong:(NSInteger)arg0 ;
-(NSInteger)next;
-(id)nextWithInt:(int)arg0 ;
-(void)refill;
-(NSInteger)ord;
-(void)dealloc;
+(NSInteger)readVLongWithOrgApacheLuceneStoreDataInput:(id)arg0 ;


@end


#endif