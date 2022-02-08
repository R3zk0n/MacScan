// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_BINARYENTRY_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_BINARYENTRY_H


#import <Foundation/Foundation.h>


@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_BinaryEntry : NSObject {
    NSInteger missingOffset_;
    NSInteger offset_;
    int format_;
    NSInteger count_;
    int minLength_;
    int maxLength_;
    NSInteger addressesOffset_;
    NSInteger reverseIndexOffset_;
    int packedIntsVersion_;
    int blockSize_;
}




-(id)init;


@end


#endif