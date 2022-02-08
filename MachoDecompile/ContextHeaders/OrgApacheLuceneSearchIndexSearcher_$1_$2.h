// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHINDEXSEARCHER_$1_$2_H
#define ORGAPACHELUCENESEARCHINDEXSEARCHER_$1_$2_H

@class SimScorer;



@interface OrgApacheLuceneSearchIndexSearcher_$1_$2 : SimScorer



-(float)scoreWithInt:(int)arg0 withFloat:(float)arg1 ;
-(float)computeSlopFactorWithInt:(int)arg0 ;
-(float)computePayloadFactorWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneUtilBytesRef:(id)arg3 ;
-(id)init;


@end


#endif