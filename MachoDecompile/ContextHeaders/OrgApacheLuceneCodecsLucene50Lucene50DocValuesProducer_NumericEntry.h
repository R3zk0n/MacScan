// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_NUMERICENTRY_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_NUMERICENTRY_H


#import <Foundation/Foundation.h>

#import "IOSLongArray.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_NumericEntry : NSObject {
    NSInteger missingOffset_;
    NSInteger offset_;
    NSInteger endOffset_;
    int bitsPerValue_;
    int format_;
    int packedIntsVersion_;
    NSInteger count_;
    int blockSize_;
    NSInteger minValue_;
    NSInteger gcd_;
    IOSLongArray *table_;
}




-(id)init;
-(void)dealloc;


@end


#endif