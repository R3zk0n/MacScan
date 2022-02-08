// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEINDEXFILTERLEAFREADER_FILTERTERMS_H
#define ORGAPACHELUCENEINDEXFILTERLEAFREADER_FILTERTERMS_H



#import "OrgApacheLuceneIndexTerms.h"

@interface OrgApacheLuceneIndexFilterLeafReader_FilterTerms : OrgApacheLuceneIndexTerms {
    OrgApacheLuceneIndexTerms *in_;
}




-(id)initWithOrgApacheLuceneIndexTerms:(id)arg0 ;
-(id)iterator;
-(NSInteger)size;
-(NSInteger)getSumTotalTermFreq;
-(NSInteger)getSumDocFreq;
-(int)getDocCount;
-(BOOL)hasFreqs;
-(BOOL)hasOffsets;
-(BOOL)hasPositions;
-(BOOL)hasPayloads;
-(id)getStats;
-(void)dealloc;


@end


#endif