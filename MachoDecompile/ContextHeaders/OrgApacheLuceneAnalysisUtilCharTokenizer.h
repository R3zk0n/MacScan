// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISUTILCHARTOKENIZER_H
#define ORGAPACHELUCENEANALYSISUTILCHARTOKENIZER_H



#import "OrgApacheLuceneAnalysisTokenizer.h"
#import "OrgApacheLuceneAnalysisUtilCharacterUtils.h"
#import "OrgApacheLuceneAnalysisUtilCharacterUtils_CharacterBuffer.h"
#import "OrgApacheLuceneAnalysisTokenattributesCharTermAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesOffsetAttribute-Protocol.h"

@interface OrgApacheLuceneAnalysisUtilCharTokenizer : OrgApacheLuceneAnalysisTokenizer {
    int offset_;
    int bufferIndex_;
    int dataLen_;
    int finalOffset_;
    id<OrgApacheLuceneAnalysisTokenattributesCharTermAttribute> *termAtt_;
    id<OrgApacheLuceneAnalysisTokenattributesOffsetAttribute> *offsetAtt_;
    OrgApacheLuceneAnalysisUtilCharacterUtils *charUtils_;
    OrgApacheLuceneAnalysisUtilCharacterUtils_CharacterBuffer *ioBuffer_;
}




-(id)init;
-(id)initWithOrgApacheLuceneUtilAttributeFactory:(id)arg0 ;
-(int)normalizeWithInt:(int)arg0 ;
-(BOOL)incrementToken;
-(void)end;
-(void)reset;
-(void)dealloc;


@end


#endif