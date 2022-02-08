// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSFORMATREADONLY_H
#define ORGAPACHELUCENECODECSLUCENE50AAPL50POSTINGSFORMATREADONLY_H



#import "OrgApacheLuceneCodecsPostingsFormat.h"

@interface OrgApacheLuceneCodecsLucene50AAPL50PostingsFormatReadOnly : OrgApacheLuceneCodecsPostingsFormat {
    int minTermBlockSize_;
    int maxTermBlockSize_;
}




-(id)init;
-(id)initWithInt:(int)arg0 withInt:(int)arg1 ;
-(id)description;
-(id)fieldsConsumerWithOrgApacheLuceneIndexSegmentWriteState:(id)arg0 ;
-(id)fieldsProducerWithOrgApacheLuceneIndexSegmentReadState:(id)arg0 ;


@end


#endif