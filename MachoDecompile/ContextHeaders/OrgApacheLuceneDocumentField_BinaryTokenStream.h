// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEDOCUMENTFIELD_BINARYTOKENSTREAM_H
#define ORGAPACHELUCENEDOCUMENTFIELD_BINARYTOKENSTREAM_H



#import "OrgApacheLuceneAnalysisTokenStream.h"
#import "OrgApacheLuceneUtilBytesRef.h"
#import "OrgApacheLuceneAnalysisTokenattributesBytesTermAttribute-Protocol.h"

@interface OrgApacheLuceneDocumentField_BinaryTokenStream : OrgApacheLuceneAnalysisTokenStream {
    id<OrgApacheLuceneAnalysisTokenattributesBytesTermAttribute> *bytesAtt_;
    BOOL used_;
    OrgApacheLuceneUtilBytesRef *value_;
}




-(id)init;
-(void)setValueWithOrgApacheLuceneUtilBytesRef:(id)arg0 ;
-(BOOL)incrementToken;
-(void)reset;
-(void)close;
-(void)dealloc;


@end


#endif