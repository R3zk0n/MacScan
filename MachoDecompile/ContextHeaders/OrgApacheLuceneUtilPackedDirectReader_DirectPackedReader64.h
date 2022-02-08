// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEUTILPACKEDDIRECTREADER_DIRECTPACKEDREADER64_H
#define ORGAPACHELUCENEUTILPACKEDDIRECTREADER_DIRECTPACKEDREADER64_H



#import "OrgApacheLuceneUtilLongValues.h"
#import "OrgApacheLuceneStoreRandomAccessInput-Protocol.h"

@interface OrgApacheLuceneUtilPackedDirectReader_DirectPackedReader64 : OrgApacheLuceneUtilLongValues {
    id<OrgApacheLuceneStoreRandomAccessInput> *in_;
}




-(id)initWithOrgApacheLuceneStoreRandomAccessInput:(id)arg0 ;
-(NSInteger)getWithLong:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif