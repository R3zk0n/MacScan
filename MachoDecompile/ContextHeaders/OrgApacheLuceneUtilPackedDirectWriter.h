// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDDIRECTWRITER_H
#define ORGAPACHELUCENEUTILPACKEDDIRECTWRITER_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneStoreIndexOutput.h"
#import "IOSByteArray.h"
#import "IOSLongArray.h"
#import "OrgApacheLuceneUtilPackedBulkOperation.h"

@interface OrgApacheLuceneUtilPackedDirectWriter : NSObject {
    int bitsPerValue_;
    NSInteger numValues_;
    OrgApacheLuceneStoreIndexOutput *output_;
    NSInteger count_;
    BOOL finished_;
    int off_;
    IOSByteArray *nextBlocks_;
    IOSLongArray *nextValues_;
    OrgApacheLuceneUtilPackedBulkOperation *encoder_;
    int iterations_;
}




-(id)initWithOrgApacheLuceneStoreIndexOutput:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
-(void)addWithLong:(NSInteger)arg0 ;
-(void)flush;
-(void)finish;
-(void)dealloc;
+(id)getInstanceWithOrgApacheLuceneStoreIndexOutput:(id)arg0 withLong:(NSInteger)arg1 withInt:(int)arg2 ;
+(int)bitsRequiredWithLong:(NSInteger)arg0 ;
+(int)unsignedBitsRequiredWithLong:(NSInteger)arg0 ;
+(void)initialize;


@end


#endif