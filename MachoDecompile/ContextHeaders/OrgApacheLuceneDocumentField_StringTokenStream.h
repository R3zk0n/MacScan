// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEDOCUMENTFIELD_STRINGTOKENSTREAM_H
#define ORGAPACHELUCENEDOCUMENTFIELD_STRINGTOKENSTREAM_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneAnalysisTokenStream.h"
#import "OrgApacheLuceneAnalysisTokenattributesCharTermAttribute-Protocol.h"
#import "OrgApacheLuceneAnalysisTokenattributesOffsetAttribute-Protocol.h"

@interface OrgApacheLuceneDocumentField_StringTokenStream : OrgApacheLuceneAnalysisTokenStream {
    id<OrgApacheLuceneAnalysisTokenattributesCharTermAttribute> *termAttribute_;
    id<OrgApacheLuceneAnalysisTokenattributesOffsetAttribute> *offsetAttribute_;
    BOOL used_;
    NSString *value_;
}




-(id)init;
-(void)setValueWithNSString:(id)arg0 ;
-(BOOL)incrementToken;
-(void)end;
-(void)reset;
-(void)close;
-(void)dealloc;


@end


#endif