// Headers generated with ktool v0.19.1
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: MACOS | Minimum OS: 11.3.0 | SDK: 11.3.0


#ifndef ORGAPACHELUCENEANALYSISANALYZER_TOKENSTREAMCOMPONENTS_H
#define ORGAPACHELUCENEANALYSISANALYZER_TOKENSTREAMCOMPONENTS_H


#import <Foundation/Foundation.h>

#import "OrgApacheLuceneAnalysisTokenizer.h"
#import "OrgApacheLuceneAnalysisTokenStream.h"
#import "OrgApacheLuceneAnalysisReusableStringReader.h"

@interface OrgApacheLuceneAnalysisAnalyzer_TokenStreamComponents : NSObject {
    OrgApacheLuceneAnalysisTokenizer *source_;
    OrgApacheLuceneAnalysisTokenStream *sink_;
    OrgApacheLuceneAnalysisReusableStringReader *reusableStringReader_;
}




-(id)initWithOrgApacheLuceneAnalysisTokenizer:(id)arg0 withOrgApacheLuceneAnalysisTokenStream:(id)arg1 ;
-(id)initWithOrgApacheLuceneAnalysisTokenizer:(id)arg0 ;
-(void)setReaderWithJavaIoReader:(id)arg0 ;
-(id)getTokenStream;
-(id)getTokenizer;
-(void)dealloc;


@end


#endif