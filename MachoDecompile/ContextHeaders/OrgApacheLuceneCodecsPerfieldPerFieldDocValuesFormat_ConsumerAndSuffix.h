// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSPERFIELDPERFIELDDOCVALUESFORMAT_CONSUMERANDSUFFIX_H
#define ORGAPACHELUCENECODECSPERFIELDPERFIELDDOCVALUESFORMAT_CONSUMERANDSUFFIX_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneCodecsDocValuesConsumer.h"
#import "JavaIoCloseable-Protocol.h"

@interface OrgApacheLuceneCodecsPerfieldPerFieldDocValuesFormat_ConsumerAndSuffix : NSObject <JavaIoCloseable>

 {
    OrgApacheLuceneCodecsDocValuesConsumer *consumer_;
    int suffix_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(void)close;
-(id)init;
-(void)dealloc;


@end


#endif