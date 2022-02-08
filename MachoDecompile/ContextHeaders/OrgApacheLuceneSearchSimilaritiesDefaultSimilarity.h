// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENESEARCHSIMILARITIESDEFAULTSIMILARITY_H
#define ORGAPACHELUCENESEARCHSIMILARITIESDEFAULTSIMILARITY_H



#import "OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity.h"

@interface OrgApacheLuceneSearchSimilaritiesDefaultSimilarity : OrgApacheLuceneSearchSimilaritiesTFIDFSimilarity {
    BOOL discountOverlaps_;
}




-(id)init;
-(float)coordWithInt:(int)arg0 withInt:(int)arg1 ;
-(float)queryNormWithFloat:(float)arg0 ;
-(NSInteger)encodeNormValueWithFloat:(float)arg0 ;
-(float)decodeNormValueWithLong:(NSInteger)arg0 ;
-(float)lengthNormWithOrgApacheLuceneIndexFieldInvertState:(id)arg0 ;
-(float)tfWithFloat:(float)arg0 ;
-(float)sloppyFreqWithInt:(int)arg0 ;
-(float)scorePayloadWithInt:(int)arg0 withInt:(int)arg1 withInt:(int)arg2 withOrgApacheLuceneUtilBytesRef:(id)arg3 ;
-(float)idfWithLong:(NSInteger)arg0 withLong:(NSInteger)arg1 ;
-(void)setDiscountOverlapsWithBoolean:(BOOL)arg0 ;
-(BOOL)getDiscountOverlaps;
-(id)description;
+(void)initialize;


@end


#endif