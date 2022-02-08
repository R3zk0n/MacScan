// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISNUMERICTOKENSTREAM_H
#define ORGAPACHELUCENEANALYSISNUMERICTOKENSTREAM_H



#import "OrgApacheLuceneAnalysisTokenStream.h"
#import "OrgApacheLuceneAnalysisNumericTokenStream_NumericTermAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesTypeAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesPositionIncrementAttribute-Protocol.h"

@interface OrgApacheLuceneAnalysisNumericTokenStream : OrgApacheLuceneAnalysisTokenStream {
    id<OrgApacheLuceneAnalysisNumericTokenStream_NumericTermAttribute> *numericAtt_;
    id<OrgApacheLuceneAnalysisTokenattributesTypeAttribute> *typeAtt_;
    id<OrgApacheLuceneAnalysisTokenattributesPositionIncrementAttribute> *posIncrAtt_;
    int valSize_;
    int precisionStep_;
}




-(id)init;
-(id)initWithInt:(int)arg0 ;
-(id)initWithOrgApacheLuceneUtilAttributeFactory:(id)arg0 withInt:(int)arg1 ;
-(id)setLongValueWithLong:(NSInteger)arg0 ;
-(id)setIntValueWithInt:(int)arg0 ;
-(id)setDoubleValueWithDouble:(CGFloat)arg0 ;
-(id)setFloatValueWithFloat:(float)arg0 ;
-(void)reset;
-(BOOL)incrementToken;
-(int)getPrecisionStep;
-(id)description;
-(void)dealloc;


@end


#endif