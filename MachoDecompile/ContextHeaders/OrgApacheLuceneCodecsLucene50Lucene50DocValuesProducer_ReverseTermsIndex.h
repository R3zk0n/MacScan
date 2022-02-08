// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_REVERSETERMSINDEX_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_REVERSETERMSINDEX_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilPackedMonotonicBlockPackedReader.h"
#import "OrgApacheLuceneUtilPagedBytes_Reader.h"
#import "OrgApacheLuceneUtilAccountable-Protocol.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_ReverseTermsIndex : NSObject <OrgApacheLuceneUtilAccountable>

 {
    OrgApacheLuceneUtilPackedMonotonicBlockPackedReader *termAddresses_;
    OrgApacheLuceneUtilPagedBytes_Reader *terms_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(NSInteger)ramBytesUsed;
-(id)getChildResources;
-(id)init;
-(void)dealloc;


@end


#endif