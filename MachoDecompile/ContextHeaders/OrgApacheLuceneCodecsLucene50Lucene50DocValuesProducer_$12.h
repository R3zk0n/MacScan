// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$12_H
#define ORGAPACHELUCENECODECSLUCENE50LUCENE50DOCVALUESPRODUCER_$12_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneUtilBits-Protocol.h"
#import "OrgApacheLuceneStoreRandomAccessInput-Protocol.h"

@interface OrgApacheLuceneCodecsLucene50Lucene50DocValuesProducer_$12 : NSObject <OrgApacheLuceneUtilBits>

 {
    id<OrgApacheLuceneStoreRandomAccessInput> *val$in_;
    int val$count_;
}


@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


-(BOOL)getWithInt:(int)arg0 ;
-(int)length;
-(id)initWithOrgApacheLuceneStoreRandomAccessInput:(id)arg0 withInt:(int)arg1 ;
-(void)dealloc;


@end


#endif