// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENECODECSDOCVALUESCONSUMER_BITSFILTEREDTERMSENUM_H
#define ORGAPACHELUCENECODECSDOCVALUESCONSUMER_BITSFILTEREDTERMSENUM_H



#import "OrgApacheLuceneIndexFilteredTermsEnum.h"
#import "OrgApacheLuceneUtilLongBitSet.h"

@interface OrgApacheLuceneCodecsDocValuesConsumer_BitsFilteredTermsEnum : OrgApacheLuceneIndexFilteredTermsEnum {
    OrgApacheLuceneUtilLongBitSet *liveTerms_;
}




-(id)initWithOrgApacheLuceneIndexTermsEnum:(id)arg0 withOrgApacheLuceneUtilLongBitSet:(id)arg1 ;
-(id)acceptWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(void)dealloc;


@end


#endif