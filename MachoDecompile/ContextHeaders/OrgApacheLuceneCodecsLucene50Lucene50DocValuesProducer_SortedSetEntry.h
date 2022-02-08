// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_SORTEDSETENTRY_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_SORTEDSETENTRY_H


#import <Foundation/Foundation.h>

#import "IOSLongArray.h"
#import "IOSIntArray.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_SortedSetEntry : NSObject {
    int format_;
    IOSLongArray *table_;
    IOSIntArray *tableOffsets_;
}




-(id)init;
-(void)dealloc;


@end


#endif